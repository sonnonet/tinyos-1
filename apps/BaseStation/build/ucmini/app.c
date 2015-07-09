#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/i386-linux-gnu/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 117 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x402d6010, const void *arg_0x402d61a8, size_t arg_0x402d6340);



extern void *memset(void *arg_0x402d9350, int arg_0x402d94a8, size_t arg_0x402d9640);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x402eb730, const void *arg_0x402eb8c8);
# 25 "/opt/tinyos/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 416 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/iom128rfa1.h" 3
struct __reg_TIFR0 {
  unsigned int tov0 : 1;
  unsigned int ocf0a : 1;
  unsigned int ocf0b : 1;
  unsigned int  : 5;
};
#line 438
struct __reg_TIFR1 {
  unsigned int tov1 : 1;
  unsigned int ocf1a : 1;
  unsigned int ocf1b : 1;
  unsigned int ocf1c : 1;
  unsigned int  : 1;
  unsigned int icf1 : 1;
  unsigned int  : 2;
};
#line 465
struct __reg_TIFR2 {
  unsigned int tov2 : 1;
  unsigned int ocf2a : 1;
  unsigned int ocf2b : 1;
  unsigned int  : 5;
};
#line 487
struct __reg_TIFR3 {
  unsigned int tov3 : 1;
  unsigned int ocf3a : 1;
  unsigned int ocf3b : 1;
  unsigned int ocf3c : 1;
  unsigned int  : 1;
  unsigned int icf3 : 1;
  unsigned int  : 2;
};
#line 514
struct __reg_TIFR4 {
  unsigned int tov4 : 1;
  unsigned int ocf4a : 1;
  unsigned int ocf4b : 1;
  unsigned int ocf4c : 1;
  unsigned int  : 1;
  unsigned int icf4 : 1;
  unsigned int  : 2;
};
#line 541
struct __reg_TIFR5 {
  unsigned int tov5 : 1;
  unsigned int ocf5a : 1;
  unsigned int ocf5b : 1;
  unsigned int ocf5c : 1;
  unsigned int  : 1;
  unsigned int icf5 : 1;
  unsigned int  : 2;
};
#line 568
struct __reg_PCIFR {
  unsigned int pcif : 3;
  unsigned int  : 5;
};
#line 588
struct __reg_EIFR {
  unsigned int intf : 8;
};
#line 612
struct __reg_EIMSK {
  unsigned int intm : 8;
};
#line 636
struct __reg_GPIOR0 {
  unsigned int gpior0 : 8;
};
#line 669
struct __reg_EECR {
  unsigned int eere : 1;
  unsigned int eepe : 1;
  unsigned int eempe : 1;
  unsigned int eerie : 1;
  unsigned int eepm : 2;
  unsigned int  : 2;
};
#line 715
struct __reg_GTCCR {
  unsigned int psrsync : 1;
  unsigned int psrasy : 1;
  unsigned int  : 5;
  unsigned int tsm : 1;
};
#line 739
struct __reg_TCCR0A {
  unsigned int wgm0 : 2;
  unsigned int  : 2;
  unsigned int com0b : 2;
  unsigned int com0a : 2;
};
#line 764
struct __reg_TCCR0B {
  unsigned int cs0 : 3;
  unsigned int wgm02 : 1;
  unsigned int  : 2;
  unsigned int foc0b : 1;
  unsigned int foc0a : 1;
};
#line 832
struct __reg_GPIOR1 {
  unsigned int gpior1 : 8;
};
#line 856
struct __reg_GPIOR2 {
  unsigned int gpior2 : 8;
};
#line 880
struct __reg_SPCR {
  unsigned int spr : 2;
  unsigned int cpha : 1;
  unsigned int cpol : 1;
  unsigned int mstr : 1;
  unsigned int dord : 1;
  unsigned int spe : 1;
  unsigned int spie : 1;
};
#line 910
struct __reg_SPSR {
  unsigned int spi2x : 1;
  unsigned int  : 5;
  unsigned int wcol : 1;
  unsigned int spif : 1;
};
#line 946
struct __reg_ACSR {
  unsigned int acis : 2;
  unsigned int acic : 1;
  unsigned int acie : 1;
  unsigned int aci : 1;
  unsigned int aco : 1;
  unsigned int acbg : 1;
  unsigned int acd : 1;
};
#line 976
struct __reg_OCDR {
  unsigned int ocdr : 8;
};
#line 1001
struct __reg_SMCR {
  unsigned int se : 1;
  unsigned int sm : 3;
  unsigned int  : 4;
};
#line 1023
struct __reg_MCUSR {
  unsigned int porf : 1;
  unsigned int extrf : 1;
  unsigned int borf : 1;
  unsigned int wdrf : 1;
  unsigned int jtrf : 1;
  unsigned int  : 3;
};
#line 1049
struct __reg_MCUCR {
  unsigned int ivce : 1;
  unsigned int ivsel : 1;
  unsigned int  : 2;
  unsigned int pud : 1;
  unsigned int  : 2;
  unsigned int jtd : 1;
};
#line 1074
struct __reg_SPMCSR {
  unsigned int spmen : 1;
  unsigned int pgers : 1;
  unsigned int pgwrt : 1;
  unsigned int blbset : 1;
  unsigned int rwwsre : 1;
  unsigned int sigrd : 1;
  unsigned int rwwsb : 1;
  unsigned int spmie : 1;
};
#line 1105
struct __reg_RAMPZ {
  unsigned int rampz : 2;
  unsigned int  : 6;
};
#line 1129
struct __reg_SREG {
  unsigned int c : 1;
  unsigned int z : 1;
  unsigned int n : 1;
  unsigned int v : 1;
  unsigned int s : 1;
  unsigned int h : 1;
  unsigned int t : 1;
  unsigned int i : 1;
};
#line 1160
struct __reg_WDTCSR {
  unsigned int wdp : 3;
  unsigned int wde : 1;
  unsigned int wdce : 1;
  unsigned int  : 1;
  unsigned int wdie : 1;
  unsigned int wdif : 1;
};
#line 1189
struct __reg_CLKPR {
  unsigned int clkps : 4;
  unsigned int  : 3;
  unsigned int clkpce : 1;
};
#line 1212
struct __reg_PRR2 {
  unsigned int prram : 4;
  unsigned int  : 4;
};
#line 1233
struct __reg_PRR0 {
  unsigned int pradc : 1;
  unsigned int prusart0 : 1;
  unsigned int prspi : 1;
  unsigned int prtim1 : 1;
  unsigned int prpga : 1;
  unsigned int prtim0 : 1;
  unsigned int prtim2 : 1;
  unsigned int prtwi : 1;
};
#line 1264
struct __reg_PRR1 {
  unsigned int prusart : 3;
  unsigned int prtim3 : 1;
  unsigned int prtim4 : 1;
  unsigned int prtim5 : 1;
  unsigned int prtrx24 : 1;
  unsigned int  : 1;
};
#line 1292
struct __reg_OSCCAL {
  unsigned int cal : 8;
};
#line 1316
struct __reg_BGCR {
  unsigned int bgcal : 3;
  unsigned int bgcal_fine : 4;
  unsigned int  : 1;
};
#line 1341
struct __reg_PCICR {
  unsigned int pcie : 3;
  unsigned int  : 5;
};
#line 1361
struct __reg_EICRA {
  unsigned int isc0 : 2;
  unsigned int isc1 : 2;
  unsigned int isc2 : 2;
  unsigned int isc3 : 2;
};
#line 1388
struct __reg_EICRB {
  unsigned int isc4 : 2;
  unsigned int isc5 : 2;
  unsigned int isc6 : 2;
  unsigned int isc7 : 2;
};
#line 1429
struct __reg_PCMSK1 {
  unsigned int pcint : 2;
  unsigned int pcint1 : 6;
};
#line 1454
struct __reg_PCMSK2 {
  unsigned int pcint1 : 4;
  unsigned int pcint2 : 4;
};
#line 1479
struct __reg_TIMSK0 {
  unsigned int toie0 : 1;
  unsigned int ocie0a : 1;
  unsigned int ocie0b : 1;
  unsigned int  : 5;
};
#line 1501
struct __reg_TIMSK1 {
  unsigned int toie1 : 1;
  unsigned int ocie1a : 1;
  unsigned int ocie1b : 1;
  unsigned int ocie1c : 1;
  unsigned int  : 1;
  unsigned int icie1 : 1;
  unsigned int  : 2;
};
#line 1528
struct __reg_TIMSK2 {
  unsigned int toie2 : 1;
  unsigned int ocie2a : 1;
  unsigned int ocie2b : 1;
  unsigned int  : 5;
};
#line 1551
struct __reg_TIMSK3 {
  unsigned int toie3 : 1;
  unsigned int ocie3a : 1;
  unsigned int ocie3b : 1;
  unsigned int ocie3c : 1;
  unsigned int  : 1;
  unsigned int icie3 : 1;
  unsigned int  : 2;
};
#line 1578
struct __reg_TIMSK4 {
  unsigned int toie4 : 1;
  unsigned int ocie4a : 1;
  unsigned int ocie4b : 1;
  unsigned int ocie4c : 1;
  unsigned int  : 1;
  unsigned int icie4 : 1;
  unsigned int  : 2;
};
#line 1605
struct __reg_TIMSK5 {
  unsigned int toie5 : 1;
  unsigned int ocie5a : 1;
  unsigned int ocie5b : 1;
  unsigned int ocie5c : 1;
  unsigned int  : 1;
  unsigned int icie5 : 1;
  unsigned int  : 2;
};
#line 1632
struct __reg_NEMCR {
  unsigned int  : 4;
  unsigned int aeam : 2;
  unsigned int eneam : 1;
  unsigned int  : 1;
};
#line 1654
struct __reg_ADCSRC {
  unsigned int adsut : 5;
  unsigned int res0 : 1;
  unsigned int adtht : 2;
};
#line 1689
struct __reg_ADCSRA {
  unsigned int adps : 3;
  unsigned int adie : 1;
  unsigned int adif : 1;
  unsigned int adate : 1;
  unsigned int adsc : 1;
  unsigned int aden : 1;
};
#line 1718
struct __reg_ADCSRB {
  unsigned int adts : 3;
  unsigned int mux5 : 1;
  unsigned int acch : 1;
  unsigned int refok : 1;
  unsigned int acme : 1;
  unsigned int avddok : 1;
};
#line 1747
struct __reg_ADMUX {
  unsigned int mux : 5;
  unsigned int adlar : 1;
  unsigned int refs : 2;
};
#line 1773
struct __reg_DIDR2 {
  unsigned int adc8d : 1;
  unsigned int adc9d : 1;
  unsigned int adc10d : 1;
  unsigned int adc11d : 1;
  unsigned int adc12d : 1;
  unsigned int adc13d : 1;
  unsigned int adc14d : 1;
  unsigned int adc15d : 1;
};
#line 1804
struct __reg_DIDR0 {
  unsigned int adc0d : 1;
  unsigned int adc1d : 1;
  unsigned int adc2d : 1;
  unsigned int adc3d : 1;
  unsigned int adc4d : 1;
  unsigned int adc5d : 1;
  unsigned int adc6d : 1;
  unsigned int adc7d : 1;
};
#line 1835
struct __reg_DIDR1 {
  unsigned int ain0d : 1;
  unsigned int ain1d : 1;
  unsigned int  : 6;
};
#line 1855
struct __reg_TCCR1A {
  unsigned int wgm1 : 2;
  unsigned int com1c : 2;
  unsigned int com1b : 2;
  unsigned int com1a : 2;
};
#line 1882
struct __reg_TCCR1B {
  unsigned int cs1 : 3;
  unsigned int wgm1 : 2;
  unsigned int  : 1;
  unsigned int ices1 : 1;
  unsigned int icnc1 : 1;
};
#line 1909
struct __reg_TCCR1C {
  unsigned int  : 5;
  unsigned int foc1c : 1;
  unsigned int foc1b : 1;
  unsigned int foc1a : 1;
};
#line 1956
struct __reg_TCCR3A {
  unsigned int wgm3 : 2;
  unsigned int com3c : 2;
  unsigned int com3b : 2;
  unsigned int com3a : 2;
};
#line 1983
struct __reg_TCCR3B {
  unsigned int cs3 : 3;
  unsigned int wgm3 : 2;
  unsigned int  : 1;
  unsigned int ices3 : 1;
  unsigned int icnc3 : 1;
};
#line 2010
struct __reg_TCCR3C {
  unsigned int  : 5;
  unsigned int foc3c : 1;
  unsigned int foc3b : 1;
  unsigned int foc3a : 1;
};
#line 2057
struct __reg_TCCR4A {
  unsigned int wgm4 : 2;
  unsigned int com4c : 2;
  unsigned int com4b : 2;
  unsigned int com4a : 2;
};
#line 2084
struct __reg_TCCR4B {
  unsigned int cs4 : 3;
  unsigned int wgm4 : 2;
  unsigned int  : 1;
  unsigned int ices4 : 1;
  unsigned int icnc4 : 1;
};
#line 2111
struct __reg_TCCR4C {
  unsigned int  : 5;
  unsigned int foc4c : 1;
  unsigned int foc4b : 1;
  unsigned int foc4a : 1;
};
#line 2158
struct __reg_TCCR2A {
  unsigned int wgm2 : 2;
  unsigned int  : 2;
  unsigned int com2b : 2;
  unsigned int com2a : 2;
};
#line 2183
struct __reg_TCCR2B {
  unsigned int cs2 : 3;
  unsigned int wgm22 : 1;
  unsigned int  : 2;
  unsigned int foc2b : 1;
  unsigned int foc2a : 1;
};
#line 2251
struct __reg_ASSR {
  unsigned int tcr2bub : 1;
  unsigned int tcr2aub : 1;
  unsigned int ocr2bub : 1;
  unsigned int ocr2aub : 1;
  unsigned int tcn2ub : 1;
  unsigned int as2 : 1;
  unsigned int exclk : 1;
  unsigned int exclkamr : 1;
};
#line 2296
struct __reg_TWSR {
  unsigned int twps : 2;
  unsigned int  : 1;
  unsigned int tws : 5;
};
#line 2321
struct __reg_TWAR {
  unsigned int twgce : 1;
  unsigned int twa : 7;
};
#line 2360
struct __reg_TWCR {
  unsigned int twie : 1;
  unsigned int  : 1;
  unsigned int twen : 1;
  unsigned int twwc : 1;
  unsigned int twsto : 1;
  unsigned int twsta : 1;
  unsigned int twea : 1;
  unsigned int twint : 1;
};
#line 2390
struct __reg_TWAMR {
  unsigned int  : 1;
  unsigned int twam : 7;
};
#line 2421
struct __reg_UCSR0A {
  unsigned int mpcm0 : 1;
  unsigned int u2x0 : 1;
  unsigned int upe0 : 1;
  unsigned int dor0 : 1;
  unsigned int fe0 : 1;
  unsigned int udre0 : 1;
  unsigned int txc0 : 1;
  unsigned int rxc0 : 1;
};
#line 2452
struct __reg_UCSR0B {
  unsigned int txb80 : 1;
  unsigned int rxb80 : 1;
  unsigned int ucsz02 : 1;
  unsigned int txen0 : 1;
  unsigned int rxen0 : 1;
  unsigned int udrie0 : 1;
  unsigned int txcie0 : 1;
  unsigned int rxcie0 : 1;
};
#line 2483
struct __reg_UCSR0C {
  unsigned int ucpol0 : 1;
  unsigned int ucsz0 : 2;
  unsigned int ucpha0 : 1;
  unsigned int udord0 : 1;
  unsigned int usbs0 : 1;
  unsigned int upm0 : 2;
  unsigned int umsel0 : 2;
};
#line 2538
struct __reg_UCSR1A {
  unsigned int mpcm1 : 1;
  unsigned int u2x1 : 1;
  unsigned int upe1 : 1;
  unsigned int dor1 : 1;
  unsigned int fe1 : 1;
  unsigned int udre1 : 1;
  unsigned int txc1 : 1;
  unsigned int rxc1 : 1;
};
#line 2569
struct __reg_UCSR1B {
  unsigned int txb81 : 1;
  unsigned int rxb81 : 1;
  unsigned int ucsz12 : 1;
  unsigned int txen1 : 1;
  unsigned int rxen1 : 1;
  unsigned int udrie1 : 1;
  unsigned int txcie1 : 1;
  unsigned int rxcie1 : 1;
};
#line 2600
struct __reg_UCSR1C {
  unsigned int ucpol1 : 1;
  unsigned int ucsz1 : 2;
  unsigned int ucpha1 : 1;
  unsigned int udord1 : 1;
  unsigned int usbs1 : 1;
  unsigned int upm1 : 2;
  unsigned int umsel1 : 2;
};
#line 2653
struct __reg_SCCR0 {
  unsigned int sccmp : 3;
  unsigned int sctse : 1;
  unsigned int sccksel : 1;
  unsigned int scen : 1;
  unsigned int scmbts : 1;
  unsigned int scres : 1;
};
#line 2682
struct __reg_SCCR1 {
  unsigned int scenbo : 1;
  unsigned int  : 7;
};
#line 2700
struct __reg_SCSR {
  unsigned int scbsy : 1;
  unsigned int  : 7;
};
#line 2718
struct __reg_SCIRQM {
  unsigned int irqmcp : 3;
  unsigned int irqmof : 1;
  unsigned int irqmbo : 1;
  unsigned int  : 3;
};
#line 2742
struct __reg_SCIRQS {
  unsigned int irqscp : 3;
  unsigned int irqsof : 1;
  unsigned int irqsbo : 1;
  unsigned int  : 3;
};
#line 2766
struct __reg_SCCNTLL {
  unsigned int sccntll : 8;
};
#line 2790
struct __reg_SCCNTLH {
  unsigned int sccntlh : 8;
};
#line 2814
struct __reg_SCCNTHL {
  unsigned int sccnthl : 8;
};
#line 2838
struct __reg_SCCNTHH {
  unsigned int sccnthh : 8;
};
#line 2862
struct __reg_SCBTSRLL {
  unsigned int scbtsrll : 8;
};
#line 2886
struct __reg_SCBTSRLH {
  unsigned int scbtsrlh : 8;
};
#line 2910
struct __reg_SCBTSRHL {
  unsigned int scbtsrhl : 8;
};
#line 2934
struct __reg_SCBTSRHH {
  unsigned int scbtsrhh : 8;
};
#line 2958
struct __reg_SCTSRLL {
  unsigned int sctsrll : 8;
};
#line 2982
struct __reg_SCTSRLH {
  unsigned int sctsrlh : 8;
};
#line 3006
struct __reg_SCTSRHL {
  unsigned int sctsrhl : 8;
};
#line 3030
struct __reg_SCTSRHH {
  unsigned int sctsrhh : 8;
};
#line 3054
struct __reg_SCOCR3LL {
  unsigned int scocr3ll : 8;
};
#line 3078
struct __reg_SCOCR3LH {
  unsigned int scocr3lh : 8;
};
#line 3102
struct __reg_SCOCR3HL {
  unsigned int scocr3hl : 8;
};
#line 3126
struct __reg_SCOCR3HH {
  unsigned int scocr3hh : 8;
};
#line 3150
struct __reg_SCOCR2LL {
  unsigned int scocr2ll : 8;
};
#line 3174
struct __reg_SCOCR2LH {
  unsigned int scocr2lh : 8;
};
#line 3198
struct __reg_SCOCR2HL {
  unsigned int scocr2hl : 8;
};
#line 3222
struct __reg_SCOCR2HH {
  unsigned int scocr2hh : 8;
};
#line 3246
struct __reg_SCOCR1LL {
  unsigned int scocr1ll : 8;
};
#line 3270
struct __reg_SCOCR1LH {
  unsigned int scocr1lh : 8;
};
#line 3294
struct __reg_SCOCR1HL {
  unsigned int scocr1hl : 8;
};
#line 3318
struct __reg_SCOCR1HH {
  unsigned int scocr1hh : 8;
};
#line 3342
struct __reg_TCCR5A {
  unsigned int wgm5 : 2;
  unsigned int com5c : 2;
  unsigned int com5b : 2;
  unsigned int com5a : 2;
};
#line 3369
struct __reg_TCCR5B {
  unsigned int cs5 : 3;
  unsigned int wgm5 : 2;
  unsigned int  : 1;
  unsigned int ices5 : 1;
  unsigned int icnc5 : 1;
};
#line 3396
struct __reg_TCCR5C {
  unsigned int  : 5;
  unsigned int foc5c : 1;
  unsigned int foc5b : 1;
  unsigned int foc5a : 1;
};
#line 3443
struct __reg_LLCR {
  unsigned int llencal : 1;
  unsigned int llshort : 1;
  unsigned int lltco : 1;
  unsigned int llcal : 1;
  unsigned int llcomp : 1;
  unsigned int lldone : 1;
  unsigned int  : 2;
};
#line 3471
struct __reg_LLDRL {
  unsigned int lldrl : 4;
  unsigned int  : 4;
};
#line 3492
struct __reg_LLDRH {
  unsigned int lldrh : 5;
  unsigned int  : 3;
};
#line 3514
struct __reg_DRTRAM3 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3535
struct __reg_DRTRAM2 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3556
struct __reg_DRTRAM1 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3577
struct __reg_DRTRAM0 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3598
struct __reg_DPDS0 {
  unsigned int pbdrv : 2;
  unsigned int pddrv : 2;
  unsigned int pedrv : 2;
  unsigned int pfdrv : 2;
};
#line 3625
struct __reg_DPDS1 {
  unsigned int pgdrv : 2;
  unsigned int  : 6;
};
#line 3644
struct __reg_TRXPR {
  unsigned int trxrst : 1;
  unsigned int slptr : 1;
  unsigned int  : 6;
};
#line 3664
struct __reg_AES_CTRL {
  unsigned int  : 2;
  unsigned int aes_im : 1;
  unsigned int aes_dir : 1;
  unsigned int  : 1;
  unsigned int aes_mode : 1;
  unsigned int  : 1;
  unsigned int aes_request : 1;
};
#line 3697
struct __reg_AES_STATUS {
  unsigned int aes_done : 1;
  unsigned int  : 6;
  unsigned int aes_er : 1;
};
#line 3717
struct __reg_AES_STATE {
  unsigned int aes_state : 8;
};
#line 3741
struct __reg_AES_KEY {
  unsigned int aes_key : 8;
};
#line 3765
struct __reg_TRX_STATUS {
  unsigned int trx_status : 5;
  unsigned int tst_status : 1;
  unsigned int cca_status : 1;
  unsigned int cca_done : 1;
};
#line 3813
struct __reg_TRX_STATE {
  unsigned int trx_cmd : 5;
  unsigned int trac_status : 3;
};
#line 3859
struct __reg_TRX_CTRL_1 {
  unsigned int  : 5;
  unsigned int tx_auto_crc_on : 1;
  unsigned int irq_2_ext_en : 1;
  unsigned int pa_ext_en : 1;
};
#line 3881
struct __reg_PHY_TX_PWR {
  unsigned int tx_pwr : 4;
  unsigned int pa_lt : 2;
  unsigned int pa_buf_lt : 2;
};
#line 3918
struct __reg_PHY_RSSI {
  unsigned int rssi : 5;
  unsigned int rnd_value : 2;
  unsigned int rx_crc_valid : 1;
};
#line 3952
struct __reg_PHY_ED_LEVEL {
  unsigned int ed_level : 8;
};
#line 3983
struct __reg_PHY_CC_CCA {
  unsigned int channel : 5;
  unsigned int cca_mode : 2;
  unsigned int cca_request : 1;
};
#line 4032
struct __reg_CCA_THRES {
  unsigned int cca_ed_thres : 4;
  unsigned int cca_cs_thres : 4;
};
#line 4057
struct __reg_RX_CTRL {
  unsigned int pdt_thres : 4;
  unsigned int  : 4;
};
#line 4083
struct __reg_SFD_VALUE {
  unsigned int sfd_value : 8;
};
#line 4111
struct __reg_TRX_CTRL_2 {
  unsigned int oqpsk_data_rate : 2;
  unsigned int  : 5;
  unsigned int rx_safe_mode : 1;
};
#line 4139
struct __reg_ANT_DIV {
  unsigned int ant_ctrl : 2;
  unsigned int ant_ext_sw_en : 1;
  unsigned int ant_div_en : 1;
  unsigned int  : 3;
  unsigned int ant_sel : 1;
};
#line 4174
struct __reg_IRQ_MASK {
  unsigned int pll_lock_en : 1;
  unsigned int pll_unlock_en : 1;
  unsigned int rx_start_en : 1;
  unsigned int rx_end_en : 1;
  unsigned int cca_ed_done_en : 1;
  unsigned int ami_en : 1;
  unsigned int tx_end_en : 1;
  unsigned int awake_en : 1;
};
#line 4205
struct __reg_IRQ_STATUS {
  unsigned int pll_lock : 1;
  unsigned int pll_unlock : 1;
  unsigned int rx_start : 1;
  unsigned int rx_end : 1;
  unsigned int cca_ed_done : 1;
  unsigned int ami : 1;
  unsigned int tx_end : 1;
  unsigned int awake : 1;
};
#line 4236
struct __reg_VREG_CTRL {
  unsigned int  : 2;
  unsigned int dvdd_ok : 1;
  unsigned int dvreg_ext : 1;
  unsigned int  : 2;
  unsigned int avdd_ok : 1;
  unsigned int avreg_ext : 1;
};
#line 4268
struct __reg_BATMON {
  unsigned int batmon_vth : 4;
  unsigned int batmon_hr : 1;
  unsigned int batmon_ok : 1;
  unsigned int bat_low_en : 1;
  unsigned int bat_low : 1;
};
#line 4301
struct __reg_XOSC_CTRL {
  unsigned int xtal_trim : 4;
  unsigned int xtal_mode : 4;
};
#line 4331
struct __reg_RX_SYN {
  unsigned int rx_pdt_level : 4;
  unsigned int  : 3;
  unsigned int rx_pdt_dis : 1;
};
#line 4359
struct __reg_XAH_CTRL_1 {
  unsigned int  : 1;
  unsigned int aack_prom_mode : 1;
  unsigned int aack_ack_time : 1;
  unsigned int  : 1;
  unsigned int aack_upld_res_ft : 1;
  unsigned int aack_fltr_res_ft : 1;
  unsigned int  : 2;
};
#line 4390
struct __reg_FTN_CTRL {
  unsigned int  : 7;
  unsigned int ftn_start : 1;
};
#line 4408
struct __reg_PLL_CF {
  unsigned int  : 7;
  unsigned int pll_cf_start : 1;
};
#line 4426
struct __reg_PLL_DCU {
  unsigned int  : 7;
  unsigned int pll_dcu_start : 1;
};
#line 4444
struct __reg_PART_NUM {
  unsigned int part_num : 8;
};
#line 4472
struct __reg_VERSION_NUM {
  unsigned int version_num : 8;
};
#line 4501
struct __reg_MAN_ID_0 {
  unsigned int man_id_0 : 8;
};
#line 4529
struct __reg_MAN_ID_1 {
  unsigned int man_id_1 : 8;
};
#line 4557
struct __reg_SHORT_ADDR_0 {
  unsigned int short_addr_0 : 8;
};
#line 4581
struct __reg_SHORT_ADDR_1 {
  unsigned int short_addr_1 : 8;
};
#line 4605
struct __reg_PAN_ID_0 {
  unsigned int pan_id_0 : 8;
};
#line 4629
struct __reg_PAN_ID_1 {
  unsigned int pan_id_1 : 8;
};
#line 4653
struct __reg_IEEE_ADDR_0 {
  unsigned int ieee_addr_0 : 8;
};
#line 4677
struct __reg_IEEE_ADDR_1 {
  unsigned int ieee_addr_1 : 8;
};
#line 4701
struct __reg_IEEE_ADDR_2 {
  unsigned int ieee_addr_2 : 8;
};
#line 4725
struct __reg_IEEE_ADDR_3 {
  unsigned int ieee_addr_3 : 8;
};
#line 4749
struct __reg_IEEE_ADDR_4 {
  unsigned int ieee_addr_4 : 8;
};
#line 4773
struct __reg_IEEE_ADDR_5 {
  unsigned int ieee_addr_5 : 8;
};
#line 4797
struct __reg_IEEE_ADDR_6 {
  unsigned int ieee_addr_6 : 8;
};
#line 4821
struct __reg_IEEE_ADDR_7 {
  unsigned int ieee_addr_7 : 8;
};
#line 4845
struct __reg_XAH_CTRL_0 {
  unsigned int slotted_operation : 1;
  unsigned int max_csma_retries : 3;
  unsigned int max_frame_retries : 4;
};
#line 4876
struct __reg_CSMA_SEED_0 {
  unsigned int csma_seed_0 : 8;
};
#line 4900
struct __reg_CSMA_SEED_1 {
  unsigned int csma_seed_1 : 3;
  unsigned int aack_i_am_coord : 1;
  unsigned int aack_dis_ack : 1;
  unsigned int aack_set_pd : 1;
  unsigned int aack_fvn_mode : 2;
};
#line 4928
struct __reg_CSMA_BE {
  unsigned int min_be : 4;
  unsigned int max_be : 4;
};
#line 4953
struct __reg_TST_CTRL_DIGI {
  unsigned int tst_ctrl_dig : 4;
  unsigned int  : 4;
};
#line 4974
struct __reg_TST_RX_LENGTH {
  unsigned int rx_length : 8;
};
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "/opt/tinyos/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 105 "/opt/tinyos/tos/chips/atm128rfa1/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 125
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 135
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 170
#line 162
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 62 "/opt/tinyos/tos/chips/atm128rfa1/adc/Atm128Adc.h"
enum __nesc_unnamed4249 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVDD = 1, 
  ATM128_ADC_VREF_1_5 = 2, 
  ATM128_ADC_VREF_1_6 = 3, 
  ATM128_ADC_VREF_AVCC = ATM128_ADC_VREF_AVDD
};


