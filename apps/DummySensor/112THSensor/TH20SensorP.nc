#include "Timer.h"

module TH20SensorP @safe(){
  uses {
    interface Timer<TMilli>;
    interface Leds;
    
		// Sensor Read Interface //
		interface Read<uint16_t> as Temperature;
		interface Read<uint16_t> as Humidity;
  }
}

implementation {
  event void Timer.fired() {
	}

  event void Temperature.readDone(error_t result, uint16_t data) {
	}

  event void Humidity.readDone(error_t result, uint16_t data) {
	}
}
