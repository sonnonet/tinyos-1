
/* Copyright (c) 2000-2005 The Regents of the University of California.  
 */

generic module AtmefaInterruptC() @safe() {

  provides interface GpioInterrupt as Interrupt;
//  uses interface HplMsp430Interrupt as HplInterrupt;

}

implementation {

  error_t enable( bool rising ) {
    atomic {
      call Interrupt.disable();
//      call HplInterrupt.edge( rising );
//      call HplInterrupt.enable();
    }
    return SUCCESS;
  }

  async command error_t Interrupt.enableRisingEdge() {
    return enable( TRUE );
  }

  async command error_t Interrupt.enableFallingEdge() {
    return enable( FALSE );
  }

  async command error_t Interrupt.disable() {
    atomic {
//      call HplInterrupt.disable();
//      call HplInterrupt.clear();
    }
    return SUCCESS;
  }

//  async event void HplInterrupt.fired() {
//    call HplInterrupt.clear();
//    signal Interrupt.fired();
//  }

	default async event void Interrupt.fired(){	}

}
