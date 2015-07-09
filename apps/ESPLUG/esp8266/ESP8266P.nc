/**
 * Implementation for ESP8266P Driver.
 * Create by TJ, TaeHaun
 * Date 2015. 02. 06
 **/

#include "Timer.h"

module ESP8266P @safe()
{
	provides interface ESP8266;
  uses{
		interface Timer<TMilli> as ESP_INIT;
  	interface Timer<TMilli> as ESP_RESET;
  	interface Timer<TMilli> as ESP_MODE_1;
  	interface Timer<TMilli> as ESP_CON_AP;
  	interface Timer<TMilli> as ESP_SERVER;
  	interface Timer<TMilli> as ESP_SENDING;
  	interface Timer<TMilli> as ESP_SEND_PRESENT;
		interface Timer<TMilli> as ESP_MUX;
		interface Timer<TMilli> as ESP_CIPSERVER;

  	interface Leds;
//  	interface Boot;
		interface StdControl as SerialControl;
		interface UartStream;
	}
}
implementation
{ 
	enum{
		AT_INIT = 0,
    AT_RESET,
		AT_MODE_1,
		AT_MUX_0,
		AT_MUX_1,
		AT_CIPSERVER,
		AT_WEBSTART,
		AT_WEBSENDING,
    AT_CON_AP,
    AT_SERVER,
    AT_SENDING,
		AT_SEND_PRESENT,
		AT_SEND_DONE,
		AT_MODE_2,
		AT_MODE_3
	};
  int cnt;             // connect timer
	// for UART Recv
	uint8_t UART_REV[200];
	uint16_t UART_LEN = 0;
  norace int AT_STATE = 0;  // AT_CMD_state value

	// for AT CMD Recv
	uint8_t NET_MODE = 0;
	uint8_t DATA_TCP[100];
	uint8_t DATA_LEN = 0;
	uint8_t AT_CMD[200] ="";
	uint8_t Send_Data[200];
	uint8_t AT_REV[1000];
	uint8_t AT_LEN = 0;
	uint8_t AT_MODE = 0;
	//int cnt;

	void helloweb();

	uint8_t slen(uint8_t* s){
		uint8_t len=0;
		while(s[len] != 0)len++;
		return len;
	}
	void xtos(uint8_t In,uint8_t *Out){
		uint8_t Con_A=In/16;
		uint8_t Con_B=In%16;

		// front 4bit
		if(Con_A>9){    // convert string a ~ f
			Con_A=Con_A+55;
		}
		else if(Con_A<10){	// convert string 0~9
			Con_A=Con_A+48;
		}
		// second 4bit
		if(Con_B>9){    // a ~ f
			Con_B=Con_B+55;			
		}
		else if(Con_B<10){
			Con_B=Con_B+48;
		}
		
		Out[0] = Con_A;
		Out[1] = Con_B;
	}
	
	void xtoString(uint8_t *In,uint8_t *Out, uint8_t len){
		uint8_t i=0;

		for(i=0;i<len;i++){
			xtos(In[i],&(Out[2*i]));
		}
	}
	
	task void AT_REV_COMP(){
		if(AT_REV[0] == 'O'){
			if(AT_REV[1] == 'K'){
				if(AT_STATE == AT_INIT){
					call ESP_INIT.stop();
					signal ESP8266.initDone(1);
				}
				else if((AT_STATE == AT_MODE_1) || (AT_STATE == AT_MODE_2) || (AT_STATE == AT_MODE_3)){
					call ESP_MODE_1.stop();
					signal ESP8266.modeDone(AT_MODE);
				}
				else if(AT_STATE == AT_MUX_1 || AT_STATE == AT_MUX_0 ){
					call ESP_MUX.stop();
					signal ESP8266.muxDone(1);
				}
				else if(AT_STATE == AT_CIPSERVER){
					call ESP_CIPSERVER.stop();
					signal ESP8266.cipserverDone(1);
					AT_STATE = AT_WEBSTART;
				}
				else if(AT_STATE == AT_CON_AP){
       		call ESP_CON_AP.stop();
					signal ESP8266.apDone(1);
				}
				else if(AT_STATE == AT_SERVER){
       		call ESP_SERVER.stop();
					signal ESP8266.serverDone(1);
		    	//call ESP_SENDING.startPeriodic( 3072 );	
				}
				else if((AT_STATE == AT_WEBSTART) || (AT_STATE == AT_SEND_DONE)){
					signal ESP8266.webstart();
				}
				else if(AT_STATE == AT_WEBSENDING){
					AT_STATE = AT_WEBSTART;
				}
			}
		}
		else if(AT_REV[0] == 'n'){
			if(AT_REV[1] == 'o'){
				if(AT_REV[2] == ' '){
					if(AT_REV[3] == 'i'){
						if(AT_REV[4] == 'p'){
							if(AT_STATE == AT_SERVER){
       					call ESP_SERVER.stop();
								signal ESP8266.serverDone(0);
							}
						}
					}
				}
			}
		}
		else if(AT_REV[0] == 'E'){
			if(AT_REV[1] == 'R'){
				if(AT_REV[2] == 'R'){
					if(AT_REV[3] == 'O'){
						if(AT_REV[4] == 'R'){
							if(AT_STATE == AT_INIT){
								;
							}
							else if(AT_STATE == AT_RESET){
								;
							}
							else if((AT_STATE == AT_MODE_1) || (AT_STATE == AT_MODE_2) || (AT_STATE == AT_MODE_3)){
								;
							}
							else if(AT_STATE == AT_CON_AP){
       					call ESP_CON_AP.stop();
								signal ESP8266.apDone(0);
							}
							cnt=0;							
						}
					}
				}
			}
		}		
		if(AT_REV[0] == 'r'){
			if(AT_REV[1] == 'e'){
				if(AT_REV[2] == 'a'){
					if(AT_REV[3] == 'd'){
						if(AT_REV[4] == 'y'){
			//				if(AT_STATE == AT_RESET){
								call ESP_INIT.stop();
								signal ESP8266.initDone(1);
								cnt = 0;
//							}
						}
					}
				}
			}
		}
		if(AT_REV[0] == 'L'){
			if(AT_REV[1] == 'i'){
				if(AT_REV[2] == 'n'){
					if(AT_REV[3] == 'k'){
						if(AT_REV[4] == 'e'){
							if(AT_REV[5] == 'd'){
								if(AT_STATE == AT_SERVER){
				       		call ESP_SERVER.stop();
									signal ESP8266.serverDone(1);
								}
							}
						}
						if(AT_REV[4] == ' '){
							if(AT_REV[5] == 'i'){
								if(AT_REV[6] == 's'){
									if(AT_REV[7] == ' '){
										if(AT_REV[8] == 'n'){
											if(AT_REV[9] == 'o'){
												if(AT_REV[10] == 't'){
													call ESP_SENDING.stop();	
													signal ESP8266.serverDone(0);
												}
											}
										}
									}
								}
							}
						}
						if(AT_REV[4] == ' '){
							if(AT_REV[5] == 'i'){
								if(AT_REV[6] == 's'){
									call ESP_MUX.stop();
									signal ESP8266.muxDone(1);
								}
							}
						}
					}
				}
			}
		}

		if(AT_REV[0] == 'F'){
			if(AT_REV[1] == 'A'){
				if(AT_REV[2] == 'I'){
					if(AT_REV[3] == 'L'){
						if(AT_STATE == AT_CON_AP){
       				call ESP_CON_AP.stop();
							signal ESP8266.apDone(0);
        			AT_STATE = AT_MODE_1;
						}
					}
				}
			}
		}

    if(AT_REV[0] == 'u'){
			if(AT_REV[1] == 'n'){
				if(AT_REV[2] == 'l'){
					if(AT_REV[3] == 'i'){
						if(AT_REV[4] == 'n'){
							if(AT_REV[5] == 'k'){		
								if(AT_STATE == AT_SERVER){
				       		call ESP_SERVER.stop();
									signal ESP8266.serverDone(0);
								}
							}
						}
					}
				}
			}
		}

    if(AT_REV[0] == 'n'){
			if(AT_REV[1] == 'o'){
				if(AT_REV[2] == ' '){
					if(AT_REV[3] == 'c'){
						if(AT_REV[4] == 'h'){
							if(AT_REV[5] == 'a'){ 
								if(AT_REV[6] == 'n'){
									if(AT_REV[7] == 'g'){
										if(AT_REV[8] == 'e'){					
											if((AT_STATE == AT_MODE_1) || (AT_STATE == AT_MODE_2) || (AT_STATE == AT_MODE_3)){
												call ESP_MODE_1.stop();
												signal ESP8266.modeDone(AT_MODE);
												cnt = 0;
											}
											else if(AT_STATE == AT_CIPSERVER){
												call ESP_CIPSERVER.stop();
												signal ESP8266.cipserverDone(1);
												AT_STATE = AT_WEBSTART;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

    if(AT_REV[0] == 'S'){
			if(AT_REV[1] == 'E'){
				if(AT_REV[2] == 'N'){
					if(AT_REV[3] == 'D'){
						if(AT_REV[4] == ' '){
							if(AT_REV[5] == 'O'){
								if(AT_REV[6] == 'K'){
									if(AT_STATE == AT_SEND_PRESENT){
										AT_STATE = AT_SEND_DONE;
										signal ESP8266.sendDone(1);
										call ESP_SEND_PRESENT.stop();
										//cnt = 0;
									}
									if(AT_STATE == AT_WEBSENDING){
										AT_STATE = AT_WEBSTART;
									}
								}
							}
						}
					}
				}
			}
  	}

    if(AT_REV[0] == 'A'){
			if(AT_REV[1] == 'L'){
				if(AT_REV[2] == 'R'){
					if(AT_REV[3] == 'E'){
						if(AT_REV[4] == 'A'){
							if(AT_REV[5] == 'Y'){
			       		call ESP_SERVER.stop();
								signal ESP8266.serverDone(1);
							}
						}
					}
				}
			}
  	}
		memset(AT_REV, 0, 1000);
	}
/*
  event void Boot.booted()
  {
    //INIT function
    AT_STATE = AT_INIT;
		cnt = 0;
    //call Timer0.startOneShot( 2048 );	// 2 sec
    call ESP_INIT.startPeriodic( 2048 );	// 2 sec
		call SerialControl.start();
		
		//AT_MODE = 1;
  }
 */

	command uint8_t ESP8266.init(){
//		call SerialControl.start();
    AT_STATE = AT_INIT;
    call ESP_INIT.startPeriodic( 2048 );	// 2 sec
		memset(AT_CMD, 0, sizeof AT_CMD);
		cnt = 0;

//    memcpy(AT_CMD , "AT\r\n" , 5); 
//		call UartStream.send(AT_CMD, 5);
		return 0;
	}

	command uint8_t ESP8266.mode(uint8_t val){
		call ESP_INIT.stop();
		call ESP_MODE_1.startPeriodic( 2048 );
		memset(AT_CMD, 0, sizeof AT_CMD);
		cnt = 0;
		if(val == 1){
			AT_STATE = AT_MODE_1;
//      memcpy(AT_CMD , "AT+CWMODE=1\r\n" , 14); 
//			call UartStream.send(AT_CMD, 14);
      cnt ++;                           
		}
		else if(val == 2){
			AT_STATE = AT_MODE_2;
//      memcpy(AT_CMD , "AT+CWMODE=2\r\n" , 14); 
//			call UartStream.send(AT_CMD, 14);
			cnt ++;
		}
		else if(val == 3){
			AT_STATE = AT_MODE_3;
//      memcpy(AT_CMD , "AT+CWMODE=3\r\n" , 14); 
//			call UartStream.send(AT_CMD, 14);
      cnt ++;                           
		}
		NET_MODE = val;
		return 0;
	}

	
	command void ESP8266.mux_sec(uint8_t val){
		call ESP_MODE_1.stop();
		call ESP_MUX.startPeriodic( 5120 );
		memset(AT_CMD, 0, sizeof AT_CMD);
		cnt = 0;

		if(val == 0){															//soft AP mode mux 1
			AT_STATE = AT_MUX_0;
      memcpy(AT_CMD , "AT+CIPMUX=0\r\n" , 13); 
			call UartStream.send(AT_CMD, 13);
      cnt ++;                           
		}
		else if(val == 1){
			AT_STATE = AT_MUX_1;
      memcpy(AT_CMD , "AT+CIPMUX=1\r\n" , 13); 
			call UartStream.send(AT_CMD, 13);
      cnt ++;                           
		}
	}

	command void ESP8266.cipserver(uint8_t onoff, uint8_t *P){
		call ESP_MUX.stop();
		call ESP_CIPSERVER.startPeriodic( 5120 );
		memset(AT_CMD, 0, sizeof AT_CMD);
		cnt = 0;

		AT_STATE = AT_CIPSERVER;
		// port can not change
		// if you need ...... do it!!
    memcpy(AT_CMD , "AT+CIPSERVER=1,80\r\n" , 20); 
		call UartStream.send(AT_CMD, 20);
    //memcpy(AT_CMD , "AT+CIPSERVER=80\r\n" , 18); 
		//call UartStream.send(AT_CMD, 18);
    cnt ++;                           
	}

	command void ESP8266.ap_conn(uint8_t *I, uint8_t *P){
		uint8_t STR_Len=0;
		AT_STATE = AT_CON_AP;
		call ESP_MODE_1.stop();
		call ESP_CON_AP.startPeriodic( 10240 );
		cnt = 0;
		
		memset(AT_CMD, 0, sizeof AT_CMD);
		STR_Len=0;
		memcpy( AT_CMD, "AT+CWJAP=\"", 11);
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], I, slen(I));
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], "\",\"", 4);
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], P, slen(P));
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], "\"\r\n", 4);

//		memcpy(AT_CMD , "AT+CWJAP=\"sonnonet_rnd\",\"4000012777\"\r\n" , 38);
		call UartStream.send(AT_CMD, slen(AT_CMD));
	}

	command void ESP8266.server_conn(uint8_t *T , uint8_t *I , uint8_t *P){
		uint8_t STR_Len=0;
		AT_STATE = AT_SERVER;
		call ESP_CON_AP.stop();
		call ESP_SERVER.startPeriodic( 5120 );
		cnt = 0;
		
		memset(AT_CMD, 0, sizeof AT_CMD);
		STR_Len=0;
		if(NET_MODE == 1)
			memcpy( AT_CMD, "AT+CIPSTART=\"", 14);
		else
			memcpy( AT_CMD, "AT+CIPSTART=4,\"", 16);
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], T, slen(T));
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], "\",\"", 4);
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], I, slen(I));
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], "\",", 3);
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], P, slen(P));
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], "\r\n", 3);

		call UartStream.send(AT_CMD, slen(AT_CMD));
	}

	command void ESP8266.send(uint8_t *D , uint8_t len){
		uint8_t STR_Len=0;
		uint8_t LEN[2];
		AT_STATE = AT_SENDING;
		call ESP_SENDING.startPeriodic( 3000 );	
		call ESP_SERVER.stop();
		cnt = 0;

		memset(AT_CMD, 0, sizeof AT_CMD);
		STR_Len=0;
		if(NET_MODE == 1)
			memcpy(AT_CMD , "AT+CIPSEND=" , 12);
		else
			memcpy(AT_CMD , "AT+CIPSEND=4," , 14);
		STR_Len = slen(AT_CMD);

		DATA_LEN = len;
		memcpy(DATA_TCP, D, len);

		len = (len*2)+1;
		LEN[1] = len%10 + 48;
		LEN[0] = len/10 + 48;
		memcpy( &AT_CMD[STR_Len], LEN, 2);
		STR_Len = slen(AT_CMD);
		memcpy( &AT_CMD[STR_Len], "\r\n", 3);
		call UartStream.send(AT_CMD, slen(AT_CMD)+1);
	}

  event void ESP_INIT.fired()		// event 2sec
  {
    if(cnt == 6){
      cnt = 0;         
			call ESP_INIT.stop();
//			call ESP_RESET.startPeriodic( 2048 );
			signal ESP8266.initDone(0);
    }
		else if(AT_STATE == AT_INIT){
      memcpy(AT_CMD , "AT+RST\r\n" , 8);
			call UartStream.send(AT_CMD, 8);
      cnt ++;         
		}
  }
  
  event void ESP_RESET.fired()  //event 2sec
  { 
    if(cnt == 6){
      cnt = 0;
			call ESP_RESET.stop();
    }
		if(AT_STATE == AT_RESET){
      memcpy(AT_CMD , "AT+RST\r\n" , 8); 
			call UartStream.send(AT_CMD, 8);
      cnt ++;                           
		}
  }
  
  event void ESP_MODE_1.fired()   // event 5sec 
  {
    if(cnt == 6){
      cnt = 0;
			call ESP_MODE_1.stop();
    }
		if(AT_STATE == AT_MODE_1){
      memcpy(AT_CMD , "AT+CWMODE=1\r\n" , 14); 
			call UartStream.send(AT_CMD, 14);
			AT_MODE = 1;
      cnt ++;                           
		}
		else if(AT_STATE == AT_MODE_2){
			memcpy(AT_CMD , "AT+CWMODE=2\r\n" , 14);
			call UartStream.send(AT_CMD, 14);
			AT_MODE = 2;
			cnt ++;
		}
		else if(AT_STATE == AT_MODE_3){
      memcpy(AT_CMD , "AT+CWMODE=3\r\n" , 14); 
			call UartStream.send(AT_CMD, 14);
			AT_MODE = 3;
      cnt ++;                           
		}
  }

	event void ESP_MUX.fired()	// event 5sec
	{
    if(cnt == 6){
      cnt = 0;
			signal ESP8266.muxDone(0);
			call ESP_MUX.stop();
    }
		if(AT_STATE == AT_MUX_0){
      memcpy(AT_CMD , "AT+CIPMUX=0\r\n" , 13); 
			call UartStream.send(AT_CMD, 13);
      cnt ++;                           
		}
//AT_MUX_0 or AT_MUX_1 because mode 1 = AT_CIPMUX=0;
		if(AT_STATE == AT_MUX_1){
			memcpy(AT_CMD , "AT+CIPMUX=1\r\n" , 13);
			call UartStream.send(AT_CMD, 13);
			cnt ++;
		}
	}

	event void ESP_CIPSERVER.fired(){	// event 5sec
    if(cnt == 6){
      cnt = 0;
			signal ESP8266.cipserverDone(0);
			call ESP_CIPSERVER.stop();
    }
		if(AT_STATE == AT_CIPSERVER){
      memcpy(AT_CMD , "AT+CIPSERVER=1,80\r\n" , 20); 
			call UartStream.send(AT_CMD, 20);
      cnt++;                           
		}
	}
 
  event void ESP_CON_AP.fired()
  {
    if(cnt == 6){
      cnt = 0;
			signal ESP8266.apDone(0);
			call ESP_CON_AP.stop();
    }
		if(AT_STATE == AT_CON_AP){
			call UartStream.send(AT_CMD, slen(AT_CMD));
			cnt ++;
		} 
  }

  event void ESP_SERVER.fired()
  {
    if(cnt == 6){
      cnt = 0;
			call ESP_SERVER.stop();
			signal ESP8266.serverDone(0);
    }
		if(AT_STATE == AT_SERVER){
			call UartStream.send(AT_CMD, slen(AT_CMD));
			cnt ++;
		} 
  }


  event void ESP_SENDING.fired()
  {
    if(cnt == 6){
      cnt = 0;
			signal ESP8266.sendDone(0);
			call ESP_SENDING.stop();
			//WDTCTL = 0;
    }
		if(AT_STATE == AT_SENDING){
			call UartStream.send(AT_CMD, 16);
			cnt ++;
		} 
  }

	
  event void ESP_SEND_PRESENT.fired()
  {
    if(cnt == 6){
      cnt = 0;
			call ESP_SENDING.stop();
			call ESP_SEND_PRESENT.stop();
			signal ESP8266.sendDone(0);
    }
		if(AT_STATE == AT_SEND_PRESENT){
			xtoString(DATA_TCP , Send_Data , DATA_LEN);
			call UartStream.send(Send_Data, (DATA_LEN*2)+1);
			cnt ++;
		} 
  }


	uint8_t cmd_on=0;
  async event void UartStream.receivedByte( uint8_t byte ) {
		if(byte == 0x0A){
			// string END
			memcpy(AT_REV, UART_REV, UART_LEN);	// memory copy
			post AT_REV_COMP();
			UART_LEN = 0;
			return;
		}
		else{
			UART_REV[UART_LEN++] = byte;
		}

		if(AT_STATE == AT_SENDING){
			if(byte == 0x3E){
				AT_STATE = AT_SEND_PRESENT;
				call ESP_SENDING.stop();
				call ESP_SEND_PRESENT.startPeriodic( 256 );
			}
		}
		else if((AT_STATE == AT_WEBSTART) || (AT_STATE == AT_SEND_DONE)){
			if(byte == 0x3E){
				AT_STATE = AT_WEBSENDING;
				helloweb();
			}
		}
		
		if(AT_STATE == AT_SEND_DONE){
			if(byte == 'N' && cmd_on == 2)	{
				call Leds.set(7);
				cmd_on = 0;
			}
			else if(byte == 'F' && cmd_on == 2)	{
				call Leds.set(0);
				cmd_on = 0;
			}
			else if(byte == 'O' && cmd_on == 1)	cmd_on = 2;
			else if(byte == 'A' && cmd_on == 0)	cmd_on = 1;
			else cmd_on = 0;
		}
	}

  async event void UartStream.sendDone( uint8_t* buf, uint16_t len, error_t error ) {
	}

  async event void UartStream.receiveDone( uint8_t* buf, uint16_t len, error_t error ) {
	}
	
	//uint8_t webp_hello[] = "<h1>Hello</h1><h2>World!</h2><button>LED1</button>  ";
	uint8_t webp_hello[] = "<h1>SPlug</h1><h2>Watt=0</h2><button>OnOff</button>  ";
	uint8_t WEBCMD0[100] = "AT+CIPSEND=1,52\r\n";
	uint8_t WEBCMD[100] = "AT+CIPSEND=0,52\r\n";
	command void ESP8266.webhello(){
		if(NET_MODE == 2)
			call UartStream.send(WEBCMD0, 17);
		else
			call UartStream.send(WEBCMD, 17);
	}

	void helloweb(){
			call Leds.set(0);
			call UartStream.send(webp_hello, slen(webp_hello)+1);
	}
}
