#include "Timer.h"
//#include "../../Yggdrasil.h"
#include "Serial.h"
#include "./Command.h"

module SPlug2P {
  provides {
    interface SPlug2;
  }
  uses {
    interface ADE7763 as Spi;
    interface Timer<TMilli>;
    interface Timer<TMilli> as eTimer;
    interface Timer<TMilli> as tTimer;
    interface Leds;
    interface BusyWait<TMicro,uint16_t> as BusyWait;
    interface GeneralIO;
		interface ConfigStorage as Config;
		interface Mount as Mount;
    interface GpioInterrupt as BTN20I;
    interface GeneralIO as BTN20G;
  }
}

implementation {
	typedef struct config_t {
		uint32_t accumulate;
		uint32_t overcount;
	} config_t;

  bool sendbusy=FALSE;
  uint32_t interval;
  norace uint8_t dataStatus=0;			//Get Data from ADE
  bool readBusy = FALSE;	
	norace uint32_t watt=0, accumulate = 0, overcount=0;
	uint16_t per=2, count=0;
	uint16_t on5=0, on1=0,cnt5=0, cnt1=0;
  uint16_t received_command = 0;
	norace config_t conf;
	norace uint8_t edge = 2;

  command void SPlug2.init() {
		if(call Mount.mount() != SUCCESS) {
		}
    call Spi.init();

    call Spi.cs_high();
    call Spi.cs_low();
    call Spi.writeCommand(0x8f);
    call Spi.cs_high();
		call BusyWait.wait(10);

    call BTN20G.makeInput();
    call BTN20G.set();
		call BusyWait.wait(10);
    call BTN20G.clr();
    call BTN20I.enableFallingEdge();
		edge = 2;

    call GeneralIO.makeOutput();
    call GeneralIO.set();

		call Timer.startPeriodic(2048);
  }

	norace uint16_t timetick=0;
	uint32_t power_out=0;
  async event void BTN20I.fired() {
		power_out = 0;
		call BTN20I.disable();
		if(edge == 1){
			if(timetick < 20){
	  	  call BTN20G.clr();
				if(call GeneralIO.get() == 0){
					call Leds.led2On();
					call GeneralIO.set();
				}
				else{
					call Leds.led2Off();
					call GeneralIO.clr();
				}
			}
			else if(timetick < 40){
				;
			}
			else if(timetick < 80){
				conf.accumulate = accumulate = 0;
				conf.overcount = overcount = 0;
				call Config.write(0, &conf, sizeof(conf));
			}
			else {
			}
			call tTimer.stop();
			call Leds.led0Off();
			call Leds.led1Off();
		}
		else if (edge == 0){
	  	call BTN20G.clr();
			call BTN20I.disable();
			timetick=0;
			call tTimer.startPeriodic(256);
		}
		call eTimer.startOneShot(512);
	}

  event void tTimer.fired(){
		timetick++;
		if(timetick > 80) // 20 sec
			call Leds.set(0);
		else if(timetick > 40) // 10 sec
			call Leds.led0On();
		else if(timetick > 20) // 5sec
			call Leds.led1On();
	}

  event void eTimer.fired(){
		if(edge == 0){
			edge = 1;
    	call BTN20I.enableRisingEdge();
		}
		else{
			edge = 0;
    	call BTN20I.enableFallingEdge();
		}
	}

	uint8_t state = 0, o_state = 0;

  event void Timer.fired(){
    {
			call Leds.led1On();
      //readBusy = TRUE;
      //call Spi.cs_low();
      //call Spi.writeData(0x16, CURRENT_SIZE);
      //dataStatus = 1;
      dataStatus = 2;
      call Spi.cs_low();
      call Spi.writeData(0x03, RAENERGY_SIZE);
    }
/*
		if(count < 5){
    	call GeneralIO.set();
		}
		
		if(call GeneralIO.get() == 1){
			call Leds.led2On();
		}
		else{
			call Leds.led2Off();
		}

		state = call GeneralIO.get();
*/
  }

	uint32_t o_watt=0;
	uint32_t o_watt_2=0;
  event void Spi.readData(nx_uint8_t* rx_buf, uint8_t len) {
    if(dataStatus == 1)	{ //
      call Spi.cs_high();
      dataStatus = 2;
      call Spi.cs_low();
      call Spi.writeData(0x03, RAENERGY_SIZE);
		}
    else if(dataStatus == 2) {	//
			call Leds.led1Off();
      call Spi.cs_high();
			{
				o_watt = 0;
				o_watt = (rx_buf[0]*256*256) + (rx_buf[1]*256) + (rx_buf[2]);
				if(o_watt > 60000){
					o_watt = 0;
					watt = o_watt;
				}
				else if(o_watt < 37){
					o_watt = 0;
					watt = o_watt;
					power_out++;
					//if(power_out >= 150)
    				//call GeneralIO.clr();
				}
				else if(o_watt < 130){
					o_watt = 666*o_watt * 4 / per;
					o_watt = o_watt / 100;	// 700 => 7.00watt
					watt = o_watt;
				}
				else if(o_watt < 500){
					o_watt = 631*o_watt * 4 / per;
					o_watt = o_watt / 100;	// 700 => 7.00watt
					watt = o_watt;
				}
				else if(o_watt < 29400){
					o_watt = 598*o_watt * 4 / per;
					o_watt = o_watt / 100;	// 700 => 7.00watt
					watt = o_watt;
				}
				else {
    		//		call GeneralIO.clr();
				}
				if ( watt > 0)
					call Leds.led0Toggle();
				o_watt = o_watt * 278 * per;
				o_watt = o_watt / 10000;		// 700 => 7watt/hour
				o_watt_2 = accumulate;
				accumulate += o_watt;

				if(accumulate < o_watt_2)
					overcount++;
      	dataStatus = 0;

				signal SPlug2.readWattDone(watt, accumulate);
			}

			if((count % 10) == 0) {
				conf.accumulate = accumulate;
				conf.overcount = overcount;
				call Config.write(0, &conf, sizeof(conf));
			}

      dataStatus = 0;
    }

    if(dataStatus == 0) {
      call Spi.cs_high();
      readBusy = FALSE;
    }
  }

	event void Config.readDone(storage_addr_t addr, void* buf, 
		storage_len_t len, error_t err) __attribute__((noinline)) {

		if(err == SUCCESS){
			memcpy(&conf, buf, len);

			if(conf.accumulate < 0)
				accumulate = 0;
			else
				accumulate = conf.accumulate;
			if(conf.overcount < 0 )
				conf.overcount = 0;
			else
				overcount = conf.overcount;
		}
	}

	event void Config.writeDone(storage_addr_t addr, void * buf, 
		storage_len_t len, error_t err) {
		if(err == SUCCESS) {
			if(call Config.commit() != SUCCESS) {
			}
		}
	}

	event void Config.commitDone(error_t err) {
	}

	event void Mount.mountDone(error_t error) {
		if(error == SUCCESS) {
			if(call Config.valid() == TRUE) {
				if(call Config.read(0, &conf, sizeof(conf)) != SUCCESS) {
				}
			}
			else {
				if(call Config.commit() == SUCCESS) {
				}
			}
		}
	}

	command void SPlug2.readWatt(){
	}
}

