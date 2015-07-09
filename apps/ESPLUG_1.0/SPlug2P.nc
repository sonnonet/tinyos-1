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
	uint32_t watt=0, accumulate = 0;
	uint16_t per=0;
	uint16_t on5=0, on1=0,cnt5=0, cnt1=0;
  uint16_t received_command = 0;
	norace config_t conf;
	norace uint8_t edge = 2;

	command void SPlug2.init(){
    call Spi.init();
    call Spi.cs_high();
    call Spi.cs_low();
    call Spi.writeCommand(0x8f);
    call Spi.cs_high();
  }

	command void SPlug2.readWatt(){
    readBusy = FALSE;
    {
      readBusy = TRUE;
      call Spi.cs_low();
      call Spi.writeData(0x16, CURRENT_SIZE);
      dataStatus = 1;
    }
	}

	norace uint16_t timetick=0;
  event void tTimer.fired(){
	}

  event void eTimer.fired(){
	}

  void setTimer(uint32_t repeat) {
  }

  event void Timer.fired(){
  }

	uint32_t o_watt=0, o_watt_2=0;
  event void Spi.readData(nx_uint8_t* rx_buf, uint8_t len) {
    if(dataStatus == 1)	{ //
      call Spi.cs_high();
      dataStatus = 2;
      call Spi.cs_low();
      call Spi.writeData(0x03, RAENERGY_SIZE);
		}
    else if(dataStatus == 2) {//
      call Spi.cs_high();
			{
				o_watt = 0;
				o_watt = (rx_buf[0]*256*256) + (rx_buf[1]*256) + (rx_buf[2]);
				if(o_watt > 60000L){
					o_watt = 0;
//					local.watt = o_watt;
				}
				//else if(o_watt < 74){
				else if(o_watt < 37){
					o_watt = 0;
//					local.watt = o_watt;
				}
				else if(o_watt < 130){
					o_watt = 666*o_watt * 4 / per;
					o_watt = o_watt / 100;	// 700 => 7.00watt
//					local.watt = o_watt;
				}
				else if(o_watt < 500){
					o_watt = 631*o_watt * 4 / per;
					o_watt = o_watt / 100;	// 700 => 7.00watt
//					local.watt = o_watt;
				}
				else if(o_watt < 29400){
					o_watt = 598*o_watt * 4 / per;
					o_watt = o_watt / 100;	// 700 => 7.00watt
//					local.watt = o_watt;
				}
				else {
//    				call GeneralIO.clr()
					;
				}
				signal SPlug2.readWattDone(o_watt);

				o_watt = o_watt * 278 * per;
				o_watt = o_watt / 10000;		// 700 => 7watt/hour

			}
      dataStatus = 0;
    }

    if(dataStatus == 0) {
      call Spi.cs_high();
//			if(local.info.count > 2){
			// do something
//			}
      readBusy = FALSE;
    }
  }
}

