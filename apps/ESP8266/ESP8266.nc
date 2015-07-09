interface ESP8266{
	command uint8_t init();
	command uint8_t mode(uint8_t val);
	event void initDone();
}
