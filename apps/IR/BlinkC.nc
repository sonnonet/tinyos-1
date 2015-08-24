
#include "Timer.h"

module BlinkC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as Timer2;
  uses interface Leds;
  uses interface Boot;
  uses interface SplitControl;
}
implementation
{ 
  event void Boot.booted()
  {
		call SplitControl.start();
    call Timer0.startPeriodic( 512 );
  }
 
  event void Timer0.fired()
  {
  }
  
  event void Timer1.fired()
  { 
  }
  
  event void Timer2.fired()
  {
  }

	event void SplitControl.startDone(error_t result){
	}

	event void SplitControl.stopDone(error_t result){
	}
}
