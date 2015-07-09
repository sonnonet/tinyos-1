interface ESP8266{
	command uint8_t init();
	command uint8_t mode(uint8_t);
	command void ap_conn(uint8_t*, uint8_t*);
	command void server_conn(uint8_t*, uint8_t* , uint8_t*);
	command void send(uint8_t*, uint8_t);
	command void mux_sec(uint8_t);
	command void cipserver(uint8_t onoff, uint8_t *P);
	command void webhello();

	event void initDone(uint8_t);
	event void modeDone(uint8_t);
	event void apDone(uint8_t);
	event void serverDone(uint8_t);
	event void sendDone(uint8_t);
	event void muxDone(uint8_t);
	event void cipserverDone(uint8_t);
	event void webstart();
}
