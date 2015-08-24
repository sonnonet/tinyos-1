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
//    interface Read<uint16_t>;
//    interface SensingCommand;
  }
}

implementation
{
  components IRRemoteConP as IRP;
  SplitControl = IRP;
//  Read = IRP;
//  SensingCommand = IRP;

  components LedsC ,
         new TimerMilliC() as TimerC,
         new TimerMilliC() as SchedulerTimerC;
  IRP.MilliTimer -> TimerC;
  IRP.SchedulerTimer -> SchedulerTimerC;
  IRP.Leds -> LedsC;

#if defined(PLATFORM_TELOSB)
  components HplMsp430InterruptC;
  components new Msp430InterruptC() as port27i;
  port27i.HplInterrupt -> HplMsp430InterruptC.Port27;
  IRP.Int27 -> port27i;

  components HplMsp430GeneralIOC , new Msp430GpioC() as port27g;
  port27g.HplGeneralIO -> HplMsp430GeneralIOC.Port27;
  IRP.IO27 -> port27g;
  components new Msp430GpioC() as port21g;
  port21g.HplGeneralIO -> HplMsp430GeneralIOC.Port21;
  IRP.IO21 -> port21g;
  components new Msp430GpioC() as port50g;
  port50g.HplGeneralIO -> HplMsp430GeneralIOC.Port50;
  IRP.IO50 -> port50g;
  components new Msp430GpioC() as port51g;
  port51g.HplGeneralIO -> HplMsp430GeneralIOC.Port51;
  IRP.IO51 -> port51g;
  components new Msp430GpioC() as port52g;
  port52g.HplGeneralIO -> HplMsp430GeneralIOC.Port52;
  IRP.IO52 -> port52g;
  components new Msp430GpioC() as port53g;
  port53g.HplGeneralIO -> HplMsp430GeneralIOC.Port53;
  IRP.IO53 -> port53g;
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
