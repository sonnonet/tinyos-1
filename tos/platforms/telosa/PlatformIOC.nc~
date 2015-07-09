configuration PlatformIOC{
	provides interface GeneralIO as SerialID;
	provides interface GeneralIO as PIR_Power;
	provides interface GeneralIO as PIR_IO;
	provides interface GeneralIO as PIR2_IO;
	provides interface GeneralIO as SPLUG2_POW;
	provides interface GeneralIO as ESP_POW;
}
implementation{
	components new Msp430GpioC() as port51g;
	SPLUG2_POW = port51g;
	components new Msp430GpioC() as port30g;
	PIR_Power = port30g;
	components new Msp430GpioC() as port24g;
	SerialID = port24g;
	components new Msp430GpioC() as port23g;
	PIR_IO = port23g;
	components new Msp430GpioC() as port21g;
	PIR2_IO = port21g;
	components new Msp430GpioC() as port26g;
	ESP_POW = port26g;

	components HplMsp430GeneralIOC;
	port51g.HplGeneralIO -> HplMsp430GeneralIOC.Port51;
	port30g.HplGeneralIO -> HplMsp430GeneralIOC.Port30;
	port24g.HplGeneralIO -> HplMsp430GeneralIOC.Port24;
	port23g.HplGeneralIO -> HplMsp430GeneralIOC.Port23;
	port21g.HplGeneralIO -> HplMsp430GeneralIOC.Port21;
	port26g.HplGeneralIO -> HplMsp430GeneralIOC.Port26;
}
