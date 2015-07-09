configuration ESPLUGAppC{
}
implementation{
	components MainC, ESPLUGC;
	components NoLedsC as LedsC;
	//components LedsC;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as WattT;
  components new TimerMilliC() as SoftAP;

	MainC.Boot <- ESPLUGC;
	LedsC.Leds <- ESPLUGC;
	WattT <- ESPLUGC.WattT;
	Timer0 <- ESPLUGC.Timer0;
	SoftAP <- ESPLUGC.SoftAP;

	// ESP8266 components
  components PlatformSerialC as UART;
  ESPLUGC.SerialControl -> UART.StdControl;
	components ESP8266C;
	ESPLUGC.ESP8266 -> ESP8266C;

	// SPLUG components
	components SPlug2C;
	ESPLUGC.SPlug2 -> SPlug2C;
	components PlatformIOC;
  ESPLUGC.PLUG_Power -> PlatformIOC.SPLUG2_POW;
  ESPLUGC.ESP_Power -> PlatformIOC.ESP_POW;
}
