module ESPLUGC{
	uses{
		interface Boot;
		interface Leds;
  	interface Timer<TMilli> as Timer0;
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

	uint8_t SSID[100] = "LED_AP";
	uint8_t PW[100] = "";

	void boot(){
//		call SPlug2.init();
		call Timer0.startPeriodic(3000);
    call ESP_Power.makeOutput();
    call PLUG_Power.makeOutput();
		call ESP8266.init();
		call Leds.set(1);
	}


	event void Boot.booted(){
		call SerialControl.start();
		boot();
    call ESP_Power.set();
    call PLUG_Power.set();
	}

	uint8_t con_done = 0;
	event void SoftAP.fired(){
		call Leds.led2Toggle();
		if((mode_num == 3) && (con_done == 0)){
			con_done = 1;
			call ESP8266.ap_conn(SSID, PW);
		}
	}
	uint8_t sendDone = 0;
	event void Timer0.fired(){
		if(esp8266_state == 4){
			call Leds.set(0);
			if(sendDone == 0){
				call Leds.led1On();
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
				DATA[11]=0x63;
				DATA[12]=0x00;
				DATA[13]=0x70;
				DATA[14]=0x92;
				DATA[15]=0xab;
				DATA[16]=0xd5;
				DATA[17]=0x15;
				DATA[18]=0x00;
				DATA[19]=0x00;
				DATA[20]=0x00;
				DATA[21]=0x54;
				DATA[22]=0x00;
				DATA[23]=0x2e;
				DATA[24]=0x0b;
				DATA[25]=0xb7;
				DATA[26]=0x00;
				DATA[27]=0x01;
				DATA[28]=0x00;
				DATA[29]=0x02;
				DATA[30]=0x0E;
				DATA[31]=0x16;
				DATA[32]=0x47;
				DATA[33]=0x73;
				DATA[34]=0x7e;
				call ESP8266.send(DATA, 35);
			}
		}
		//call SPlug2.readWatt();
	}

	event void SPlug2.readWattDone(uint32_t data){
	// data = 700 => 7.00watt
//			call Leds.led0Toggle();
	}

	event void ESP8266.initDone(uint8_t success){
		if(success == 1){
			call SoftAP.stop();
			esp8266_state = 1;
			call ESP8266.mode(3);	// MODE
			call Leds.set(2);
		}
		else {
    	//call ESP_Power.clr();
			call Leds.set(7);
			WDTCTL = 0;
			//boot();
		}
	}

	event void ESP8266.modeDone(uint8_t TYPE){
		esp8266_state = 2;
		mode_num = TYPE;
		if( TYPE == 1 ){
			call ESP8266.ap_conn(SSID, PW);
		}
		else if( (TYPE == 2)||(TYPE == 3) ){
			call ESP8266.mux_sec(1);											// 0 = one user,  1 = multi user
		}	
		else if( (TYPE == 0) ){
			call Leds.set(7);
			WDTCTL = 0;
		}
		call Leds.set(3);
	}

	uint8_t CIPPORT[20]="80";
	event void ESP8266.muxDone(uint8_t success){
		esp8266_state = 5;
		if(success == 1){
			call ESP8266.cipserver(1, CIPPORT);
		}
		call Leds.set(4);
	}

	event void ESP8266.cipserverDone(uint8_t success){
		esp8266_state = 6;
		if(success == 1){
			call Leds.set(0);
			call SoftAP.startPeriodic(2048);
		}
	}

	event void ESP8266.webstart(){
			call ESP8266.webhello();
	}

	uint8_t TYPE[10] = "TCP";
	uint8_t IP[100] = "192.168.0.6";
	uint8_t PORT[20] = "2222";
	event void ESP8266.apDone(uint8_t success){
		call Leds.set(3);
		if(success == 1){
			esp8266_state = 3;
			call ESP8266.server_conn(TYPE , IP , PORT);
		}
		else call Leds.set(7);
	}

	event void ESP8266.serverDone(uint8_t success){
		call Leds.set(4);
		if(success == 1){
			esp8266_state = 4;
		}
		else call Leds.set(7);
	}

	event void ESP8266.sendDone(uint8_t success){
		call Leds.led2Off();
		if(success == 1){
				sendDone = 0;
		}
		else call Leds.set(7);
	}
}
