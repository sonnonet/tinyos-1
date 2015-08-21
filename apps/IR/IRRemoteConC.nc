/*
 * Copyright (c) 2010-2013 Sinbinet Corp.
 * All rights reserved.
 */

/**
 * Implementation for sensing sensor PIR.
 *
 * @author suchang lee <suchanglee@sinbinet.com>
 */

configuration IRRemoteConC
{
  provides {
    interface SplitControl;
    interface Read<uint16_t>;
    interface SensingCommand;
  }
}

implementation
{
  components IRRemoteConP as IRP;
  SplitControl = IRP;
  Read = IRP;
  SensingCommand = IRP;

  components LedsC ,
         new TimerMilliC() as TimerC,
         new TimerMilliC() as SchedulerTimerC;
  IRP.MilliTimer -> TimerC;
  IRP.SchedulerTimer -> SchedulerTimerC;
  IRP.Leds -> LedsC;

#if defined(PLATFORM_TELOSB)
  //not implementation
#elif defined(PLATFORM_MANGO2)
  components HplMG245XInterruptC, 
         //new MG245XInterruptC() as PortGIO0,
         new MG245XInterruptC() as PortGIO1;
  //PortGIO0.HplInterrupt -> HplMG245XInterruptC.Port32;
  PortGIO1.HplInterrupt -> HplMG245XInterruptC.Port33;

  components HplMG245XGeneralIOC, 
         //new MG245XGpioC() as PortGPIO0,
         new MG245XGpioC() as PortGPIO1,
         new MG245XGpioC() as IRControlC;
  //PortGPIO0.HplGeneralIO -> HplMG245XGeneralIOC.Port32;
  PortGPIO1.HplGeneralIO -> HplMG245XGeneralIOC.Port33;
  IRControlC.HplGeneralIO -> HplMG245XGeneralIOC.Port37;

  components new MG245XGpioC() as Port01g;
  Port01g -> HplMG245XGeneralIOC.Port01;
  IRP.PWR -> Port01g;

  components StIntTimerC;
  //IRP.GIO0 -> StIntTimerC.GIO0;
  IRP.GIO1 -> StIntTimerC.GIO1;

  //IRP.GIO0 -> PortGIO0;
  IRP.GIO1 -> PortGIO1;
  //IRP.GPIO0 -> PortGPIO0;
  IRP.GPIO1 -> PortGPIO1;
  IRP.IRControl -> IRControlC;
#endif

#ifdef WIZBRIDGE_ENABLE
  components WizbridgeC;
  IRP.Wizbridge -> WizbridgeC;
#endif
}
