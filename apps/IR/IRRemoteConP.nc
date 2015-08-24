/*
 * Copyright (c) 2010-2013 Sinbinet Corp.
 * All rights reserved.
 */

/**
 * Implementation for sensing sensor PIR.
 *
 * @author suchang lee <suchanglee@sinbinet.com>
 */

includes IRRemoteCon;

module IRRemoteConP
{
  provides {
    interface SplitControl;
    //interface Read<uint16_t>;
    //interface SensingCommand;
  } 
	uses {
    interface Leds;
    interface Timer<TMilli> as MilliTimer;
    interface Timer<TMilli> as SchedulerTimer;
    interface GpioInterrupt as Int27;
    interface GeneralIO as IO27;
    interface GeneralIO as IO21;
    interface GeneralIO as IO50;
    interface GeneralIO as IO51;
    interface GeneralIO as IO52;
    interface GeneralIO as IO53;

#ifdef WIZBRIDGE_ENABLE
    interface Wizbridge;
#endif
  }
}

implementation
{
  uint32_t schedulerTimerPeriod=0;

  task void startDoneTask();
  task void stopDoneTask();

  command error_t SplitControl.start() {
    return post startDoneTask();
  }

  task void startDoneTask() {
		call Leds.led0On();
    call IO50.makeOutput();
    call IO50.set();
    call IO51.makeOutput();
    call IO51.set();
    call IO52.makeOutput();
    call IO52.set();
    call IO53.makeOutput();
    call IO53.set();
    call IO27.makeInput();
    call IO27.set();
    //call Int27.enableRisingEdge();		// BTN poll
    call Int27.enableFallingEdge();		// BTN Push
    signal SplitControl.startDone(SUCCESS);
  }

  task void stopDoneTask() {
    signal SplitControl.stopDone(SUCCESS);
  }

  command error_t SplitControl.stop() {
    return post stopDoneTask();
  }
/*
  command error_t Read.read() {
    signal Read.readDone(SUCCESS, 0x1111);
    return SUCCESS;
  }
*/
  // ir remote controler's power toggle
  void remoteControl() {
    atomic {
      call IO51.set();
      call IO51.clr();
    }
  }

  task void onOffTaskDone() {
    //call IO51.clr();
    //call Int27.enableFallingEdge();
//    signal Read.readDone(SUCCESS, 0x1111);
  }

	uint8_t ispush=0;
	uint16_t cnt=0;
  task void onOffFired() {
		if(ispush){
			ispush = 0;
			call Leds.led0Off();
			call Int27.enableFallingEdge();		// BTN push
			call MilliTimer.stop();
    	call IO50.set();
		}
		else{
			ispush = 1;
			cnt=0;
			call Leds.led0On();
			call Int27.enableRisingEdge();		// BTN poll
			call MilliTimer.startPeriodic(50);
    	call IO50.clr();
		}
  }

  async event void Int27.fired() {
		call Int27.disable();
		post onOffFired();
    return;
  }

  event void MilliTimer.fired() {
		if(cnt < 40){
			call Leds.led1Toggle();
		}
		else
			call Leds.led1Off();
		cnt++;
  }

  bool schedulerIsOn=FALSE;
  task void schedulerFired() {
    if(schedulerIsOn) {
      call SchedulerTimer.stop();
    }else{
      //call SchedulerTimer.startPeriodic(schedulerTimerPeriod);
      call SchedulerTimer.startPeriodic(1024);
    }
    schedulerIsOn = ~schedulerIsOn;
  }

  event void SchedulerTimer.fired() {
    if(schedulerIsOn) {
      remoteControl();
    }
  }

  void schedulerTimerSet(uint16_t val) {
    schedulerTimerPeriod = 61440U * val;
  }

  void schedulerSet(uint16_t l_code) { // l_code is local_code
    if ( l_code == IRREMOTECON_SET_SCHEDULER_ON ) {
      if(!schedulerIsOn) {
        call SchedulerTimer.startPeriodic(1024);
        schedulerIsOn = TRUE;
      }
    } else if ( l_code == IRREMOTECON_SET_SCHEDULER_OFF ) { 
      if(schedulerIsOn) {
        call SchedulerTimer.stop();
        schedulerIsOn = FALSE;
      }
    }
  }

  uint16_t cmdCode=0, cmdVal=0;
  //sensing_cmd_msg_t cmdMsg;

  task void exeCmd() {
   /* switch (cmdMsg.cmdCode)
    {
      case IRREMOTECON_SET_SCHEDULER_TIMER_SET :
        schedulerTimerSet(0); //not implementation
      break;

      case IRREMOTECON_SET_SCHEDULER_ON : 
        schedulerSet(IRREMOTECON_SET_SCHEDULER_ON);
      break;

      case IRREMOTECON_SET_SCHEDULER_OFF :
        schedulerSet(IRREMOTECON_SET_SCHEDULER_OFF);
      break;

      case IRREMOTECON_SET_REMOCON_POWER :
        call Leds.led0Toggle();
        remoteControl();
      break;

      default : ;//result = FALSE;
      break;
    }
		*/
    //signal SensingCommand.cmdDone(result, );
  }

//  command error_t SensingCommand.cmd(uint16_t msg) {
//    cmdMsg = msg;
//    post exeCmd();
//    return SUCCESS;
//  }

#ifdef WIZBRIDGE_ENABLE
  task void wizbridgeAlarm() {
    if(call Wizbridge.getState() == SUCCESS) {
      call Leds.led2On();
    } else {
      call Leds.led2Off();
    }
  }

  event void Wizbridge.alarm() {
    post wizbridgeAlarm();
  }
#endif
}
