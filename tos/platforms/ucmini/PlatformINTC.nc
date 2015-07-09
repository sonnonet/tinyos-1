configuration PlatformINTC{
	provides interface GpioInterrupt as PIR_INT;
	provides interface GpioInterrupt as PIR2_INT;
}
implementation{
	components new AtmegaInterruptC() as port23i;
	PIR_INT = port23i;
	PIR2_INT = port23i;

}
