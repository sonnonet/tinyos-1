configuration PlatformIOC{
	provides interface GeneralIO as SerialID;
	provides interface GeneralIO as PIR_Power;
	provides interface GeneralIO as PIR_IO;
	provides interface GeneralIO as PIR2_IO;
}
implementation{
	components AtmegaGeneralIOC;
	SerialID = AtmegaGeneralIOC.PortB7;
	PIR_Power = AtmegaGeneralIOC.PortB7;
	PIR_IO = AtmegaGeneralIOC.PortB7;
	PIR2_IO = AtmegaGeneralIOC.PortB7;
}