enum __nesc_unnamed4250 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4251 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND, 
  ATM128_ADC_INT_TEMP = 41, 
  ATM128_ADC_INT_VDRTBBP = 52, 
  ATM128_ADC_INT_VDRTBBN = 61
};







#line 117
typedef struct __nesc_unnamed4252 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4253 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4254 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 173
typedef struct __nesc_unnamed4259 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;










#line 184
typedef struct __nesc_unnamed4260 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t acch : 1;
  uint8_t refok : 1;
  uint8_t acme : 1;
  uint8_t avddok : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 48 "/opt/tinyos/tos/platforms/ucmini/hardware.h"
enum __nesc_unnamed4261 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};
# 43 "/opt/tinyos/tos/types/Leds.h"
enum __nesc_unnamed4262 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
enum __nesc_unnamed4263 {


  ATMRFA1_CLK8_OFF = 0, 
  ATMRFA1_CLK8_NORMAL = 1, 
  ATMRFA1_CLK8_DIVIDE_8 = 2, 
  ATMRFA1_CLK8_DIVIDE_32 = 3, 
  ATMRFA1_CLK8_DIVIDE_64 = 4, 
  ATMRFA1_CLK8_DIVIDE_128 = 5, 
  ATMRFA1_CLK8_DIVIDE_256 = 6, 
  ATMRFA1_CLK8_DIVIDE_1024 = 7, 


  ATMRFA1_WGM8_NORMAL = 0 << 3, 
  ATMRFA1_WGM8_PWM = 1 << 3, 
  ATMRFA1_WGM8_CTC = 2 << 3, 
  ATMRFA1_WGM8_PWM_FAST = 3 << 3, 
  ATMRFA1_WGM8_COMPARE_HIGH = 5 << 3, 
  ATMRFA1_WGM8_COMPARE_LOW = 7 << 3, 


  ATMRFA1_ASYNC_OFF = 0 << 6, 
  ATMRFA1_ASYNC_ON = 1 << 6, 
  ATMRFA1_ASYNC_EXT = 3 << 6
};


enum __nesc_unnamed4264 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4265 {


