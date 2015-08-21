
#include "Timer.h"

module BlinkC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as Timer2;
  uses interface Leds;
  uses interface Boot;
}
implementation
{ 
	int cnt=0;
  event void Boot.booted()
  {
    call Timer0.startPeriodic( 512 );
  }
 
  event void Timer0.fired()
  {
//		call Leds.set(cnt;
//		call Leds.led0Toggle();
//		call Leds.led1Toggle();
		call Leds.led2Toggle();
		cnt++;
  }
  
  event void Timer1.fired()
  { 
  }
  
  event void Timer2.fired()
  {
  }
}
