configuration UserAppC{
}
implementation{
  components MainC, UserC, ESP8266C, LedsC;
  components new TimerMilliC() as T1;

  UserC -> MainC.Boot;

	UserC.ESP8266 -> ESP8266C.ESP8266;

  UserC.Leds -> LedsC;
  UserC.Timer -> T1;
}