  ATMRFA1_CLK16_OFF = 0, 
  ATMRFA1_CLK16_NORMAL = 1, 
  ATMRFA1_CLK16_DIVIDE_8 = 2, 
  ATMRFA1_CLK16_DIVIDE_64 = 3, 
  ATMRFA1_CLK16_DIVIDE_256 = 4, 
  ATMRFA1_CLK16_DIVIDE_1024 = 5, 
  ATMRFA1_CLK16_EXTERNAL_FALL = 6, 
  ATMRFA1_CLK16_EXTERNAL_RISE = 7, 


  ATMRFA1_WGM16_NORMAL = 0 << 3, 
  ATMRFA1_WGM16_PWM_8BIT = 1 << 3, 
  ATMRFA1_WGM16_PWM_9BIT = 2 << 3, 
  ATMRFA1_WGM16_PWM_10BIT = 3 << 3, 
  ATMRFA1_WGM16_CTC_COMPARE = 4 << 3, 
  ATMRFA1_WGM16_PWM_FAST_8BIT = 5 << 3, 
  ATMRFA1_WGM16_PWM_FAST_9BIT = 6 << 3, 
  ATMRFA1_WGM16_PWM_FAST_10BIT = 7 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_LOW = 8 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_LOW = 9 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_HIGH = 10 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_HIGH = 11 << 3, 
  ATMRFA1_WGM16_CTC_CAPTURE = 12 << 3, 
  ATMRFA1_WGM16_RESERVED = 13 << 3, 
  ATMRFA1_WGM16_PWM_FAST_CAPTURE = 14 << 3, 
  ATMRFA1_WGM16_PWM_FAST_COMPARE = 15 << 3
};


enum __nesc_unnamed4266 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4267 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4268 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4269 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4270 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 41 "/opt/tinyos/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4271 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4272 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4273 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4274 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 69 "/opt/tinyos/tos/chips/atm128rfa1/timer/TimerConfig.h"
typedef struct T16mhz {
} 
#line 69
T16mhz;
typedef struct T8mhz {
} 
#line 70
T8mhz;
typedef struct T4mhz {
} 
#line 71
T4mhz;
typedef struct T2mhz {
} 
#line 72
T2mhz;








typedef T2mhz TMcu;
#line 99
typedef T32khz TRtc;
#line 122
typedef struct T62khz {
} 
#line 122
T62khz;
# 6 "/opt/tinyos/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4275 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4276 {
  TOS_AM_GROUP = 0x26, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4277 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4278 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4279 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 42 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayer.h"
#line 39
typedef nx_struct rfa1_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rfa1_header_t;









#line 44
typedef struct rfa1_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rfa1_metadata_t;
# 43 "/opt/tinyos/tos/platforms/ucmini/RadioConfig.h"
enum __nesc_unnamed4280 {





  RFA1_CCA_MODE_VALUE = 2 << 5, 





  RFA1_CCA_THRES_VALUE = 0xC7, 

  RFA1_PA_BUF_LT = 3 << 6, 
  RFA1_PA_LT = 0 << 4
};
#line 79
typedef T62khz TRadio;
typedef uint32_t tradio_size;
# 45 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos/tos/types/IeeeEui64.h"
enum __nesc_unnamed4281 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4282 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4283 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4284 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4285 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 43 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/opt/tinyos/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/opt/tinyos/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 59 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1Radio.h"
#line 49
typedef nx_struct rfa1packet_header_t {

  rfa1_header_t rfa1;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rfa1packet_header_t;




#line 61
typedef nx_struct rfa1packet_footer_t {
} __attribute__((packed)) 

rfa1packet_footer_t;
#line 77
#line 66
typedef struct rfa1packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rfa1_metadata_t rfa1;
} rfa1packet_metadata_t;

enum __nesc_unnamed4286 {

  RFA1_TX_PWR_MASK = 0x0F, 
  RFA1_CHANNEL_MASK = 0x1F, 
  RFA1_TRX_STATUS_MASK = 0x1F, 
  RFA1_RSSI_MASK = 0x1F
};
# 32 "/opt/tinyos/tos/platforms/ucmini/platform_message.h"
#line 29
typedef union message_header {
  rfa1packet_header_t rfa1;
  serial_header_t serial;
} message_header_t;



#line 34
typedef union message_footer {
  rfa1packet_footer_t rfa1;
} message_footer_t;



#line 38
typedef union message_metadata {
  rfa1packet_metadata_t rfa1;
} message_metadata_t;
# 19 "/opt/tinyos/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 50 "/opt/tinyos/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "/opt/tinyos/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4287 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4288 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4289 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4290 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4291 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4292 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4293 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4294 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 33 "/opt/tinyos/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 45 "/opt/tinyos/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef TMicro /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef TMcu /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint8_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__from_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef TMcu /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag;
typedef uint16_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__size_type;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Counter__precision_tag;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareA__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Capture__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareB__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareC__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Timer__size_type;
typedef TRadio RFA1RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMilli /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__to_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__to_size_type;
typedef T62khz /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__from_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__from_size_type;
typedef uint8_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__upper_count_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__from_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__from_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__CounterFrom__size_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__to_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__Counter__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__Counter__size_type;
typedef T62khz /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__precision_tag;
typedef uint32_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__precision_tag /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareA__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareB__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__Counter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__SfdCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareC__size_type;
typedef TMilli /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef uint8_t RFA1DriverLayerP__PacketRSSI__value_type;
typedef TMicro RFA1DriverLayerP__BusyWait__precision_tag;
typedef uint16_t RFA1DriverLayerP__BusyWait__size_type;
typedef TRadio RFA1DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RFA1DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RFA1DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RFA1DriverLayerP__PacketLinkQuality__value_type;
typedef uint32_t RFA1DriverLayerP__SfdCapture__size_type;
typedef TMicro /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag;
typedef uint16_t /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type;
typedef TMicro /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__to_precision_tag;
typedef uint16_t /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__to_size_type;
typedef TMcu /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__from_precision_tag;
typedef uint16_t /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__from_size_type;
typedef uint8_t /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__upper_count_type;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__from_precision_tag /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__CounterFrom__precision_tag;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__from_size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__CounterFrom__size_type;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__to_precision_tag /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__Counter__precision_tag;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__to_size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__Counter__size_type;
typedef T62khz /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef T62khz /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag;
typedef uint32_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__precision_tag;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type;
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t McuInitP__AdcInit__default__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RFA1RadioOffP__RFA1RadioOff__init(void );
#line 62
static error_t Stm25pOffP__Stm25pOff__init(void );
# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static bool /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(
# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4049d0c8);
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(
# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4049d0c8);
# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(
# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4049d0c8);
# 42 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(
# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4049d0c8);
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(
# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4049d0c8);
# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(
# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4049d0c8);
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void SerialAutoControlP__SplitControl__startDone(error_t error);
#line 138
static void SerialAutoControlP__SplitControl__stopDone(error_t error);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t SerialAutoControlP__SoftwareInit__init(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialAutoControlP__turnOff__runTask(void );
#line 75
static void SerialAutoControlP__turnOn__runTask(void );
# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static void SerialAutoControlP__ControlInt__fired(void );
# 65 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
static void HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(uint8_t value);
#line 51
static void HplAtmegaPinChange0C__HplAtmegaPinChange__enable(void );
#line 70
static uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getPins(void );
#line 62
static uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getMask(void );
#line 40
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired(void );
# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(
# 52 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x40516850);
# 54 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(
# 52 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x40516850);
# 53 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(
# 52 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x40516850);
# 100 "/opt/tinyos/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40549e00, 
# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 65 "/opt/tinyos/tos/interfaces/Packet.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 88 "/opt/tinyos/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 78
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 187
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
#line 130
static error_t SerialP__SplitControl__stop(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617068, 
# 67 "/opt/tinyos/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617068, 
# 96 "/opt/tinyos/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4061b9f8, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617b68, 
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617b68);
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617b68, 
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 76 "/opt/tinyos/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 82
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );
# 49 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__default__fired(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__default__fired(void );
# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__default__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__default__fired(void );
# 72 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 61
static void HplAtmRfa1Timer1P__Timer__start(void );
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 100 "/opt/tinyos/tos/interfaces/Send.nc"
static void SerialResetP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



SerialResetP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SerialResetP__sendAck__runTask(void );
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialResetP__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialResetP__SerialPacketInfo__offset(void );







static uint8_t SerialResetP__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 69 "/opt/tinyos/tos/platforms/ucmini/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 85
static void LedsP__Leds__led1Toggle(void );
#line 102
static void LedsP__Leds__led2Toggle(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403f9e80);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403f9e80);
# 57 "/opt/tinyos/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 60 "/opt/tinyos/tos/interfaces/Boot.nc"
static void BaseStationP__Boot__booted(void );
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void BaseStationP__SerialControl__startDone(error_t error);
#line 138
static void BaseStationP__SerialControl__stopDone(error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BaseStationP__UartReceive__receive(
# 67 "BaseStationP.nc"
am_id_t arg_0x407e4108, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void BaseStationP__uartSendTask__runTask(void );
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void BaseStationP__RadioControl__startDone(error_t error);
#line 138
static void BaseStationP__RadioControl__stopDone(error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BaseStationP__RadioReceive__receive(
# 72 "BaseStationP.nc"
am_id_t arg_0x407e17a8, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void BaseStationP__radioSendTask__runTask(void );
# 110 "/opt/tinyos/tos/interfaces/AMSend.nc"
static void BaseStationP__RadioSend__sendDone(
# 71 "BaseStationP.nc"
am_id_t arg_0x407e2cc0, 
# 103 "/opt/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
#line 110
static void BaseStationP__UartSend__sendDone(
# 66 "BaseStationP.nc"
am_id_t arg_0x407e5698, 
# 103 "/opt/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BaseStationP__RadioSnoop__receive(
# 73 "BaseStationP.nc"
am_id_t arg_0x407e1e70, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_group_t RFA1RadioP__ActiveMessageConfig__group(message_t *msg);










static error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 46
static am_addr_t RFA1RadioP__ActiveMessageConfig__source(message_t *msg);
#line 40
static am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);








static void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);
#line 43
static void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);
# 60 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RFA1RadioP__RadioAlarm__fired(void );
# 86 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );
#line 75
static bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RFA1RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 47 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
static uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );
#line 41
static uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);
#line 53
static uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);





static bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);
# 60 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408d5568);
# 50 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408d5568, 
# 50 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408d5568);
# 45 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408d5568);
# 65 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408d5568);
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void TaskletC__tasklet__runTask(void );
# 59 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__schedule(void );
#line 72
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 59 "/opt/tinyos/tos/interfaces/SendNotifier.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(
# 48 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40901b50, 
# 59 "/opt/tinyos/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 65 "/opt/tinyos/tos/interfaces/Packet.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(
# 45 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40903460, 
# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 177 "/opt/tinyos/tos/interfaces/AMPacket.nc"
static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(
#line 173
message_t * amsg);
#line 88
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );
# 55 "/opt/tinyos/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409777d0);
# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409777d0);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40976430);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40976430);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4097ad90);
# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4097ad90);
# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4097ad90);
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4097ad90);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "/opt/tinyos/tos/interfaces/Packet.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "/opt/tinyos/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);
#line 70
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);










static ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 185
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 168
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "/opt/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40a6ec08, 
# 46 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40a6ec08, 
# 51 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/opt/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/opt/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "/opt/tinyos/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 70 "/opt/tinyos/tos/interfaces/PacketTimeStamp.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 78
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get(void );
# 49 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void );
# 70 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareA__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareA__set(HplAtmRfa1TimerMacP__CompareA__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareA__start(void );


static void HplAtmRfa1TimerMacP__CompareA__stop(void );
# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__default__fired(void );
# 72 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 40
static HplAtmRfa1TimerMacP__Counter__size_type HplAtmRfa1TimerMacP__Counter__get(void );
#line 61
static void HplAtmRfa1TimerMacP__Counter__start(void );
# 70 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode);
#line 40
static HplAtmRfa1TimerMacP__SfdCapture__size_type HplAtmRfa1TimerMacP__SfdCapture__get(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__default__fired(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40bf6088, 
# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40bf6088, 
# 40 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);









static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40bf6088, 
# 50 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 52 "/opt/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__default__done(error_t error);
# 51 "/opt/tinyos/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);





static void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, RFA1DriverLayerP__PacketRSSI__value_type value);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__SoftwareInit__init(void );
# 56 "/opt/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static error_t RFA1DriverLayerP__RadioState__turnOn(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTransmitPower__value_type RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void RFA1DriverLayerP__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 54
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTimeSyncOffset__value_type RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__PlatformInit__init(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
# 57 "/opt/tinyos/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, RFA1DriverLayerP__PacketLinkQuality__value_type value);
# 48 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__run(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
#line 82
static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__CounterFrom__overflow(void );
# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void );
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__getNow(void );
#line 66
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type dt);






static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void );
# 49 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Stm25pInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
#line 62
static error_t PlatformP__McuInit__init(void );
# 51 "/opt/tinyos/tos/platforms/ucmini/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t McuInitP__RadioInit__init(void );
#line 62
static error_t McuInitP__AdcInit__init(void );
#line 62
static error_t McuInitP__MeasureClock__init(void );
#line 62
static error_t McuInitP__TimerInit__init(void );
# 51 "/opt/tinyos/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void );
#line 77
static inline error_t McuInitP__Init__init(void );
#line 101
static inline error_t McuInitP__AdcInit__default__init(void );
# 70 "/opt/tinyos/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4295 {
  MeasureClockC__MAGIC = 31250 / (16 / 16)
};
#line 172
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 38 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void Stm25pOffP__Toggle__makeOutput(void );
#line 40
static void Stm25pOffP__Toggle__set(void );
# 48 "/opt/tinyos/tos/platforms/ucmini/chips/stm25p/Stm25pOffP.nc"
static inline error_t Stm25pOffP__Stm25pOff__init(void );
# 49 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline bool /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(uint8_t bit);
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(uint8_t bit);





static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(uint8_t bit);
#line 50
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(uint8_t bit);

static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(uint8_t bit);



static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(uint8_t bit);
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t SerialAutoControlP__SplitControl__start(void );
#line 130
static error_t SerialAutoControlP__SplitControl__stop(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialAutoControlP__turnOff__postTask(void );
#line 67
static error_t SerialAutoControlP__turnOn__postTask(void );
# 54 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t SerialAutoControlP__ControlInt__enableFallingEdge(void );
#line 53
static error_t SerialAutoControlP__ControlInt__enableRisingEdge(void );
# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static bool SerialAutoControlP__ControlPin__get(void );
# 46 "/opt/tinyos/tos/platforms/ucmini/SerialAutoControlP.nc"
enum SerialAutoControlP____nesc_unnamed4296 {
#line 46
  SerialAutoControlP__turnOn = 0U
};
#line 46
typedef int SerialAutoControlP____nesc_sillytask_turnOn[SerialAutoControlP__turnOn];










enum SerialAutoControlP____nesc_unnamed4297 {
#line 57
  SerialAutoControlP__turnOff = 1U
};
#line 57
typedef int SerialAutoControlP____nesc_sillytask_turnOff[SerialAutoControlP__turnOff];
#line 44
bool SerialAutoControlP__isSerialOn;

static inline void SerialAutoControlP__turnOn__runTask(void );










static inline void SerialAutoControlP__turnOff__runTask(void );










static inline void SerialAutoControlP__SplitControl__startDone(error_t err);




static inline void SerialAutoControlP__SplitControl__stopDone(error_t err);





static inline error_t SerialAutoControlP__SoftwareInit__init(void );
#line 92
static void SerialAutoControlP__ControlInt__fired(void );
# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
static void HplAtmegaPinChange0C__HplAtmegaPinChange__fired(void );
# 59 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__enable(void );
#line 76
static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getMask(void );




static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(uint8_t value);






static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getPins(void );




void __vector_9(void ) __attribute((signal))   ;
# 65 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(uint8_t value);
#line 51
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable(void );
#line 70
static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getPins(void );
#line 62
static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask(void );
# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(
# 52 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x40516850);


uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling;


static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(uint8_t pin);








static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(uint8_t pin);
#line 88
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired(void );
#line 113
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(uint8_t pin);
# 75 "/opt/tinyos/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/opt/tinyos/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40549e00, 
# 103 "/opt/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x405517d8, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);
#line 113
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg);




