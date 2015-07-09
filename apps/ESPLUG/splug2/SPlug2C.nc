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

  components new ConfigStorageC(VOLUME_CONFIGTEST);
  SPlug2P.Config -> ConfigStorageC.ConfigStorage;
  SPlug2P.Mount  -> ConfigStorageC.Mount;

  components HplMsp430GeneralIOC, new Msp430GpioC() as port51g; 
  port51g.HplGeneralIO -> HplMsp430GeneralIOC.Port51;		// Power On/Off
  SPlug2P.GeneralIO -> port51g;				// Power On/Off

  components HplMsp430InterruptC, new Msp430InterruptC() as port20i;
  port20i.HplInterrupt -> HplMsp430InterruptC.Port20;
	SPlug2P.BTN20I -> port20i;

  components new Msp430GpioC() as port20g;
  port20g.HplGeneralIO -> HplMsp430GeneralIOC.Port20;
  SPlug2P.BTN20G -> port20g;

}
