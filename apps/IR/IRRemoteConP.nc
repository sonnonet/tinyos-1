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
    interface Read<uint16_t>;
    interface SensingCommand;
  } uses {
    interface Leds;
    interface Timer<TMilli> as MilliTimer;
    interface Timer<TMilli> as SchedulerTimer;
    interface GpioInterrupt as GIO1;
    interface GeneralIO as GPIO1;
    interface GeneralIO as PWR;
    interface GeneralIO as IRControl;


#ifdef WIZBRIDGE_ENABLE
    interface Wizbridge;
#endif
  }
}

implementation
{
  uint32_t schedulerTimerPeriod=0;

  task void startDoneTask();
  command error_t SplitControl.start() {
    return post startDoneTask();
  }

  task void startDoneTask() {
    call PWR.makeOutput();
    call PWR.clr();
    call GPIO1.makeInput();
    call GIO1.enableFallingEdge();
    call IRControl.makeOutput();
    call IRControl.clr();
    schedulerTimerPeriod = 61440U * IRREMOTECON_SCHEDULER_TIMER_PERIOD; //wrong period
    signal SplitControl.startDone(SUCCESS);
  }

  task void stopDoneTask();
  command error_t SplitControl.stop() {
    return post stopDoneTask();
  }

  task void stopDoneTask() {
    signal SplitControl.stopDone(SUCCESS);
  }

  command error_t Read.read() {
    signal Read.readDone(SUCCESS, 0x1111);
    return SUCCESS;
  }

  // ir remote controler's power toggle
  void remoteControl() {
    atomic {
      call IRControl.set();
      call IRControl.clr();
    }
  }

  task void onOffTaskDone() {
    call IRControl.clr();
    call GIO1.enableFallingEdge();
    signal Read.readDone(SUCCESS, 0x1111);
  }

  task void onOffFired() {
    if(!call GPIO1.get()) call MilliTimer.startOneShot(102);
    else {
      post onOffTaskDone();
    }
  }

  async event void GIO1.fired() {
    /*
    call GIO1.disable();
    atomic call IRControl.set();
    call Leds.led1Toggle();
    post onOffFired();
    */
    return;
  }

  event void MilliTimer.fired() {
    post onOffFired();
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
  sensing_cmd_msg_t cmdMsg;

  task void exeCmd() {
    //error_t result=SUCCESS;

    switch (cmdMsg.cmdCode)
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
    //signal SensingCommand.cmdDone(result, );
  }

  command error_t SensingCommand.cmd(sensing_cmd_msg_t msg) {
    cmdMsg = msg;
    post exeCmd();
    return SUCCESS;
  }

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
