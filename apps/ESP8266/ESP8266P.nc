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
    AT_RESET = 1,
		AT_MODE_1 = 2,
    AT_CON_AP = 3,
    AT_SERVER = 4,
    AT_SENDING = 5,
		AT_SEND_PRESENT = 6
	};
  int cnt;             // connect timer
	// for UART Recv
	uint8_t UART_REV[200];
	uint8_t UART_LEN = 0;
  norace int AT_STATE = 0;  // AT_CMD_state value

	// for AT CMD Recv
	uint8_t AT_CMD[200] ="";
	uint8_t Send_Data[200];
	uint8_t AT_REV[200];
	uint8_t AT_LEN = 0;
	uint8_t AT_MODE = 0;
	//int cnt;

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
					signal ESP8266.initDone();
				}
				else if(AT_STATE == AT_MODE_1){
					call ESP_MODE_1.stop();
					call ESP_CON_AP.startPeriodic( 5120 );
					AT_STATE = AT_CON_AP;
				}
				else if(AT_STATE == AT_CON_AP){
       		call ESP_CON_AP.stop();
		    	call ESP_SERVER.startPeriodic( 8192 );	
        	AT_STATE = AT_SERVER;
				}
				else if(AT_STATE == AT_SERVER){
       		call ESP_SERVER.stop();
		    	call ESP_SENDING.startPeriodic( 3072 );	
					AT_STATE = AT_SENDING;
				}
				cnt=0;
			}
		}
		else if(AT_REV[0] == 'n'){
			if(AT_REV[1] == 'o'){
				if(AT_REV[2] == ' '){
					if(AT_REV[3] == 'i'){
						if(AT_REV[4] == 'p'){
							if(AT_STATE == AT_SERVER){
       					call ESP_SERVER.stop();
		   					call ESP_CON_AP.startPeriodic( 7168 );	
        				AT_STATE = AT_CON_AP;
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
								call ESP_INIT.stop();
		    				call ESP_RESET.startPeriodic( 2048 );
								AT_STATE = AT_RESET;
							}
							else if(AT_STATE == AT_RESET){
								call ESP_RESET.stop();
							}
							else if(AT_STATE == AT_MODE_1){
								call ESP_MODE_1.stop();
								call ESP_INIT.startPeriodic( 2048 );
								AT_STATE = AT_INIT;
							}
							else if(AT_STATE == AT_CON_AP){
       					call ESP_CON_AP.stop();
		   					call ESP_MODE_1.startPeriodic( 5120 );	
        				AT_STATE = AT_MODE_1;
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
							if(AT_STATE == AT_RESET){
								call ESP_RESET.stop();
								call ESP_INIT.startPeriodic( 3072 );
								AT_STATE = AT_INIT;
							}
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
		   					 	call ESP_SENDING.startPeriodic( 2048 );	
									AT_STATE = AT_SENDING;
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
		   				call ESP_MODE_1.startPeriodic( 5120 );	
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
		   						call ESP_CON_AP.startPeriodic( 7168 );	
        					AT_STATE = AT_CON_AP;
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
											if(AT_STATE == AT_MODE_1){
												call ESP_MODE_1.stop();
												call ESP_CON_AP.startPeriodic( 7168 );
												AT_STATE = AT_CON_AP;
												cnt = 0;
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
										call Leds.led2On();
										call ESP_SEND_PRESENT.stop();
										call ESP_SENDING.startOneShot( 3072 );
										AT_STATE = AT_SENDING;
										//cnt = 0;
									}
								}
							}
						}
					}
				}
			}
  	}

		memset(AT_REV, 0, 20);
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
    AT_STATE = AT_INIT;
		cnt = 0;
    call ESP_INIT.startPeriodic( 2048 );	// 2 sec
		call SerialControl.start();
		return 0;
	}

	command uint8_t ESP8266.mode(uint8_t val){
		call ESP_INIT.stop();
		call ESP_MODE_1.startPeriodic( 5120 );
		AT_STATE = AT_MODE_1;
	}
  event void ESP_INIT.fired()		// event 2sec
  {
		call Leds.set(0);
    if(cnt == 6){
      cnt = 0;         
			call ESP_RESET.startPeriodic( 2048 );
			call ESP_INIT.stop();
    }
		if(AT_STATE == AT_INIT){
      memcpy(AT_CMD , "AT\r\n" , 5); 
			call UartStream.send(AT_CMD, 5);
      cnt ++;         
		}
  }
  
  event void ESP_RESET.fired()  //event 2sec
  { 
					call Leds.set(1);
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
					call Leds.set(2);
    if(cnt == 6){
      cnt = 0;
			call ESP_INIT.startPeriodic( 5120 );
			call ESP_MODE_1.stop();
    }
		if(AT_STATE == AT_MODE_1){
      memcpy(AT_CMD , "AT+CWMODE=1\r\n" , 14); 
			call UartStream.send(AT_CMD, 14);
      cnt ++;                           
		}
  }
 
  event void ESP_CON_AP.fired()
  {
					call Leds.set(3);
    if(cnt == 6){
      cnt = 0;
    	call ESP_MODE_1.startPeriodic( 5120 );	// 5 sec
			call ESP_CON_AP.stop();
    }
		if(AT_STATE == AT_CON_AP){
			memcpy(AT_CMD , "AT+CWJAP=\"sonnonet_rnd\",\"4000012777\"\r\n" , 38);
			call UartStream.send(AT_CMD, 38);
			cnt ++;
		} 
  }

  event void ESP_SERVER.fired()
  {
		call Leds.set(4);
    if(cnt == 6){
      cnt = 0;
    	call ESP_CON_AP.startPeriodic( 7168 );	// 7 sec
			call ESP_SERVER.stop();
    }
		if(AT_STATE == AT_SERVER){
			memcpy(AT_CMD , "AT+CIPSTART=\"TCP\",\"192.168.219.161\",1111\r\n" , 43);
			call UartStream.send(AT_CMD, 43);
			cnt ++;
		} 
  }


  event void ESP_SENDING.fired()
  {
					call Leds.set(5);
    if(cnt == 6){
      cnt = 0;
    	call ESP_SERVER.startPeriodic( 7168 );	// 7 sec
			call ESP_SENDING.stop();
    }
		if(AT_STATE == AT_SENDING){
			memcpy(AT_CMD , "AT+CIPSEND=71\r\n" , 16);
			call UartStream.send(AT_CMD, 16);
			cnt ++;
		} 
  }

	
  event void ESP_SEND_PRESENT.fired()
  {
    if(cnt == 6){
      cnt = 0;
    	call ESP_SERVER.startPeriodic( 7168 );	// 7 sec
			call ESP_SENDING.stop();
    }
		if(AT_STATE == AT_SEND_PRESENT){
			AT_CMD[0]=0x7e;
			AT_CMD[1]=0x45;
			AT_CMD[2]=0x00;
			AT_CMD[3]=0xff;
			AT_CMD[4]=0xff;
			AT_CMD[5]=0x00;
			AT_CMD[6]=0x00;
			AT_CMD[7]=0x14;
			AT_CMD[8]=0x00;
			AT_CMD[9]=0x63;
			AT_CMD[10]=0x00;
			AT_CMD[11]=0x63;
			AT_CMD[12]=0x00;
			AT_CMD[13]=0x70;
			AT_CMD[14]=0x92;
			AT_CMD[15]=0xab;
			AT_CMD[16]=0xd5;
			AT_CMD[17]=0x15;
			AT_CMD[18]=0x00;
			AT_CMD[19]=0x00;
			AT_CMD[20]=0x00;
			AT_CMD[21]=0x54;
			AT_CMD[22]=0x00;
			AT_CMD[23]=0x2e;
			AT_CMD[24]=0x0b;
			AT_CMD[25]=0xb7;
			AT_CMD[26]=0x00;
			AT_CMD[27]=0x01;
			AT_CMD[28]=0x00;
			AT_CMD[29]=0x02;
			AT_CMD[30]=0x0E;
			AT_CMD[31]=0x16;
			AT_CMD[32]=0x47;
			AT_CMD[33]=0x73;
			AT_CMD[34]=0x7e;
			
			xtoString(AT_CMD , Send_Data , 35);
			
			call UartStream.send(Send_Data, 71);
			cnt ++;
		} 
  }



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
				call Leds.set( 0 );
				call ESP_SENDING.stop();
				AT_STATE = AT_SEND_PRESENT;
				call ESP_SEND_PRESENT.startOneShot( 1024 );
			}
		}
	}

  async event void UartStream.sendDone( uint8_t* buf, uint16_t len, error_t error ) {
	}

  async event void UartStream.receiveDone( uint8_t* buf, uint16_t len, error_t error ) {
	}
	
}