static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 148
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);




static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr);








static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
#line 189
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(message_t *msg, am_group_t group);
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4298 {
#line 191
  SerialP__RunTx = 2U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4299 {
#line 322
  SerialP__startDoneTask = 3U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4300 {
#line 332
  SerialP__stopDoneTask = 4U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4301 {
#line 341
  SerialP__defaultSerialFlushTask = 5U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4302 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4303 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4304 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4305 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4306 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4307 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4308 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4309 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 374
static error_t SerialP__SplitControl__stop(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617068, 
# 96 "/opt/tinyos/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4061b9f8, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617b68, 
# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617b68);
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40617b68, 
# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4310 {
#line 158
  SerialDispatcherP__0__signalSendDone = 6U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4311 {
#line 275
  SerialDispatcherP__0__receiveTask = 7U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4312 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4313 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4314 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4315 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/opt/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 132 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 152
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 209
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 313
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;



static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );








static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos/tos/chips/atm128rfa1/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };


int8_t McuSleepC__powerState = -1;

static inline void McuSleepC__McuSleep__sleep(void );
#line 95
static inline void McuSleepC__McuPowerState__update(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.TransformCounterC*/TransformCounterC__0__upper_count_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4316 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 1, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__0__from_size_type ) + 1, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__upper_count_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__m_upper;

enum /*CounterMcu32C.TransformCounterC*/TransformCounterC__1____nesc_unnamed4317 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void );
# 72 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(uint8_t mode);
#line 61
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start(void );
# 51 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );
#line 66
static inline void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__fired(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__fired(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__fired(void );
# 49 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__overflow(void );
# 73 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
void __vector_20(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__Timer__start(void );
#line 95
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 162
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void );

void __vector_17(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void );

void __vector_18(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void );

void __vector_19(void ) __attribute((signal))   ;
#line 322
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void );

void __vector_16(void ) __attribute((signal))   ;
#line 364
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 51 "/opt/tinyos/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 75 "/opt/tinyos/tos/interfaces/Send.nc"
static error_t SerialResetP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SerialResetP__sendAck__postTask(void );
# 54 "/opt/tinyos/tos/platforms/ucmini/SerialResetP.nc"
enum SerialResetP____nesc_unnamed4318 {
#line 54
  SerialResetP__sendAck = 8U
};
#line 54
typedef int SerialResetP____nesc_sillytask_sendAck[SerialResetP__sendAck];
#line 52
message_t *SerialResetP__sendMsg;

static inline void SerialResetP__sendAck__runTask(void );
#line 66
static inline void SerialResetP__Send__sendDone(message_t *msg, error_t error);
#line 82
static inline message_t *SerialResetP__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 95
static inline uint8_t SerialResetP__SerialPacketInfo__offset(void );




static inline uint8_t SerialResetP__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen);




static inline uint8_t SerialResetP__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen);
# 42 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led3__makeOutput(void );
#line 40
static void LedsP__Led3__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 57 "/opt/tinyos/tos/platforms/ucmini/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 87
static inline void LedsP__Leds__led0Toggle(void );
#line 102
static inline void LedsP__Leds__led1Toggle(void );
#line 117
static inline void LedsP__Leds__led2Toggle(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403f9e80);
# 76 "/opt/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4319 {

  SchedulerBasicP__NUM_TASKS = 17U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t BaseStationP__SerialControl__start(void );
# 177 "/opt/tinyos/tos/interfaces/AMPacket.nc"
static am_group_t BaseStationP__RadioAMPacket__group(
#line 173
message_t * amsg);
#line 88
static am_addr_t BaseStationP__RadioAMPacket__source(
#line 84
message_t * amsg);
#line 78
static am_addr_t BaseStationP__RadioAMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void BaseStationP__RadioAMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t BaseStationP__RadioAMPacket__type(
#line 143
message_t * amsg);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t BaseStationP__uartSendTask__postTask(void );
# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static error_t BaseStationP__RadioControl__start(void );
# 65 "/opt/tinyos/tos/interfaces/Packet.nc"
static void BaseStationP__RadioPacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t BaseStationP__RadioPacket__payloadLength(
#line 74
message_t * msg);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t BaseStationP__radioSendTask__postTask(void );
# 69 "/opt/tinyos/tos/platforms/ucmini/Leds.nc"
static void BaseStationP__Leds__led0Toggle(void );
#line 85
static void BaseStationP__Leds__led1Toggle(void );
#line 102
static void BaseStationP__Leds__led2Toggle(void );
# 65 "/opt/tinyos/tos/interfaces/Packet.nc"
static void BaseStationP__UartPacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t BaseStationP__UartPacket__payloadLength(
#line 74
message_t * msg);
# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
static error_t BaseStationP__RadioSend__send(
# 71 "BaseStationP.nc"
am_id_t arg_0x407e2cc0, 
# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 80
static error_t BaseStationP__UartSend__send(
# 66 "BaseStationP.nc"
am_id_t arg_0x407e5698, 
# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 88 "/opt/tinyos/tos/interfaces/AMPacket.nc"
static am_addr_t BaseStationP__UartAMPacket__source(
#line 84
message_t * amsg);
#line 78
static am_addr_t BaseStationP__UartAMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void BaseStationP__UartAMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t BaseStationP__UartAMPacket__type(
#line 143
message_t * amsg);
#line 187
static void BaseStationP__UartAMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);
# 98 "BaseStationP.nc"
enum BaseStationP____nesc_unnamed4320 {
#line 98
  BaseStationP__uartSendTask = 9U
};
#line 98
typedef int BaseStationP____nesc_sillytask_uartSendTask[BaseStationP__uartSendTask];
enum BaseStationP____nesc_unnamed4321 {
#line 99
  BaseStationP__radioSendTask = 10U
};
#line 99
typedef int BaseStationP____nesc_sillytask_radioSendTask[BaseStationP__radioSendTask];
#line 83
enum BaseStationP____nesc_unnamed4322 {
  BaseStationP__UART_QUEUE_LEN = 12, 
  BaseStationP__RADIO_QUEUE_LEN = 12
};

message_t BaseStationP__uartQueueBufs[BaseStationP__UART_QUEUE_LEN];
message_t * BaseStationP__uartQueue[BaseStationP__UART_QUEUE_LEN];
uint8_t BaseStationP__uartIn;
#line 90
uint8_t BaseStationP__uartOut;
bool BaseStationP__uartBusy;
#line 91
bool BaseStationP__uartFull;

message_t BaseStationP__radioQueueBufs[BaseStationP__RADIO_QUEUE_LEN];
message_t * BaseStationP__radioQueue[BaseStationP__RADIO_QUEUE_LEN];
uint8_t BaseStationP__radioIn;
#line 95
uint8_t BaseStationP__radioOut;
bool BaseStationP__radioBusy;
#line 96
bool BaseStationP__radioFull;




static inline void BaseStationP__dropBlink(void );



static inline void BaseStationP__failBlink(void );



static inline void BaseStationP__Boot__booted(void );
#line 130
static inline void BaseStationP__RadioControl__startDone(error_t error);





static inline void BaseStationP__SerialControl__startDone(error_t error);





static inline void BaseStationP__SerialControl__stopDone(error_t error);
static inline void BaseStationP__RadioControl__stopDone(error_t error);



static message_t * BaseStationP__receive(message_t * msg, void *payload, uint8_t len);

static inline message_t *BaseStationP__RadioSnoop__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);



static inline message_t *BaseStationP__RadioReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);



static message_t *BaseStationP__receive(message_t *msg, void *payload, uint8_t len);
#line 188
uint8_t BaseStationP__tmpLen;

static inline void BaseStationP__uartSendTask__runTask(void );
#line 222
static inline void BaseStationP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error);
#line 237
static inline message_t *BaseStationP__UartReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len);
#line 270
static inline void BaseStationP__radioSendTask__runTask(void );
#line 301
static inline void BaseStationP__RadioSend__sendDone(am_id_t id, message_t *msg, error_t error);
# 65 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size RFA1RadioP__RadioAlarm__getNow(void );
# 131 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void RFA1RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void RFA1RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 146
static void RFA1RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void RFA1RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 168
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 74 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);




static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );




static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);




static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);






static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);









static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);








static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);




static inline void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);




static inline am_addr_t RFA1RadioP__ActiveMessageConfig__source(message_t *msg);




static inline void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);




static inline am_group_t RFA1RadioP__ActiveMessageConfig__group(message_t *msg);




static inline void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);




static inline error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 239
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 280
static inline void RFA1RadioP__RadioAlarm__fired(void );
# 60 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408d5568);
# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);






static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void );
# 59 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 55 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4323 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );










static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);








static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t TaskletC__tasklet__postTask(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 47 "/opt/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
enum TaskletC____nesc_unnamed4324 {
#line 47
  TaskletC__tasklet = 11U
};
#line 47
typedef int TaskletC____nesc_sillytask_tasklet[TaskletC__tasklet];
#line 47
static inline void TaskletC__tasklet__runTask(void );




static __inline void TaskletC__Tasklet__schedule(void );




static __inline void TaskletC__Tasklet__suspend(void );



static __inline void TaskletC__Tasklet__resume(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg);
# 59 "/opt/tinyos/tos/interfaces/SendNotifier.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(
# 48 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40901b50, 
# 59 "/opt/tinyos/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/opt/tinyos/tos/interfaces/AMSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40903460, 
# 103 "/opt/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x409014d8, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(message_t *msg);










static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg);
#line 46
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg);
#line 40
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);








static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp);
# 50 "/opt/tinyos/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void );
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40903e20, 
# 71 "/opt/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);






static inline error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 98
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 122
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 163
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );




static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );




static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type);




static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp);










static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );









static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg);






static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(message_t *msg);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
# 62 "/opt/tinyos/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
#line 97
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void );
#line 88
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void );
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/opt/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;

static inline error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 68
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4325 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409777d0);
# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409777d0);
# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40976430);
# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40976430);
# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4097ad90);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4326 {
#line 69
  SimpleArbiterP__0__grantedTask = 12U
};
#line 69
typedef int /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4327 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4328 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 155
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );









static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/opt/tinyos/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 91 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4329 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );









static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg);
#line 214
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/opt/tinyos/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4330 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static ieee154_simple_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 92
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);






static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 158
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 282
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );









static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg);
# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/opt/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "/opt/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 56 "/opt/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4331 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 13U
};
#line 144
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4332 {
#line 189
  MessageBufferLayerP__0__sendTask = 14U
};
#line 189
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4333 {
#line 322
  MessageBufferLayerP__0__deliverTask = 15U
};
#line 322
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4334 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 144
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4335 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4336 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "/opt/tinyos/tos/interfaces/Random.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4337 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 16U
};
#line 78
typedef int /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4338 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "/opt/tinyos/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 50
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg);
# 86 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );
#line 75
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 60 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
uint8_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state;
enum /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4339 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg;
message_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg;

static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );





