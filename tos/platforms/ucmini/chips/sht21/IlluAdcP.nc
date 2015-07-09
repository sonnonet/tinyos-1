
//#include "Msp430Adc12.h"

module IlluAdcP {
//  provides interface AdcConfigure<const msp430adc12_channel_config_t*>;
		provides interface Atm128AdcConfig as AdcConfigure;
}
implementation {
/*
  const msp430adc12_channel_config_t config = {
      //inch: INPUT_CHANNEL_A5,
#ifdef TH20
      inch: INPUT_CHANNEL_A1,
#else
      inch: INPUT_CHANNEL_A2,
#endif
      sref: REFERENCE_VREFplus_AVss,
      ref2_5v: REFVOLT_LEVEL_1_5,
      adc12ssel: SHT_SOURCE_ACLK,
      adc12div: SHT_CLOCK_DIV_1,
      sht: SAMPLE_HOLD_4_CYCLES,
      sampcon_ssel: SAMPCON_SOURCE_SMCLK,
      sampcon_id: SAMPCON_CLOCK_DIV_1
  };

  async command const msp430adc12_channel_config_t* AdcConfigure.getConfiguration()
  {
    return &config;
  }
*/
  async command uint8_t AdcConfigure.getChannel()
  {
    // select the 1.23V (V_BG). Reference: Table 97, page 244 from the Atmega128
    return ATM128_ADC_SNGL_1_23;
  }

  async command uint8_t AdcConfigure.getRefVoltage()
  {
    return ATM128_ADC_VREF_OFF;
  }

  async command uint8_t AdcConfigure.getPrescaler()
  {
    return ATM128_ADC_PRESCALE;
  }

}

