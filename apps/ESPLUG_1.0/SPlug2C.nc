#include "StorageVolumes.h"

configuration SPlug2C { 
  provides interface SPlug2;
}

implementation {
  components SPlug2P, new TimerMilliC()
		, new TimerMilliC() as enableTimer
		, new TimerMilliC() as tickTimer;

  SPlug2 = SPlug2P.SPlug2;
  SPlug2P.Timer -> TimerMilliC;
  SPlug2P.eTimer -> enableTimer.Timer;
  SPlug2P.tTimer -> tickTimer.Timer;

  components LedsC as NoLedsC;
  //components NoLedsC;
  SPlug2P.Leds -> NoLedsC;

  components ADE7763C;
  SPlug2P.Spi -> ADE7763C; 

  components BusyWaitMicroC;
  SPlug2P.BusyWait -> BusyWaitMicroC;
}