static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 97
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 124
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
#line 147
static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 50
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 77
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg);
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void );
# 67 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.TransformCounterC*/TransformCounterC__2__upper_count_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__m_upper;

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__2____nesc_unnamed4340 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 6, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__2__from_size_type ) - /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__2__from_size_type ) + 6, 



  TransformCounterC__2__OVERFLOW_MASK = /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__2__upper_count_type )2 << (/*CounterMilli32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void );
# 72 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(uint8_t mode);
#line 40
static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__get(void );
#line 61
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start(void );
# 51 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );







static inline /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get(void );






static inline void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__fired(void );
#line 48
static void HplAtmRfa1TimerMacP__CompareB__fired(void );
# 49 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__overflow(void );
# 52 "/opt/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtmRfa1TimerMacP__McuPowerState__update(void );
# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__fired(void );
# 67 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
#line 57
typedef union HplAtmRfa1TimerMacP__reg32_t {

  uint32_t full;
  struct  {

    uint8_t ll;
    uint8_t lh;
    uint8_t hl;
    uint8_t hh;
  } ;
} HplAtmRfa1TimerMacP__reg32_t;



static uint32_t HplAtmRfa1TimerMacP__Counter__get(void );
#line 108
void __vector_68(void ) __attribute((signal))   ;







static inline void HplAtmRfa1TimerMacP__Counter__start(void );
#line 130
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 166
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value);
#line 185
void __vector_65(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareA__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareA__start(void );






static inline void HplAtmRfa1TimerMacP__CompareA__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 263
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void );

void __vector_66(void ) __attribute((signal))   ;
#line 343
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void );

void __vector_67(void ) __attribute((signal))   ;
#line 391
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void );
#line 421
static inline void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode);
#line 437
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);
#line 90
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg);
# 52 "/opt/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__done(error_t error);
# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 50
static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg);
# 70 "/opt/tinyos/tos/interfaces/PacketTimeStamp.nc"
static void RFA1DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RFA1DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RFA1DriverLayerP__PacketTimeStamp__size_type value);
# 69 "/opt/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static void RFA1DriverLayerP__RadioState__done(void );
# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t RFA1DriverLayerP__LocalTime__get(void );
# 47 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void );
#line 41
static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg);
#line 53
static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg);





static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg);
#line 46
static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void RFA1DriverLayerP__RadioSend__ready(void );
#line 56
static void RFA1DriverLayerP__RadioSend__sendDone(error_t error);
# 52 "/opt/tinyos/tos/interfaces/McuPowerState.nc"
static void RFA1DriverLayerP__McuPowerState__update(void );
# 70 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void RFA1DriverLayerP__SfdCapture__setMode(uint8_t mode);
#line 40
static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void );
# 40 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg);
#line 55
static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__schedule(void );
# 90 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg);




static void *RFA1DriverLayerP__getPayload(message_t *msg);




static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg);






uint8_t RFA1DriverLayerP__state;
enum RFA1DriverLayerP____nesc_unnamed4341 {

  RFA1DriverLayerP__STATE_P_ON = 0, 
  RFA1DriverLayerP__STATE_SLEEP = 1, 
  RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RFA1DriverLayerP__STATE_TRX_OFF = 3, 
  RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RFA1DriverLayerP__STATE_RX_ON = 5, 
  RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6
};

uint8_t RFA1DriverLayerP__cmd;
enum RFA1DriverLayerP____nesc_unnamed4342 {

  RFA1DriverLayerP__CMD_NONE = 0, 
  RFA1DriverLayerP__CMD_TURNOFF = 1, 
  RFA1DriverLayerP__CMD_STANDBY = 2, 
  RFA1DriverLayerP__CMD_TURNON = 3, 
  RFA1DriverLayerP__CMD_TRANSMIT = 4, 
  RFA1DriverLayerP__CMD_RECEIVE = 5, 
  RFA1DriverLayerP__CMD_CCA = 6, 
  RFA1DriverLayerP__CMD_CHANNEL = 7, 
  RFA1DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RFA1DriverLayerP__CMD_DOWNLOAD = 9
};

enum RFA1DriverLayerP____nesc_unnamed4343 {
  RFA1DriverLayerP__IRQ_NONE = 0, 
  RFA1DriverLayerP__IRQ_AWAKE = 1, 
  RFA1DriverLayerP__IRQ_TX_END = 2, 
  RFA1DriverLayerP__IRQ_XAH_AMI = 4, 
  RFA1DriverLayerP__IRQ_CCA_ED_DONE = 8, 
  RFA1DriverLayerP__IRQ_RX_END = 16, 
  RFA1DriverLayerP__IRQ_RX_START = 32, 
  RFA1DriverLayerP__IRQ_PLL_UNLOCK = 64, 
  RFA1DriverLayerP__IRQ_PLL_LOCK = 128
};

enum RFA1DriverLayerP____nesc_unnamed4344 {

  RFA1DriverLayerP__RFA1RADIOON = 0U
};

uint8_t RFA1DriverLayerP__radioIrq;

uint8_t RFA1DriverLayerP__txPower;
uint8_t RFA1DriverLayerP__channel;

message_t *RFA1DriverLayerP__rxMsg;
message_t RFA1DriverLayerP__rxMsgBuffer;

uint8_t RFA1DriverLayerP__rssiClear;
uint8_t RFA1DriverLayerP__rssiBusy;



static inline error_t RFA1DriverLayerP__PlatformInit__init(void );










static inline error_t RFA1DriverLayerP__SoftwareInit__init(void );
#line 237
static __inline void RFA1DriverLayerP__changeChannel(void );
#line 253
static __inline void RFA1DriverLayerP__changeState(void );
#line 334
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void );
#line 350
enum RFA1DriverLayerP____nesc_unnamed4345 {

  RFA1DriverLayerP__TX_SFD_DELAY = 11
};

static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
#line 473
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error);




static __inline void RFA1DriverLayerP__downloadMessage(void );
#line 542
static inline void RFA1DriverLayerP__serviceRadio(void );
#line 667
void __vector_63(void ) __attribute((interrupt))   ;









void __vector_60(void ) __attribute((interrupt))   ;










void __vector_59(void ) __attribute((interrupt))   ;









void __vector_57(void ) __attribute((interrupt))   ;









void __vector_64(void ) __attribute((interrupt))   ;









void __vector_61(void ) __attribute((interrupt))   ;
#line 730
static inline void RFA1DriverLayerP__Tasklet__run(void );
#line 758
static inline mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void );









static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);





static inline uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);







static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);




static inline void RFA1DriverLayerP__RadioPacket__clear(message_t *msg);






static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 839
static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 894
static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);
# 58 "/opt/tinyos/tos/lib/timer/BusyWaitCounterC.nc"
enum /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0____nesc_unnamed4346 {

  BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE = (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )1 << (8 * sizeof(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type ) - 1)
};
#line 83
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__Counter__overflow(void );
# 67 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__upper_count_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__m_upper;

enum /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3____nesc_unnamed4347 {

  TransformCounterC__3__LOW_SHIFT_RIGHT = 1, 
  TransformCounterC__3__HIGH_SHIFT_LEFT = 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__from_size_type ) - /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__LOW_SHIFT_RIGHT, 
  TransformCounterC__3__NUM_UPPER_BITS = 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__to_size_type ) - 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__from_size_type ) + 1, 



  TransformCounterC__3__OVERFLOW_MASK = /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__NUM_UPPER_BITS ? ((/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__upper_count_type )2 << (/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__CounterFrom__overflow(void );
# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
static /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "/opt/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 70 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset(void );
#line 43
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type value);
#line 59
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start(void );


static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop(void );
# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired(void );
# 40 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get(void );
# 52 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void );










static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void );





static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void );










static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type time);
#line 102
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type ndt);
#line 115
static inline /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__getNow(void );









static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void );
# 109 "/opt/tinyos/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 109
{
   __asm volatile ("cli");}

#line 126
#line 125
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 129
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 135
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(uint8_t pin)
#line 113
{
}

# 68 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(uint8_t arg_0x40516850){
#line 68
  switch (arg_0x40516850) {
#line 68
    case 5:
#line 68
      SerialAutoControlP__ControlInt__fired();
#line 68
      break;
#line 68
    default:
#line 68
      /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(arg_0x40516850);
#line 68
      break;
#line 68
    }
#line 68
}
#line 68
# 88 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getPins(void )
#line 88
{
  return * (volatile uint8_t *)(0x03 + 0x20);
}

# 70 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getPins(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = HplAtmegaPinChange0C__HplAtmegaPinChange__getPins();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 76 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getMask(void )
#line 76
{
  return * (volatile uint8_t *)0x6B;
}

# 62 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtmegaPinChange0C__HplAtmegaPinChange__getMask();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 88 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired(void )
#line 88
{
  uint8_t pins = /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask() & (/*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getPins() ^ /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling);





  if (pins & (1 << 0)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(0);
    }
#line 97
  if (pins & (1 << 1)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(1);
    }
#line 99
  if (pins & (1 << 2)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(2);
    }
#line 101
  if (pins & (1 << 3)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(3);
    }
#line 103
  if (pins & (1 << 4)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(4);
    }
#line 105
  if (pins & (1 << 5)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(5);
    }
#line 107
  if (pins & (1 << 6)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(6);
    }
#line 109
  if (pins & (1 << 7)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(7);
    }
}

# 40 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static void HplAtmegaPinChange0C__HplAtmegaPinChange__fired(void ){
#line 40
  /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired();
#line 40
}
#line 40
# 97 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 81 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(uint8_t value)
#line 81
{
  * (volatile uint8_t *)0x6B = value;
}

# 65 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(uint8_t value){
#line 65
  HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(value);
#line 65
}
#line 65
# 59 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__enable(void )
#line 59
{
  * (volatile uint8_t *)0x68 |= 1 << 0;
}

# 51 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable(void ){
#line 51
  HplAtmegaPinChange0C__HplAtmegaPinChange__enable();
#line 51
}
#line 51
# 397 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 192 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 192
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 133 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 51 "/opt/tinyos/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 95 "/opt/tinyos/tos/platforms/ucmini/SerialResetP.nc"
static inline uint8_t SerialResetP__SerialPacketInfo__offset(void )
{
  return 0;
}

# 358 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x40617b68){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x40617b68) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    case 0x72:
#line 15
      __nesc_result = SerialResetP__SerialPacketInfo__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x40617b68);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 244 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 56 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56









inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/opt/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 182 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 182
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41





inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 176 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 176
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0xC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 332 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 332
{
}

# 49 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 331 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 331
{
}

# 47 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 216 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__m_upper++;
    if ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__0__m_upper & /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__m_upper++;
    if ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__1__m_upper & /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 83 "/opt/tinyos/tos/lib/timer/BusyWaitCounterC.nc"
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__Counter__overflow(void ){
#line 82
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
static inline void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__m_upper++;
    if ((/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__m_upper & /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__OVERFLOW_MASK) == 0) {
      /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
#line 82
  /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__3__CounterFrom__overflow();
#line 82
  /*CounterMcu32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void )
{
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow();
}

# 49 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1Timer1P__Timer__overflow(void ){
#line 49
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow();
#line 49
}
#line 49
# 162 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void )
#line 162
{
}

# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareA__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareA__default__fired();
#line 48
}
#line 48
# 172 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void )
#line 172
{
}

# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareB__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareB__default__fired();
#line 48
}
#line 48
# 182 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void )
#line 182
{
}

# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareC__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareC__default__fired();
#line 48
}
#line 48
# 322 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void )
#line 322
{
}

# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static void HplAtmRfa1Timer1P__Capture__fired(void ){
#line 48
  HplAtmRfa1Timer1P__Capture__default__fired();
#line 48
}
#line 48
# 124 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/opt/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(uint8_t bit)
#line 50
{
#line 50
  * (volatile uint8_t * )46U |= 1 << bit;
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(5);
#line 40
}
#line 40
inline static void LedsP__Led2__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(4);
#line 40
}
#line 40
inline static void LedsP__Led1__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(3);
#line 40
}
#line 40
inline static void LedsP__Led0__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(2);
#line 40
}
#line 40
# 56 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )45U |= 1 << bit;
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(5);
#line 46
}
#line 46
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(4);
#line 46
}
#line 46
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(3);
#line 46
}
#line 46
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(2);
#line 46
}
#line 46
# 57 "/opt/tinyos/tos/platforms/ucmini/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 58
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led3__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
    LedsP__Led3__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 50 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(uint8_t bit)
#line 50
{
#line 50
  * (volatile uint8_t * )43U |= 1 << bit;
}

# 40 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__Toggle__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(6);
#line 40
}
#line 40
# 56 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )42U |= 1 << bit;
}

# 46 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__Toggle__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(6);
#line 46
}
#line 46
# 48 "/opt/tinyos/tos/platforms/ucmini/chips/stm25p/Stm25pOffP.nc"
static inline error_t Stm25pOffP__Stm25pOff__init(void )
#line 48
{

  Stm25pOffP__Toggle__makeOutput();
  Stm25pOffP__Toggle__set();







  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__Stm25pInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Stm25pOffP__Stm25pOff__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 38 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void )
#line 38
{
  if (!1U) {
      * (volatile uint8_t *)0x139 |= 1 << 1;
    }
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t McuInitP__RadioInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioOffP__RFA1RadioOff__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 101 "/opt/tinyos/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__AdcInit__default__init(void )
#line 101
{
#line 101
  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t McuInitP__AdcInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__AdcInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 81 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__start(void )
{
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 61 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start(void ){
#line 61
  HplAtmRfa1Timer1P__Timer__start();
#line 61
}
#line 61
# 95 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0x80 = (* (volatile uint8_t *)0x80 & ~(0x3 << 0))
     | (((mode >> 3) & 0x3) << 0);

    * (volatile uint8_t *)0x81 = ((* (volatile uint8_t *)0x81 & ~((0x3 << 3) | (0x7 << 0)))
     | (((mode >> 5) & 0x3) << 3))
     | (((mode >> 0) & 0x7) << 0);
  }
}

# 72 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1Timer1P__Timer__setMode(mode);
#line 72
}
#line 72
# 51 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void )
{
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(2);
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start();

  return SUCCESS;
}

# 116 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 3;
}

# 61 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start(void ){
#line 61
  HplAtmRfa1TimerMacP__Counter__start();
#line 61
}
#line 61
# 95 "/opt/tinyos/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
{
  McuSleepC__powerState = -1;
}

# 52 "/opt/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtmRfa1TimerMacP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 130 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode)
{
  mode &= (1 << 5) | (1 << 4);


  if ((mode & (1 << 4)) != 0) {
    * (volatile uint8_t *)0xB6 = 1 << 5;
    }
  /* atomic removed: atomic calls only */
#line 138
  * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~((1 << 5) | (1 << 4))) | mode;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 72 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1TimerMacP__Counter__setMode(mode);
#line 72
}
#line 72
# 51 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void )
{
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(48);
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start();

  return SUCCESS;
}

# 211 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 0))
     | ((mode & 0x1) << 0);
  }
}

# 70 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareA__setMode(mode);
#line 70
}
#line 70
# 200 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 0);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareA__stop();
#line 62
}
#line 62
# 52 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(0);

  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 72 "/opt/tinyos/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 72
{
  /* atomic removed: atomic calls only */


  {
    uint8_t wraps_ok = 0;
    uint8_t wraps = 255;
    uint16_t now;
    uint16_t prev_cycles_min = 0xffff;
    uint16_t prev_cycles_max = 0;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = 1 << 0;


    while (wraps_ok < 50 && --wraps != 0) 
      {
        while (* (volatile uint8_t *)0xB2 != 0) 
          ;

        now = * (volatile uint16_t *)0x84;

        while (* (volatile uint8_t *)0xB2 != 64) 
          ;

        MeasureClockC__cycles = * (volatile uint16_t *)0x84 - now;

        if (prev_cycles_min < MeasureClockC__cycles) {
          prev_cycles_min = MeasureClockC__cycles;
          }
#line 103
        if (prev_cycles_max > MeasureClockC__cycles) {
          prev_cycles_max = MeasureClockC__cycles;
          }
        if (prev_cycles_max - prev_cycles_min <= 1) {
            wraps_ok++;
          }
        else 
#line 108
          {
            wraps_ok = 0;
            prev_cycles_min = 0xffff;
            prev_cycles_max = 0;
          }
      }


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    while (* (volatile uint8_t *)0xB6 & ((1 << 1) | (1 << 0))) 
      ;
  }

  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t McuInitP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void )
{
  /* atomic removed: atomic calls only */

  {

    * (volatile uint8_t *)0x61 = 0x80;


    * (volatile uint8_t *)0x61 = 0x0F;
  }
#line 74
  return SUCCESS;
}

static inline error_t McuInitP__Init__init(void )
{
  error_t ok;

#line 80
  * (volatile uint8_t *)0x135 |= 1 << 4;
  * (volatile uint8_t *)0x134 |= 1 << 4;
  * (volatile uint8_t *)0x133 |= 1 << 4;
  * (volatile uint8_t *)0x132 |= 1 << 4;

  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;
  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;




  ok = McuInitP__systemClockInit();
  ok = ecombine(ok, McuInitP__MeasureClock__init());
  ok = ecombine(ok, McuInitP__TimerInit__init());
  ok = ecombine(ok, McuInitP__AdcInit__init());
  ok = ecombine(ok, McuInitP__RadioInit__init());

  return ok;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__McuInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos/tos/platforms/ucmini/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;

  ok = PlatformP__McuInit__init();
  ok = ecombine(ok, PlatformP__Stm25pInit__init());
  ok = ecombine(ok, PlatformP__LedsInit__init());

  return ok;
}

# 164 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__PlatformInit__init(void )
{
  RFA1DriverLayerP__rxMsg = &RFA1DriverLayerP__rxMsgBuffer;


  RFA1DriverLayerP__rssiClear = 0;
  RFA1DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 89 "/opt/tinyos/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos/tos/interfaces/Random.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 176 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 48
}
#line 48
# 143 "BaseStationP.nc"
static inline void BaseStationP__RadioControl__stopDone(error_t error)
#line 143
{
}

# 138 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  BaseStationP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 130 "BaseStationP.nc"
static inline void BaseStationP__RadioControl__startDone(error_t error)
#line 130
{
  if (error == SUCCESS) {
      BaseStationP__radioFull = FALSE;
    }
}

# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  BaseStationP__RadioControl__startDone(error);
#line 113
}
#line 113
# 144 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 292 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 132 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "/opt/tinyos/tos/interfaces/Ieee154Send.nc"
inline static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 281 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 67 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

#line 199
static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t BaseStationP__radioSendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BaseStationP__radioSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 52 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(uint8_t bit)
#line 52
{
#line 52
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 52
    * (volatile uint8_t * )46U ^= 1 << bit;
#line 52
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(4);
#line 42
}
#line 42
# 117 "/opt/tinyos/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 117
{
  LedsP__Led2__toggle();
  ;
#line 119
  ;
}

# 102 "/opt/tinyos/tos/platforms/ucmini/Leds.nc"
inline static void BaseStationP__Leds__led2Toggle(void ){
#line 102
  LedsP__Leds__led2Toggle();
#line 102
}
#line 102
# 105 "BaseStationP.nc"
static inline void BaseStationP__failBlink(void )
#line 105
{
  BaseStationP__Leds__led2Toggle();
}

#line 301
static inline void BaseStationP__RadioSend__sendDone(am_id_t id, message_t *msg, error_t error)
#line 301
{
  if (error != SUCCESS) {
    BaseStationP__failBlink();
    }
  else {
#line 305
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseStationP__radioQueue[BaseStationP__radioOut]) 
        {
          if (++BaseStationP__radioOut >= BaseStationP__RADIO_QUEUE_LEN) {
            BaseStationP__radioOut = 0;
            }
#line 310
          if (BaseStationP__radioFull) {
            BaseStationP__radioFull = FALSE;
            }
        }
#line 313
      __nesc_atomic_end(__nesc_atomic); }
    }
#line 314
  BaseStationP__radioSendTask__postTask();
}

# 110 "/opt/tinyos/tos/interfaces/AMSend.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x40903460, message_t * msg, error_t error){
#line 110
  BaseStationP__RadioSend__sendDone(arg_0x40903460, msg, error);
#line 110
}
#line 110
# 98 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 120 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 78 "/opt/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 74 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rfa1packet_header_t );
}

# 41 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = RFA1RadioP__RFA1DriverConfig__headerLength(msg);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 768 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg)
{

  return RFA1DriverLayerP__Config__headerLength(msg) + sizeof(rfa1_header_t );
}

# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1DriverLayerP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 282 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
}

# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 127 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

#line 214
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 61 "/opt/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__resume(void )
{
}

# 79 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 248 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * 0.0625);
}

# 40 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 66 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__start(dt);
#line 66
}
#line 66
# 99 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 94 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 98 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 57 "/opt/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
}

# 72 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 189 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 193 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 0;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareA__start();
#line 59
}
#line 59
# 189 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__reset(void )
#line 189
{
#line 189
  * (volatile uint8_t *)0xE0 = 1 << 0;
}

