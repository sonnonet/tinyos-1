configuration PlatformINTC{
	provides interface GpioInterrupt as PIR_INT;
	provides interface GpioInterrupt as PIR2_INT;
}
implementation{
	components new Msp430InterruptC() as port23i;
	PIR_INT = port23i;
	components new Msp430InterruptC() as port21i;
	PIR2_INT = port21i;

	components HplMsp430InterruptC;
	port23i.HplInterrupt -> HplMsp430InterruptC.Port23;
	port21i.HplInterrupt -> HplMsp430InterruptC.Port21;
}
