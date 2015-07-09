module ESPLUGC{
	uses{
		interface Boot;
		interface Leds;
  	interface Timer<TMilli> as Timer0;
  	interface Timer<TMilli> as WattT;
  	interface Timer<TMilli> as SoftAP;
		interface SPlug2;
    interface GeneralIO as PLUG_Power;
    interface GeneralIO as ESP_Power;
		interface ESP8266;
		interface StdControl as SerialControl;
	}
}
implementation{
	uint8_t DATA[100];
	uint8_t esp8266_state = 0;
	uint8_t mode_num = 0;

	uint16_t SEQNUM = 0;
	//uint8_t SSID[100] = "keti_tinyos_01";
	//uint8_t PW[100] = "allberkelery";
	//uint8_t SSID[100] = "tos_office";
	//uint8_t PW[100] = "0123456789";
	uint8_t SSID[100] = "sonnonet_rnd";
	uint8_t PW[100] = "4000012777";
	//uint8_t SSID[100] = "LED_AP";
	//uint8_t PW[100] = "";


	void boot(){
		call Timer0.startPeriodic(10240);
    call ESP_Power.makeOutput();
    call PLUG_Power.makeOutput();
		call ESP8266.init();
		call Leds.set(1);
	}


	event void Boot.booted(){
		call SerialControl.start();
		boot();
    call ESP_Power.set();
		call SPlug2.init();
    call PLUG_Power.set();
	}

	uint8_t con_done = 0;
	
	event void SoftAP.fired(){
		if((mode_num == 3) && (con_done == 0)){
			con_done = 1;
			call ESP8266.ap_conn(SSID, PW);
		}
		else if((mode_num == 2)){
			call Leds.led2Toggle();
			con_done = 1;
			//call ESP8266.webstart();
		}
	}
	uint8_t sendDone = 0;
	uint8_t sendReset = 0;
	uint32_t WATT = 0, ACC=0, OVER=0;
	event void Timer0.fired(){
		sendReset++;
		if(sendReset > 10){
			call ESP8266.init();
			//WDTCTL = 0;
		}
		if(esp8266_state == 4){
			call Leds.led1Toggle();
			if(sendDone == 0){
				sendReset = 0;
				sendDone = 1;
				DATA[0]=0x7e;
				DATA[1]=0x45;
				DATA[2]=0x00;
				DATA[3]=0xff;
				DATA[4]=0xff;
				DATA[5]=0x00;
				DATA[6]=0x00;
				DATA[7]=0x14;
				DATA[8]=0x00;
				DATA[9]=0x63;
				DATA[10]=0x00;
				DATA[11]=0x72;									// type  0x72 SPLUG2
				DATA[12]=0x00;
				DATA[13]=0x70;
				DATA[14]=0x92;
				DATA[15]=0xab;
				DATA[16]=0xd5;
				DATA[17]=0x15;									// Serial ID
				DATA[18]=(TOS_NODE_ID >> 8);    // TOS_ID_HIGH
				DATA[19]=(TOS_NODE_ID & 0xFF);	// TOS_ID_LOW
				DATA[20]=(SEQNUM >> 8);					// SEQ_HIGH
				DATA[21]=(SEQNUM & 0xFF);				// SEQ_LOW
				SEQNUM++;
				DATA[22]=0x00;			// BETTRY_HIGH
				DATA[23]=0x2e;			// BETTRY_LOW
				DATA[24]=((WATT >> 24) & 0xFF);			// WATT_4
				DATA[25]=((WATT >> 16) & 0xFF);			// WATT_3
				DATA[26]=((WATT >> 8) & 0xFF);			// WATT_2
				DATA[27]=(WATT & 0xFF);			// WATT_1
				DATA[28]=((OVER >> 24) & 0xFF);			// ACCWATT_4
				DATA[29]=((OVER >> 16) & 0xFF);			// ACCWATT_3
				DATA[30]=((OVER >> 8) & 0xFF);			// ACCWATT_2
				DATA[31]=(OVER & 0xFF);			// ACCWATT_1
				DATA[32]=0x04;			// OVER_4
				DATA[33]=0x03;			// OVER_3
				DATA[34]=0x02;			// OVER_2
				DATA[35]=0x01;			// OVER_1
				DATA[36]=0x47;
				DATA[37]=0x73;
				DATA[38]=0x7e;
				call ESP8266.send(DATA, 39);
			}
		}
	}

	event void WattT.fired(){
	}

	event void SPlug2.readWattDone(uint32_t watt, uint32_t acc){
		WATT = watt;
		ACC = acc;
	// data = 700 => 7.00watt
	}

	event void ESP8266.initDone(uint8_t success){
		if(success == 1){
			call SoftAP.stop();
			call Leds.set(2);
			call ESP8266.mode(1);	// 1: Client, 2: Soft-AP, 3: Both
		}
		else {
			call ESP8266.init();
			boot();
			call Leds.set(7);
			//WDTCTL = 0;
		}
	}

	event void ESP8266.modeDone(uint8_t TYPE){
		mode_num = TYPE;
		if( TYPE == 1 ){
			call ESP8266.ap_conn(SSID, PW);
		}
		else if(TYPE == 2){
			call ESP8266.mux_sec(1);											// 0 = one user,  1 = multi user
		}	
		else if(TYPE == 3){
			call ESP8266.mux_sec(1);											// 0 = one user,  1 = multi user
		}	
		else if( (TYPE == 0) ){
			call ESP8266.init();
		}
		call Leds.set(3);
	}

	uint8_t CIPPORT[20]="80";
	event void ESP8266.muxDone(uint8_t success){
		if(success == 1){
			call ESP8266.cipserver(1, CIPPORT);
			call Leds.set(4);
		}
		else{
			call ESP8266.init();
			//WDTCTL = 0;
		}
	}
// soft AP 2 => ap_conn is not neseccery
	event void ESP8266.cipserverDone(uint8_t success){
		if(success == 1){
			call Leds.set(0);
			call SoftAP.startPeriodic(2048);
		}
		else {
			call ESP8266.init();
			//WDTCTL = 0;
		}
	}

	event void ESP8266.webstart(){
			call ESP8266.webhello();
	}

	uint8_t TYPE[10] = "TCP";
	uint8_t IP[100] = "222.239.78.8";
	uint8_t PORT[20] = "1120";
//	uint8_t IP[100] = "192.168.0.2";
//	uint8_t PORT[20] = "1120";
	event void ESP8266.apDone(uint8_t success){
		call Leds.set(3);
		if(success == 1){
			call ESP8266.server_conn(TYPE , IP , PORT);
		}
		else{
			call ESP8266.init();
		}
	}

	event void ESP8266.serverDone(uint8_t success){
		call Leds.set(4);
		if(success == 1){
			esp8266_state = 4;
			sendDone = 0;
		}
		else{
			esp8266_state = 0;
			signal ESP8266.apDone(1);
		}
	}

	event void ESP8266.sendDone(uint8_t success){
		if(success == 1){
				sendDone = 0;
		}
		else{
			signal ESP8266.apDone(1);
		}
	}
}