# 54 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareA__reset();
#line 54
}
#line 54
# 166 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF8 = time.hh;
    * (volatile uint8_t *)0xF7 = time.hl;
    * (volatile uint8_t *)0xF6 = time.lh;
    * (volatile uint8_t *)0xF5 = time.ll;
  }
}

# 43 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareA__set(value);
#line 43
}
#line 43
# 80 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type time)
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(time);
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start();
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 239 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * 0.0625);
}

# 51 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 60 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 173 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40976430){
#line 65
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40976430);
#line 65
}
#line 65
# 90 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__Config__headerLength(msg);
}

#line 774
static inline uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RFA1DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 287 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 96 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 91 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 217 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

# 322 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 168 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

# 72 "/opt/tinyos/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 212 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

#line 178
static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

#line 222
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 225
  return (addr == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 185 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 149 "BaseStationP.nc"
static inline message_t *BaseStationP__RadioSnoop__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 151
{
  return BaseStationP__receive(msg, payload, len);
}

# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x409014d8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BaseStationP__RadioSnoop__receive(arg_0x409014d8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 155 "BaseStationP.nc"
static inline message_t *BaseStationP__RadioReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 157
{
  return BaseStationP__receive(msg, payload, len);
}

# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x40903e20, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BaseStationP__RadioReceive__receive(arg_0x40903e20, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/opt/tinyos/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 163 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}

# 141 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 168 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 179 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

#line 173
static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 176
  return addr == /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

# 159 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 230 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 262
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

#line 225
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 72
static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 128
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  msg = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  return msg;
}

# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 222 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 227
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/opt/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 68 "/opt/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 165 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x4097ad90){
#line 102
  switch (arg_0x4097ad90) {
#line 102
    case 0U:
#line 102
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x4097ad90);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40976430){
#line 59
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x40976430);
#line 59
}
#line 59
# 155 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId;
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 230 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 297 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 163 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 149 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RFA1RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RFA1RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 56 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 155 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 56 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 135 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  RFA1RadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 124 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 257 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * 0.0625);
}

# 46 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RFA1DriverLayerP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 78 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
#line 63
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 40 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 115 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__getNow(void )
{
  return /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get();
}

# 109 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 76 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 280 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__RadioAlarm__fired(void )
{
}

# 90 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x408d5568){
#line 60
  switch (arg_0x408d5568) {
#line 60
    case 0U:
#line 60
      RFA1RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 2U:
#line 60
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x408d5568);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 81 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 261 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 71 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 63
}
#line 63
# 72 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
    /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready();
#line 63
}
#line 63
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/opt/tinyos/tos/lib/rfxlink/util/RadioState.nc"
inline static void RFA1DriverLayerP__RadioState__done(void ){
#line 69
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 237 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static __inline void RFA1DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;


  * (volatile uint8_t *)0x148 = RFA1_CCA_MODE_VALUE | RFA1DriverLayerP__channel;

  if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) {
    RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
    }
  else {
#line 248
    RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
}

# 52 "/opt/tinyos/tos/interfaces/McuPowerState.nc"
inline static void RFA1DriverLayerP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 253 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static __inline void RFA1DriverLayerP__changeState(void )
{
  if ((RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON) && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP) 
    {
      for (; 0; ) ;

      * (volatile uint8_t *)0x14F = 0xFF;
      * (volatile uint8_t *)0x14E = 1 << 7;
      * (volatile uint8_t *)0x139 &= ~(1 << 1);
      RFA1DriverLayerP__McuPowerState__update();

      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 266
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
      {
        for (; 0; ) ;

        * (volatile uint8_t *)0x14E = ((((1 << 0) | (1 << 6)) | (1 << 3)) | (1 << 2)) | (1 << 4);
        RFA1DriverLayerP__McuPowerState__update();

        * (volatile uint8_t *)0x142 = 6;




        RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
#line 280
      if ((RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY) && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) 
        {



          * (volatile uint8_t *)0x142 = 3;

          * (volatile uint8_t *)0x14E = 0;
          RFA1DriverLayerP__McuPowerState__update();

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
        }
      }
    }
#line 293
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
    {
      * (volatile uint8_t *)0x139 |= 1 << 1;
      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 299
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
      {
        * (volatile uint8_t *)0x14E = 0;
        RFA1DriverLayerP__McuPowerState__update();

        RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[idx] |= 1 << bit;
}

# 51 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 159 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RFA1RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 158 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 144 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RFA1RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 188 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 154 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "/opt/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 71 "/opt/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 168 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RFA1RadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 264 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RFA1RadioP__RadioAlarm__getNow();


  if (RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * 0.0625);
    }
  else {
#line 275
    time += (uint16_t )(32 * (-5 + 5) * 0.0625);
    }
  return time;
}

# 57 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 327 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RFA1DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 115 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 118
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.nxdata, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.nxdata, __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata));
}

# 88 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 121 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RFA1RadioP__Ieee154PacketLayer__createAckReply(data, ack);
}

# 80 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  RFA1RadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 116 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 84 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 53 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RFA1RadioP__RFA1DriverConfig__metadataLength(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 794 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RFA1DriverLayerP__Config__metadataLength(msg) + sizeof(rfa1_metadata_t );
}

# 65 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RFA1DriverLayerP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

#line 54
static inline flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}








static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 50 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 50
}
#line 50
# 69 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
}

# 73 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void ){
#line 73
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop();
#line 73
}
#line 73
# 108 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop();
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 55 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(2U);
#line 55
}
#line 55
# 124 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.nxdata) == __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata)
   && (__nesc_ntoh_leuint16(header->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 106 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RFA1RadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RFA1RadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 104 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 75 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 101 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 147 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  for (; 0; ) ;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) 
    {
      if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, msg)) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg);

          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
        }

      return msg;
    }

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg);


      if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg) == SUCCESS) {
        /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 173
        for (; 0; ) ;
        }
    }
  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 894 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RFA1DriverLayerP__getMeta(msg)->lqi = value;
}

# 312 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 134 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
    }




  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 79 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void )
{
  return sizeof(rfa1packet_header_t ) + 28;
}

# 47 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__RFA1DriverConfig__maxPayloadLength();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 787 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RFA1DriverLayerP__Config__maxPayloadLength() - sizeof(rfa1_header_t );
}

#line 478
static __inline void RFA1DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  bool sendSignal = FALSE;

  length = * (volatile uint8_t *)0x17B;

  if (* (volatile uint8_t *)0x146 & (1 << 7) && length >= 3 && length <= RFA1DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t *data;

      data = RFA1DriverLayerP__getPayload(RFA1DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(RFA1DriverLayerP__rxMsg)->length.nxdata, length);


      length -= 2;


      memcpy(data, (void *)& * (volatile uint8_t *)0x180, length);

      if (RFA1DriverLayerP__RadioReceive__header(RFA1DriverLayerP__rxMsg)) 
        {
          RFA1DriverLayerP__PacketLinkQuality__set(RFA1DriverLayerP__rxMsg, (uint8_t )*(& * (volatile uint8_t *)0x180 + * (volatile uint8_t *)0x17B));
          sendSignal = TRUE;
        }
    }

  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
#line 523
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;


  if (sendSignal) {
    RFA1DriverLayerP__rxMsg = RFA1DriverLayerP__RadioReceive__receive(RFA1DriverLayerP__rxMsg);
    }
}

#line 473
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error)
#line 473
{
}

# 52 "/opt/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RFA1DriverLayerP__RadioCCA__done(error_t error){
#line 52
  RFA1DriverLayerP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 55
}
#line 55
# 839 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RFA1DriverLayerP__RSSIFlag__clear(msg);
}

# 55 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 55
}
#line 55
# 77 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "/opt/tinyos/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 50 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50





inline static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 844 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RFA1DriverLayerP__TransmitPowerFlag__clear(msg);

  RFA1DriverLayerP__RSSIFlag__set(msg);
  RFA1DriverLayerP__getMeta(msg)->rssi = value;
}

# 136 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

#line 60
static inline timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 50 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 50
}
#line 50
# 82 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/opt/tinyos/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__set(message_t * msg, RFA1DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 130 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(1000 * 0.0625);
}

# 43 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1RadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 50 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(2U, timeout);
#line 50
}
#line 50
#line 45
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(2U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 92 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

#line 198
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 96 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "/opt/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg) && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
        }
      else 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
        }
    }
}

# 56 "/opt/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 391 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  /* atomic removed: atomic calls only */
  {
    time.ll = * (volatile uint8_t *)0xE9;
    time.lh = * (volatile uint8_t *)0xEA;
    time.hl = * (volatile uint8_t *)0xEB;
    time.hh = * (volatile uint8_t *)0xEC;
  }

  return time.full;
}

# 40 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__SfdCapture__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 542 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__serviceRadio(void )
{
  uint32_t time;
  uint8_t irq;
  uint8_t temp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time = RFA1DriverLayerP__SfdCapture__get();
      irq = RFA1DriverLayerP__radioIrq;
      RFA1DriverLayerP__radioIrq = RFA1DriverLayerP__IRQ_NONE;
    }
#line 553
    __nesc_atomic_end(__nesc_atomic); }









  if ((irq & RFA1DriverLayerP__IRQ_PLL_LOCK) != 0) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 572
        if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT) {
          for (; 0; ) ;
          }
        else {
#line 575
          for (; 0; ) ;
          }
        }
    }
#line 578
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT && (irq & RFA1DriverLayerP__IRQ_TX_END) != 0) 
    {
      for (; 0; ) ;

      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
      RFA1DriverLayerP__RadioSend__sendDone(SUCCESS);


      for (; 0; ) ;
    }

  if ((irq & RFA1DriverLayerP__IRQ_RX_START) != 0) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA) 
        {
          RFA1DriverLayerP__RadioCCA__done(FAIL);
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
        }

      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE) 
        {
          for (; 0; ) ;


          if (irq == RFA1DriverLayerP__IRQ_RX_START) 
            {
              temp = * (volatile uint8_t *)0x146 & RFA1_RSSI_MASK;
              RFA1DriverLayerP__rssiBusy += temp - (RFA1DriverLayerP__rssiBusy >> 2);

              RFA1DriverLayerP__PacketTimeStamp__set(RFA1DriverLayerP__rxMsg, time);


              RFA1DriverLayerP__PacketRSSI__set(RFA1DriverLayerP__rxMsg, temp);
            }
          else 

            {
              RFA1DriverLayerP__PacketTimeStamp__clear(RFA1DriverLayerP__rxMsg);


              RFA1DriverLayerP__PacketRSSI__clear(RFA1DriverLayerP__rxMsg);
            }


          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_RECEIVE;
        }
      else {
        for (; 0; ) ;
        }
    }
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_RECEIVE && (irq & RFA1DriverLayerP__IRQ_RX_END) != 0) 
    {
      for (; 0; ) ;


      RFA1DriverLayerP__rssiClear += (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) - (RFA1DriverLayerP__rssiClear >> 2);

      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_DOWNLOAD;
    }

  if ((irq & RFA1DriverLayerP__IRQ_AWAKE) != 0) {
      if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF && (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON)) {
        RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
        }
      else {
#line 643
        for (; 0; ) ;
        }
    }
  if ((irq & RFA1DriverLayerP__IRQ_CCA_ED_DONE) != 0) {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA) 
        {

          * (volatile uint8_t *)0x155 &= ~(1 << 7);

          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;

          for (; 0; ) ;
          for (; 0; ) ;

          RFA1DriverLayerP__RadioCCA__done(* (volatile uint8_t *)0x141 & 7 ? * (volatile uint8_t *)0x141 & 6 ? SUCCESS : EBUSY : FAIL);
        }
      else {
        for (; 0; ) ;
        }
    }
}

#line 730
static inline void RFA1DriverLayerP__Tasklet__run(void )
{
  if (RFA1DriverLayerP__radioIrq != RFA1DriverLayerP__IRQ_NONE) {
    RFA1DriverLayerP__serviceRadio();
    }
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_DOWNLOAD) {
        RFA1DriverLayerP__downloadMessage();
        }
      else {
#line 739
        if (RFA1DriverLayerP__CMD_TURNOFF <= RFA1DriverLayerP__cmd && RFA1DriverLayerP__cmd <= RFA1DriverLayerP__CMD_TURNON) {
          RFA1DriverLayerP__changeState();
          }
        else {
#line 741
          if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) {
            RFA1DriverLayerP__changeChannel();
            }
          }
        }
#line 744
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
          RFA1DriverLayerP__RadioState__done();
        }
    }

  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON && !RFA1DriverLayerP__radioIrq) {
    RFA1DriverLayerP__RadioSend__ready();
    }
}

# 48 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  RFA1DriverLayerP__Tasklet__run();
#line 48
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
}
#line 48
# 47 "/opt/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
static inline void TaskletC__tasklet__runTask(void )
{
  TaskletC__Tasklet__run();
}

# 40 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 806 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TransmitPowerFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RFA1DriverLayerP__getMeta(msg)->power;
}

# 63 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 89 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 59 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RFA1RadioP__RFA1DriverConfig__requiresRssiCca(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/opt/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 855 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TimeSyncFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RFA1DriverLayerP__RadioPacket__headerLength(msg) + RFA1DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 40 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 59 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get(void )
{
  return /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__get();
}

# 64 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/opt/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "/opt/tinyos/tos/lib/timer/LocalTime.nc"
inline static uint32_t RFA1DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 347 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 372
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

# 42 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(2);
#line 42
}
#line 42
# 87 "/opt/tinyos/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 87
{
  LedsP__Led0__toggle();
  ;
#line 89
  ;
}

# 69 "/opt/tinyos/tos/platforms/ucmini/Leds.nc"
inline static void BaseStationP__Leds__led0Toggle(void ){
#line 69
  LedsP__Leds__led0Toggle();
#line 69
}
#line 69
# 64 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x409777d0){
#line 53
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x409777d0);
#line 53
}
#line 53
# 71 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId = id;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 169 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 61 "/opt/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x409777d0){
#line 61
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x409777d0);
#line 61
}
#line 61
# 84 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
          {
            unsigned char __nesc_temp = 
#line 91
            SUCCESS;

            {
#line 91
              __nesc_atomic_end(__nesc_atomic); 
#line 91
              return __nesc_temp;
            }
          }
        }
#line 93
      {
        unsigned char __nesc_temp = 
#line 93
        FAIL;

        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return __nesc_temp;
        }
      }
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/opt/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "/opt/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg)
{
  if (/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest() == SUCCESS) 
    {
      error_t result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(msg);

#line 58
      if (result != SUCCESS) {
        /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
        }
      return result;
    }

  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending = msg;
  return /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request();
}

# 46 "/opt/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 122 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "/opt/tinyos/tos/interfaces/SendNotifier.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(am_id_t arg_0x40901b50, am_addr_t dest, message_t * msg){
#line 59
    /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(arg_0x40901b50, dest, msg);
#line 59
}
#line 59
# 183 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata, addr);
}

# 146 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
# 173 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr)
{
  RFA1RadioP__Ieee154PacketLayer__setDestAddr(msg, addr);
}

# 43 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr){
#line 43
  RFA1RadioP__ActiveMessageConfig__setDestination(msg, addr);
#line 43
}
#line 43
# 184 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(msg, addr);
}

# 286 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 204 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata, type);
}

# 55 "/opt/tinyos/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 168 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup();
}

# 173 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata, pan);
}

# 136 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 193 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp)
{
  RFA1RadioP__Ieee154PacketLayer__setDestPan(msg, grp);
}

# 55 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp){
#line 55
  RFA1RadioP__ActiveMessageConfig__setGroup(msg, grp);
#line 55
}
#line 55
# 214 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(msg, grp);
}

# 193 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata, addr);
}

# 156 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 183 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr)
{
  RFA1RadioP__Ieee154PacketLayer__setSrcAddr(msg, addr);
}

# 49 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr){
#line 49
  RFA1RadioP__ActiveMessageConfig__setSource(msg, addr);
#line 49
}
#line 49
# 194 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(msg, addr);
}

