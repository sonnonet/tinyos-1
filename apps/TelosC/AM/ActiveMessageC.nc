// $Id: ActiveMessageC.nc,v 1.9 2010-06-29 22:07:55 scipio Exp $

#include "Timer.h"
#include <RadioConfig.h>

configuration ActiveMessageC {
  provides {
    interface SplitControl;

    interface AMSend[am_id_t id];
    interface Receive[am_id_t id];
    interface Receive as Snoop[am_id_t id];
    interface SendNotifier[am_id_t id];

    interface Packet;
    interface AMPacket;

    interface PacketAcknowledgements;
    interface LowPowerListening;
    interface PacketLink;
    interface RadioChannel;

    interface PacketTimeStamp<TMicro, uint32_t> as PacketTimeStampMicro;
    interface PacketTimeStamp<TMilli, uint32_t> as PacketTimeStampMilli;
  }
}
implementation {
  components CC2520ActiveMessageC as AM;

  components RadioControlP, HplSam3TCC;
//  SplitControl = AM;
  
  AMSend       = AM;
  Receive      = AM.Receive;
  Snoop        = AM.Snoop;
  Packet       = AM;
  AMPacket     = AM;
  SendNotifier = AM;
  PacketAcknowledgements = AM;
  LowPowerListening = AM;
  PacketLink = AM;
  RadioChannel = AM;

  PacketTimeStampMicro = AM;
  PacketTimeStampMilli = AM;

  //SplitControl = MessageC;
  SplitControl = RadioControlP;
  RadioControlP.LowRadioControl -> AM;
  //RadioControlP.TC -> HplSam3TCC.TC0; // We use TIOA1 which is channel 1 on TC0
}
