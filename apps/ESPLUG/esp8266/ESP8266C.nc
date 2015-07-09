

configuration ESP8266C
{
	provides interface ESP8266;
}
implementation
{
  components ESP8266P;
  components NoLedsC as LedsC;
  //components MainC, ESP8266P, LedsC;
  components new TimerMilliC() as ESP_INIT;
  components new TimerMilliC() as ESP_RESET;
  components new TimerMilliC() as ESP_MODE_1;
  components new TimerMilliC() as ESP_MUX;
  components new TimerMilliC() as ESP_CIPSERVER;
  components new TimerMilliC() as ESP_CON_AP;
  components new TimerMilliC() as ESP_SERVER;
  components new TimerMilliC() as ESP_SENDING;
  components new TimerMilliC() as ESP_SEND_PRESENT;

//  ESP8266P -> MainC.Boot;

	ESP8266 = ESP8266P.ESP8266;
  ESP8266P.ESP_INIT -> ESP_INIT;
  ESP8266P.ESP_RESET -> ESP_RESET;
  ESP8266P.ESP_MODE_1 -> ESP_MODE_1;
  ESP8266P.ESP_MUX -> ESP_MUX;

  ESP8266P.ESP_CIPSERVER -> ESP_CIPSERVER;
  ESP8266P.ESP_CON_AP -> ESP_CON_AP;
  ESP8266P.ESP_SERVER -> ESP_SERVER;
  ESP8266P.ESP_SENDING -> ESP_SENDING;
  ESP8266P.ESP_SEND_PRESENT -> ESP_SEND_PRESENT;
  ESP8266P.Leds -> LedsC;

  components PlatformSerialC as UART;
  ESP8266P.SerialControl -> UART.StdControl;
  ESP8266P.UartStream -> UART.UartStream;	
}