# 292 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_simple_header_t ));
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 164 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 54 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 235 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 267
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 69 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 198 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg)
{
  if (!RFA1RadioP__Ieee154PacketLayer__isDataFrame(msg)) {
    RFA1RadioP__Ieee154PacketLayer__createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RFA1RadioP__ActiveMessageConfig__checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 59 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RFA1DriverLayerP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 105 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 297 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_simple_header_t );
}

# 59 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 169 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 59 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 240 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

#line 272
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

#line 79
static inline error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  if (/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(msg, /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address());
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(msg, /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup());
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(msg, id);
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(msg, addr);

  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(id, addr, msg);

  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(msg);
}

# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
inline static error_t BaseStationP__RadioSend__send(am_id_t arg_0x407e2cc0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(arg_0x407e2cc0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 121 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static void BaseStationP__RadioAMPacket__setSource(message_t * amsg, am_addr_t addr){
#line 121
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(amsg, addr);
#line 121
}
#line 121
# 799 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__RadioPacket__clear(message_t *msg)
{
}

# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(message_t *msg){
#line 70
  RFA1DriverLayerP__RadioPacket__clear(msg);
#line 70
}
#line 70
# 115 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg)
{
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags = 0;
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 141 "/opt/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg)
{

  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 307 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg)
{
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(message_t *msg){
#line 70
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 179 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg)
{
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(msg);
}

# 70 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(msg);
#line 70
}
#line 70
# 250 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(msg);
}



static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(message_t *msg)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(msg);
}

# 65 "/opt/tinyos/tos/interfaces/Packet.nc"
inline static void BaseStationP__RadioPacket__clear(message_t * msg){
#line 65
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(msg);
#line 65
}
#line 65
# 147 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static am_id_t BaseStationP__UartAMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 310 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 60 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 153
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(message_t *amsg)
#line 153
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 155
  return __nesc_ntoh_uint16(header->src.nxdata);
}

# 88 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static am_addr_t BaseStationP__UartAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 148 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 78 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static am_addr_t BaseStationP__UartAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 122 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "/opt/tinyos/tos/interfaces/Packet.nc"
inline static uint8_t BaseStationP__UartPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 270 "BaseStationP.nc"
static inline void BaseStationP__radioSendTask__runTask(void )
#line 270
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
#line 273
  am_addr_t source;
  message_t *msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseStationP__radioIn == BaseStationP__radioOut && !BaseStationP__radioFull) 
      {
        BaseStationP__radioBusy = FALSE;
        {
#line 280
          __nesc_atomic_end(__nesc_atomic); 
#line 280
          return;
        }
      }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseStationP__radioQueue[BaseStationP__radioOut];
  len = BaseStationP__UartPacket__payloadLength(msg);
  addr = BaseStationP__UartAMPacket__destination(msg);
  source = BaseStationP__UartAMPacket__source(msg);
  id = BaseStationP__UartAMPacket__type(msg);

  BaseStationP__RadioPacket__clear(msg);
  BaseStationP__RadioAMPacket__setSource(msg, source);

  if (BaseStationP__RadioSend__send(id, addr, msg, len) == SUCCESS) {
    BaseStationP__Leds__led0Toggle();
    }
  else {
      BaseStationP__failBlink();
      BaseStationP__radioSendTask__postTask();
    }
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t BaseStationP__uartSendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BaseStationP__uartSendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 42 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(3);
#line 42
}
#line 42
# 102 "/opt/tinyos/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 102
{
  LedsP__Led1__toggle();
  ;
#line 104
  ;
}

# 85 "/opt/tinyos/tos/platforms/ucmini/Leds.nc"
inline static void BaseStationP__Leds__led1Toggle(void ){
#line 85
  LedsP__Leds__led1Toggle();
#line 85
}
#line 85
# 315 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 75 "/opt/tinyos/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 131 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

#line 68
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 80 "/opt/tinyos/tos/interfaces/AMSend.nc"
inline static error_t BaseStationP__UartSend__send(am_id_t arg_0x407e5698, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x407e5698, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 189 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(message_t *msg, am_group_t group)
#line 189
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 191
  __nesc_hton_uint8(header->group.nxdata, group);
}

# 187 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static void BaseStationP__UartAMPacket__setGroup(message_t * amsg, am_group_t grp){
#line 187
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setGroup(amsg, grp);
#line 187
}
#line 187
# 163 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(message_t *amsg, am_addr_t addr)
#line 163
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 165
  __nesc_hton_uint16(header->src.nxdata, addr);
}

# 121 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static void BaseStationP__UartAMPacket__setSource(message_t * amsg, am_addr_t addr){
#line 121
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setSource(amsg, addr);
#line 121
}
#line 121
# 117 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(message_t *msg)
#line 117
{
  memset(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg), 0, sizeof(serial_header_t ));
  return;
}

# 65 "/opt/tinyos/tos/interfaces/Packet.nc"
inline static void BaseStationP__UartPacket__clear(message_t * msg){
#line 65
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__clear(msg);
#line 65
}
#line 65
# 131 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestPan(message_t *msg){
#line 131
  unsigned short __nesc_result;
#line 131

#line 131
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg);
#line 131

#line 131
  return __nesc_result;
#line 131
}
#line 131
# 188 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_group_t RFA1RadioP__ActiveMessageConfig__group(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDestPan(msg);
}

# 52 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RFA1RadioP__ActiveMessageConfig__group(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 209 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__group(msg);
}

# 177 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static am_group_t BaseStationP__RadioAMPacket__group(message_t * amsg){
#line 177
  unsigned char __nesc_result;
#line 177

#line 177
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__group(amsg);
#line 177

#line 177
  return __nesc_result;
#line 177
}
#line 177
# 178 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__ActiveMessageConfig__source(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 46 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1RadioP__ActiveMessageConfig__source(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 189 "/opt/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(msg);
}

# 88 "/opt/tinyos/tos/interfaces/AMPacket.nc"
inline static am_addr_t BaseStationP__RadioAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 78
inline static am_addr_t BaseStationP__RadioAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t BaseStationP__RadioAMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 78 "/opt/tinyos/tos/interfaces/Packet.nc"
inline static uint8_t BaseStationP__RadioPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 190 "BaseStationP.nc"
static inline void BaseStationP__uartSendTask__runTask(void )
#line 190
{
  uint8_t len;
  am_id_t id;
  am_addr_t addr;
#line 193
  am_addr_t src;
  message_t *msg;
  am_group_t grp;

#line 196
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (BaseStationP__uartIn == BaseStationP__uartOut && !BaseStationP__uartFull) 
      {
        BaseStationP__uartBusy = FALSE;
        {
#line 200
          __nesc_atomic_end(__nesc_atomic); 
#line 200
          return;
        }
      }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
  msg = BaseStationP__uartQueue[BaseStationP__uartOut];
  BaseStationP__tmpLen = len = BaseStationP__RadioPacket__payloadLength(msg);
  id = BaseStationP__RadioAMPacket__type(msg);
  addr = BaseStationP__RadioAMPacket__destination(msg);
  src = BaseStationP__RadioAMPacket__source(msg);
  grp = BaseStationP__RadioAMPacket__group(msg);
  BaseStationP__UartPacket__clear(msg);
  BaseStationP__UartAMPacket__setSource(msg, src);
  BaseStationP__UartAMPacket__setGroup(msg, grp);

  if (BaseStationP__UartSend__send(id, addr, BaseStationP__uartQueue[BaseStationP__uartOut], len) == SUCCESS) {
    BaseStationP__Leds__led1Toggle();
    }
  else {
      BaseStationP__failBlink();
      BaseStationP__uartSendTask__postTask();
    }
}

# 54 "/opt/tinyos/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 100 "/opt/tinyos/tos/platforms/ucmini/SerialResetP.nc"
static inline uint8_t SerialResetP__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen)
{
  return upperLen;
}

# 361 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x40617b68, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x40617b68) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    case 0x72:
#line 23
      __nesc_result = SerialResetP__SerialPacketInfo__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x40617b68, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 538 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialResetP__sendAck__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialResetP__sendAck);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 75 "/opt/tinyos/tos/interfaces/Send.nc"
inline static error_t SerialResetP__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(0x72, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 54 "/opt/tinyos/tos/platforms/ucmini/SerialResetP.nc"
static inline void SerialResetP__sendAck__runTask(void )
{
  uint8_t *p = (uint8_t *)SerialResetP__sendMsg;

  p[0] = 'Z';
  p[1] = 'B';
  p[2] = 'P';

  if (SerialResetP__Send__send(SerialResetP__sendMsg, 3) != SUCCESS) {
    SerialResetP__sendAck__postTask();
    }
}

# 222 "BaseStationP.nc"
static inline void BaseStationP__UartSend__sendDone(am_id_t id, message_t *msg, error_t error)
#line 222
{
  if (error != SUCCESS) {
    BaseStationP__failBlink();
    }
  else {
#line 226
    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
      if (msg == BaseStationP__uartQueue[BaseStationP__uartOut]) 
        {
          if (++BaseStationP__uartOut >= BaseStationP__UART_QUEUE_LEN) {
            BaseStationP__uartOut = 0;
            }
#line 231
          if (BaseStationP__uartFull) {
            BaseStationP__uartFull = FALSE;
            }
        }
#line 234
      __nesc_atomic_end(__nesc_atomic); }
    }
#line 234
  BaseStationP__uartSendTask__postTask();
}

# 110 "/opt/tinyos/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x40549e00, message_t * msg, error_t error){
#line 110
  BaseStationP__UartSend__sendDone(arg_0x40549e00, msg, error);
#line 110
}
#line 110
# 101 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 66 "/opt/tinyos/tos/platforms/ucmini/SerialResetP.nc"
static inline void SerialResetP__Send__sendDone(message_t *msg, error_t error)
{
  if (error != SUCCESS) {
    SerialResetP__sendAck__postTask();
    }
  else {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {

           __asm volatile ("in __tmp_reg__,__SREG__""\n\t""cli""\n\t""wdr""\n\t""sts %0,%1""\n\t""out __SREG__,__tmp_reg__""\n\t""sts %0,%2""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((1 << 4) | (1 << 3)), "r"((uint8_t )(((1 & 0x08 ? 1 << 5 : 0x00) | (1 << 3)) | (1 & 0x07))) : "r0");
          while (1) ;
        }
#line 78
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 376 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x40617068, message_t * msg, error_t error){
#line 100
  switch (arg_0x40617068) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    case 0x72:
#line 100
      SerialResetP__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x40617068, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 101 "BaseStationP.nc"
static inline void BaseStationP__dropBlink(void )
#line 101
{
  BaseStationP__Leds__led2Toggle();
}

#line 237
static inline message_t *BaseStationP__UartReceive__receive(am_id_t id, message_t *msg, 
void *payload, 
uint8_t len)
#line 239
{
  message_t *ret = msg;
  bool reflectToken = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (!BaseStationP__radioFull) 
      {
        reflectToken = TRUE;
        ret = BaseStationP__radioQueue[BaseStationP__radioIn];
        BaseStationP__radioQueue[BaseStationP__radioIn] = msg;
        if (++BaseStationP__radioIn >= BaseStationP__RADIO_QUEUE_LEN) {
          BaseStationP__radioIn = 0;
          }
#line 251
        if (BaseStationP__radioIn == BaseStationP__radioOut) {
          BaseStationP__radioFull = TRUE;
          }
        if (!BaseStationP__radioBusy) 
          {
            BaseStationP__radioSendTask__postTask();
            BaseStationP__radioBusy = TRUE;
          }
      }
    else {
      BaseStationP__dropBlink();
      }
#line 262
    __nesc_atomic_end(__nesc_atomic); }
  if (reflectToken) {
    }


  return ret;
}

# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x405517d8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = BaseStationP__UartReceive__receive(arg_0x405517d8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 82 "/opt/tinyos/tos/platforms/ucmini/SerialResetP.nc"
static inline message_t *SerialResetP__Receive__receive(message_t *msg, void *payload, uint8_t len)
{
  uint8_t *p = (uint8_t *)msg;

  if (len == 3 && p[0] == 'R' && p[1] == 'S' && p[2] == 'T') 
    {
      SerialResetP__sendMsg = msg;
      SerialResetP__sendAck__postTask();
    }

  return msg;
}

# 371 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x4061b9f8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x4061b9f8) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 0x72:
#line 78
      __nesc_result = SerialResetP__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x4061b9f8, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/opt/tinyos/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 105 "/opt/tinyos/tos/platforms/ucmini/SerialResetP.nc"
static inline uint8_t SerialResetP__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen)
{
  return dataLinkLen;
}

# 365 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x40617b68, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x40617b68) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    case 0x72:
#line 31
      __nesc_result = SerialResetP__SerialPacketInfo__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x40617b68, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 142 "BaseStationP.nc"
static inline void BaseStationP__SerialControl__stopDone(error_t error)
#line 142
{
}

# 130 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t SerialAutoControlP__SplitControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = SerialP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 73 "/opt/tinyos/tos/platforms/ucmini/SerialAutoControlP.nc"
static inline void SerialAutoControlP__SplitControl__stopDone(error_t err)
#line 73
{
  if (err != SUCCESS) {
    SerialAutoControlP__SplitControl__stop();
    }
}

# 138 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SerialAutoControlP__SplitControl__stopDone(error);
#line 138
  BaseStationP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 52 "/opt/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 170 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 170
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 158 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 158
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 136 "BaseStationP.nc"
static inline void BaseStationP__SerialControl__startDone(error_t error)
#line 136
{
  if (error == SUCCESS) {
      BaseStationP__uartFull = FALSE;
    }
}

# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t SerialAutoControlP__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 68 "/opt/tinyos/tos/platforms/ucmini/SerialAutoControlP.nc"
static inline void SerialAutoControlP__SplitControl__startDone(error_t err)
#line 68
{
  if (err != SUCCESS) {
    SerialAutoControlP__SplitControl__start();
    }
}

# 113 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SerialAutoControlP__SplitControl__startDone(error);
#line 113
  BaseStationP__SerialControl__startDone(error);
#line 113
}
#line 113
# 187 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 187
{
  * (volatile uint8_t *)0xC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 164 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 164
{
  * (volatile uint8_t *)0xC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 152 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 152
{
  * (volatile uint8_t *)0xC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 77 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/opt/tinyos/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialAutoControlP__turnOff__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialAutoControlP__turnOff);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos/tos/platforms/ucmini/SerialAutoControlP.nc"
static inline void SerialAutoControlP__turnOff__runTask(void )
#line 57
{
  error_t err = SerialAutoControlP__SplitControl__stop();

#line 59
  if (err != SUCCESS && err != EALREADY) {
    SerialAutoControlP__turnOff__postTask();
    }
  else 
#line 61
    {
    }
}

# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t SerialAutoControlP__turnOn__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialAutoControlP__turnOn);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/opt/tinyos/tos/platforms/ucmini/SerialAutoControlP.nc"
static inline void SerialAutoControlP__turnOn__runTask(void )
#line 46
{
  error_t err = SerialAutoControlP__SplitControl__start();

#line 48
  if (err != SUCCESS && err != EALREADY) {
    SerialAutoControlP__turnOn__postTask();
    }
  else 
#line 50
    {
    }
}

# 53 "/opt/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t SerialAutoControlP__ControlInt__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(5);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53

inline static error_t SerialAutoControlP__ControlInt__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(5);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 49 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline bool /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(uint8_t bit)
#line 49
{
#line 49
  return (* (volatile uint8_t * )35U & (1 << bit)) != 0;
}

# 43 "/opt/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool SerialAutoControlP__ControlPin__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(5);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 79 "/opt/tinyos/tos/platforms/ucmini/SerialAutoControlP.nc"
static inline error_t SerialAutoControlP__SoftwareInit__init(void )
#line 79
{
  if (SerialAutoControlP__ControlPin__get()) {
      SerialAutoControlP__isSerialOn = TRUE;
      SerialAutoControlP__turnOn__postTask();
      SerialAutoControlP__ControlInt__enableFallingEdge();
    }
  else 
#line 84
    {
      SerialAutoControlP__isSerialOn = FALSE;
      SerialAutoControlP__turnOff__postTask();
      SerialAutoControlP__ControlInt__enableRisingEdge();
    }
  return SUCCESS;
}

# 216 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (115200L == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (115200L == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 172 "/opt/tinyos/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 172
{
  return MeasureClockC__cycles / (baudrate >> 6) - 1;
}

# 60 "/opt/tinyos/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 226 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 226
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(115200L);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0xC9 = ctrl.flat;

  return SUCCESS;
}

#line 132
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 132
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(115200L);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0xC1 = ctrl.flat;

  return SUCCESS;
}

