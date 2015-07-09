// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

#include "Timer.h"
#include "Oscilloscope.h"

module BlinkC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as Timer2;
  uses interface Leds;
  uses interface Boot;

	uses interface StdControl as SerialControl;
	uses interface UartStream;

  uses interface SplitControl as RadioControl;
  uses interface AMSend;
  uses interface Receive;
}
implementation
{ 
	uint8_t SEND[6] = "ABC\n\r";
	int cnt=0;
  message_t sendBuf;
  oscilloscope_t local;

  event void Boot.booted()
  {
    call Timer1.startPeriodic( 512 );
		call SerialControl.start();
    if (call RadioControl.start() != SUCCESS)
      call Leds.led0On();
  }
 
  event void Timer0.fired()
  {
		call Leds.led0Toggle();
		call UartStream.send(SEND, 6);
		cnt++;
  }
  
  event void Timer1.fired()
  { 
		local.count++;
		call Leds.led0Toggle();
	  memcpy(call AMSend.getPayload(&sendBuf, sizeof(local)), &local, sizeof local);
	  if (call AMSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof local) != SUCCESS)
			call Leds.led2Toggle();
  }
  
  event void Timer2.fired()
  {
  }

	async event void UartStream.receivedByte(uint8_t byte){
		call Leds.led0Toggle();
		if(byte == 'a') call Leds.led1Toggle();
	}
	async event void UartStream.sendDone(uint8_t* buf, uint16_t len, error_t error){
	}
	async event void UartStream.receiveDone(uint8_t* buf, uint16_t len, error_t error){
	}

  event void RadioControl.startDone(error_t error) {
  }

  event void RadioControl.stopDone(error_t error) {
  }

  event void AMSend.sendDone(message_t* msg, error_t error) {
	}

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
		return msg;
	}
}