# 55 "/opt/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 63 "/opt/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "/opt/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 302 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 55 "/opt/tinyos/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 421 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 3))
     | ((mode & 0x1) << 3);
  }
}

# 70 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static void RFA1DriverLayerP__SfdCapture__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__SfdCapture__setMode(mode);
#line 70
}
#line 70
# 175 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__SoftwareInit__init(void )
{
  * (volatile uint8_t *)0x149 = RFA1_CCA_THRES_VALUE;
#line 198
  * (volatile uint8_t *)0x145 = (RFA1_PA_BUF_LT | RFA1_PA_LT) | ((0 & RFA1_TX_PWR_MASK) << 0);

  RFA1DriverLayerP__txPower = 0 & RFA1_TX_PWR_MASK;
  RFA1DriverLayerP__channel = 11 & RFA1_CHANNEL_MASK;
  * (volatile uint8_t *)0x144 |= 1 << 5;
  * (volatile uint8_t *)0x148 = RFA1_CCA_MODE_VALUE | RFA1DriverLayerP__channel;

  * (volatile uint8_t *)0x139 |= 1 << 1;

  RFA1DriverLayerP__SfdCapture__setMode(ATMRFA1_CAPSC_ON);

  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;

  return SUCCESS;
}

# 62 "/opt/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__SoftwareInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialAutoControlP__SoftwareInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 105 "/opt/tinyos/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei");}

# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t BaseStationP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 67 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t TaskletC__tasklet__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(TaskletC__tasklet);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 52 "/opt/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__schedule(void )
{
  TaskletC__tasklet__postTask();
}

# 59 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RFA1DriverLayerP__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 334 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void )
{
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 338
    if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 340
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TURNON;
  RFA1DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "/opt/tinyos/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RFA1DriverLayerP__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 76 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 104 "/opt/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t BaseStationP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 109 "BaseStationP.nc"
static inline void BaseStationP__Boot__booted(void )
#line 109
{
  uint8_t i;

  for (i = 0; i < BaseStationP__UART_QUEUE_LEN; i++) 
    BaseStationP__uartQueue[i] = &BaseStationP__uartQueueBufs[i];
  BaseStationP__uartIn = BaseStationP__uartOut = 0;
  BaseStationP__uartBusy = FALSE;
  BaseStationP__uartFull = TRUE;

  for (i = 0; i < BaseStationP__RADIO_QUEUE_LEN; i++) 
    BaseStationP__radioQueue[i] = &BaseStationP__radioQueueBufs[i];
  BaseStationP__radioIn = BaseStationP__radioOut = 0;
  BaseStationP__radioBusy = FALSE;
  BaseStationP__radioFull = TRUE;

  if (BaseStationP__RadioControl__start() == EALREADY) {
    BaseStationP__radioFull = FALSE;
    }
#line 126
  if (BaseStationP__SerialControl__start() == EALREADY) {
    BaseStationP__uartFull = FALSE;
    }
}

# 60 "/opt/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  BaseStationP__Boot__booted();
#line 60
}
#line 60
# 157 "/opt/tinyos/tos/chips/atm128rfa1/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
}

# 322 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void )
#line 322
{
  if (((* (volatile uint8_t *)0xC1 & (1 << 3) || * (volatile uint8_t *)0xC1 & (1 << 4)) || * (volatile uint8_t *)0xC9 & (1 << 3)) || * (volatile uint8_t *)0xC9 & (1 << 4)) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 326
    return ATM128_POWER_DOWN;
    }
}

# 364 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void )
{

  if (* (volatile uint8_t *)0x6F & ((((1 << 1) | (1 << 2)) | (1 << 3)) | (1 << 5))) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 370
    return ATM128_POWER_DOWN;
    }
}

# 437 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void )
{


  if (* (volatile uint8_t *)0xDC & (1 << 5)) {
    return ATM128_POWER_SAVE;
    }
  else {
#line 444
    return ATM128_POWER_DOWN;
    }
}

# 758 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void )
{
  if ((* (volatile uint8_t *)0x14E & (1 << 7)) != 0) {
    return ATM128_POWER_EXT_STANDBY;
    }
  else {
#line 763
    return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1TimerMacP__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1Timer1P__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtm128UartP__McuPowerOverride__lowestState());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/opt/tinyos/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
{
  if (McuSleepC__powerState < 0) {
      McuSleepC__powerState = McuSleepC__McuPowerOverride__lowestState();
      * (volatile uint8_t *)(0x33 + 0x20) = (* (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | __extension__ ({
#line 73
        uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[McuSleepC__powerState];
#line 73
        uint8_t __result;

#line 73
         __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
      }
      );
    }




  * (volatile uint8_t *)(0x33 + 0x20) |= 1 << 0;

   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "/opt/tinyos/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 58 "/opt/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__m_upper++;
    if ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__2__m_upper & /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__Counter__overflow();
      }
  }
}

# 58 "/opt/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void ){
#line 82
  /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void )
{
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow();
}

# 125 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void )
#line 125
{
}

# 49 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 49
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow();
#line 49
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow();
#line 49
}
#line 49
# 59 "/opt/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 65 "/opt/tinyos/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
      }
  }
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "/opt/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired(void ){
#line 78
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 63 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired();
}

# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareA__fired(void ){
#line 48
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired();
#line 48
}
#line 48
# 263 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void )
#line 263
{
}

# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareB__default__fired();
#line 48
}
#line 48
# 343 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void )
#line 343
{
}

# 48 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareC__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareC__default__fired();
#line 48
}
#line 48
# 93 "/opt/tinyos/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
__attribute((signal))   void __vector_9(void )
#line 93
{
  HplAtmegaPinChange0C__HplAtmegaPinChange__fired();
}

# 92 "/opt/tinyos/tos/platforms/ucmini/SerialAutoControlP.nc"
static void SerialAutoControlP__ControlInt__fired(void )
#line 92
{
  bool pinState = SerialAutoControlP__ControlPin__get();

#line 94
  if (pinState && !SerialAutoControlP__isSerialOn) {
      SerialAutoControlP__isSerialOn = TRUE;
      SerialAutoControlP__turnOn__postTask();
      SerialAutoControlP__ControlInt__enableFallingEdge();
    }
  else {
#line 98
    if (!pinState && SerialAutoControlP__isSerialOn) {
        SerialAutoControlP__isSerialOn = FALSE;
        SerialAutoControlP__turnOff__postTask();
        SerialAutoControlP__ControlInt__enableRisingEdge();
      }
    }
}

# 170 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(uint8_t pin)
#line 67
{
  /* atomic removed: atomic calls only */
#line 68
  {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling |= 1 << pin;
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(/*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask() | (1 << pin));
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable();
  }
  return SUCCESS;
}

#line 58
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(uint8_t pin)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling &= ~(1 << pin);
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(/*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask() | (1 << pin));
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable();
  }
  return SUCCESS;
}

# 216 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 216
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0xC6);
    }
}

# 412 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "/opt/tinyos/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 518 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

#line 357
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

#line 359
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 359
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
      SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 364
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 367
        SerialP__offPending = FALSE;
#line 367
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 370
        SerialP__offPending = TRUE;
#line 370
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 222 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 222
{
  HplAtm128UartP__HplUart0__txDone();
}

#line 209
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 210
    {
      * (volatile uint8_t *)0xC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 213
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/opt/tinyos/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 106 "/opt/tinyos/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 313 "/opt/tinyos/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 313
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0xCE);
    }
}

#line 318
__attribute((interrupt))   void __vector_38(void )
#line 318
{
  HplAtm128UartP__HplUart1__txDone();
}

# 73 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
__attribute((signal))   void __vector_20(void )
#line 73
{
#line 73
  HplAtmRfa1Timer1P__Timer__overflow();
}

#line 164
__attribute((signal))   void __vector_17(void )
#line 164
{
#line 164
  HplAtmRfa1Timer1P__CompareA__fired();
}








__attribute((signal))   void __vector_18(void )
#line 174
{
#line 174
  HplAtmRfa1Timer1P__CompareB__fired();
}








__attribute((signal))   void __vector_19(void )
#line 184
{
#line 184
  HplAtmRfa1Timer1P__CompareC__fired();
}

#line 324
__attribute((signal))   void __vector_16(void )
#line 324
{
#line 324
  HplAtmRfa1Timer1P__Capture__fired();
}

# 63 "/opt/tinyos/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/opt/tinyos/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403f9e80){
#line 75
  switch (arg_0x403f9e80) {
#line 75
    case SerialAutoControlP__turnOn:
#line 75
      SerialAutoControlP__turnOn__runTask();
#line 75
      break;
#line 75
    case SerialAutoControlP__turnOff:
#line 75
      SerialAutoControlP__turnOff__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case SerialResetP__sendAck:
#line 75
      SerialResetP__sendAck__runTask();
#line 75
      break;
#line 75
    case BaseStationP__uartSendTask:
#line 75
      BaseStationP__uartSendTask__runTask();
#line 75
      break;
#line 75
    case BaseStationP__radioSendTask:
#line 75
      BaseStationP__radioSendTask__runTask();
#line 75
      break;
#line 75
    case TaskletC__tasklet:
#line 75
      TaskletC__tasklet__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403f9e80);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 69 "/opt/tinyos/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 102 "/opt/tinyos/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type ndt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type n = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get();


      n += 2 > ndt ? 2 : ndt;

      /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(n);
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static uint32_t HplAtmRfa1TimerMacP__Counter__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time.ll = * (volatile uint8_t *)0xE1;
      time.lh = * (volatile uint8_t *)0xE2;
      time.hl = * (volatile uint8_t *)0xE3;
      time.hh = * (volatile uint8_t *)0xE4;
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }

  return time.full;
}

# 84 "/opt/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 97 "/opt/tinyos/tos/system/SimpleArbiterP.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 154 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 77 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static ieee154_simple_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

# 106 "/opt/tinyos/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 161 "BaseStationP.nc"
static message_t *BaseStationP__receive(message_t *msg, void *payload, uint8_t len)
#line 161
{
  message_t *ret = msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 164
    {
      if (!BaseStationP__uartFull) 
        {
          ret = BaseStationP__uartQueue[BaseStationP__uartIn];
          BaseStationP__uartQueue[BaseStationP__uartIn] = msg;

          BaseStationP__uartIn = (BaseStationP__uartIn + 1) % BaseStationP__UART_QUEUE_LEN;

          if (BaseStationP__uartIn == BaseStationP__uartOut) {
            BaseStationP__uartFull = TRUE;
            }
          if (!BaseStationP__uartBusy) 
            {
              BaseStationP__uartSendTask__postTask();
              BaseStationP__uartBusy = TRUE;
            }
        }
      else {
        BaseStationP__dropBlink();
        }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}

# 93 "/opt/tinyos/tos/system/ActiveMessageAddressC.nc"
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    myGroup = ActiveMessageAddressC__group;
#line 95
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 132 "/opt/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 132 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

# 217 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 65 "/opt/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 73 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 100 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RFA1DriverLayerP__RadioPacket__metadataLength(msg);
}

#line 95
static void *RFA1DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__RadioPacket__headerLength(msg);
}

# 205 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 779 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;

  __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

#line 355
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg)
{
  uint32_t time;
  uint8_t length;
  uint8_t *data;
  void *timesync;

  if ((RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE || RFA1DriverLayerP__state != RFA1DriverLayerP__STATE_RX_ON) || RFA1DriverLayerP__radioIrq) {
    return EBUSY;
    }
  length = (RFA1DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RFA1DriverLayerP__PacketTransmitPower__get(msg) : 0) & RFA1_TX_PWR_MASK;

  if (length != RFA1DriverLayerP__txPower) 
    {
      RFA1DriverLayerP__txPower = length;
      * (volatile uint8_t *)0x145 = (RFA1_PA_BUF_LT | RFA1_PA_LT) | (RFA1DriverLayerP__txPower << 0);
    }


  if (
#line 374
  RFA1DriverLayerP__Config__requiresRssiCca(msg)
   && (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) > ((RFA1DriverLayerP__rssiClear + RFA1DriverLayerP__rssiBusy) >> 3)) {
    return EBUSY;
    }
  * (volatile uint8_t *)0x142 = 9;


  timesync = RFA1DriverLayerP__PacketTimeSyncOffset__isSet(msg) ? (void *)msg + RFA1DriverLayerP__PacketTimeSyncOffset__get(msg) : 0;

  data = RFA1DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata);


  * (volatile uint8_t *)0x180 = length;


  length -= 2;


  if ((* (volatile uint8_t *)0x141 & RFA1_TRX_STATUS_MASK) != 9) 
    {
      for (; 0; ) ;

      * (volatile uint8_t *)0x142 = 6;
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time = RFA1DriverLayerP__LocalTime__get();
      * (volatile uint8_t *)0x142 = 2;
    }
#line 405
    __nesc_atomic_end(__nesc_atomic); }

  time += RFA1DriverLayerP__TX_SFD_DELAY;

  for (; 0; ) ;


  if (timesync != 0) {
    __nesc_hton_int32((* (timesync_relative_t *)timesync).nxdata, __nesc_ntoh_uint32((* (timesync_absolute_t *)timesync).nxdata) - time);
    }

  memcpy((void *)(& * (volatile uint8_t *)0x180 + 1), data, length);


  * (volatile uint8_t *)0x142 = 6;

  if (timesync != 0) {
    __nesc_hton_uint32((* (timesync_absolute_t *)timesync).nxdata, __nesc_ntoh_int32((* (timesync_relative_t *)timesync).nxdata) + time);
    }
  RFA1DriverLayerP__PacketTimeStamp__set(msg, time);
#line 441
  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TRANSMIT;

  return SUCCESS;
}

# 61 "/opt/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 252 "/opt/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 172 "/opt/tinyos/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 97 "/opt/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{

  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

# 111 "/opt/tinyos/tos/lib/serial/SerialDispatcherP.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 374 "/opt/tinyos/tos/lib/serial/SerialP.nc"
static error_t SerialP__SplitControl__stop(void )
#line 374
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 375
    {
      if (SerialP__rxState == SerialP__RXSTATE_NOSYNC) {
          SerialP__rxState = SerialP__RXSTATE_INACTIVE;
        }
    }
#line 379
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 380
    {
      if (SerialP__txState == SerialP__TXSTATE_IDLE) {
          SerialP__txState = SerialP__TXSTATE_INACTIVE;
        }
    }
#line 384
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__testOff();
  return SUCCESS;
}

#line 348
static error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 108 "/opt/tinyos/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_68(void )
#line 108
{
#line 108
  HplAtmRfa1TimerMacP__Counter__overflow();
}

#line 185
__attribute((signal))   void __vector_65(void )
#line 185
{
#line 185
  HplAtmRfa1TimerMacP__CompareA__fired();
}

#line 265
__attribute((signal))   void __vector_66(void )
#line 265
{
#line 265
  HplAtmRfa1TimerMacP__CompareB__fired();
}

#line 345
__attribute((signal))   void __vector_67(void )
#line 345
{
#line 345
  HplAtmRfa1TimerMacP__CompareC__fired();
}

# 667 "/opt/tinyos/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
__attribute((interrupt))   void __vector_63(void )
#line 667
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 670
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_TX_END;
#line 670
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_60(void )
#line 677
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 680
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_END;
#line 680
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}





__attribute((interrupt))   void __vector_59(void )
#line 688
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 691
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_START;
#line 691
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_57(void )
#line 698
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 701
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_PLL_LOCK;
#line 701
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_64(void )
#line 708
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 711
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_AWAKE;
#line 711
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_61(void )
#line 718
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 721
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_CCA_ED_DONE;
#line 721
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}

