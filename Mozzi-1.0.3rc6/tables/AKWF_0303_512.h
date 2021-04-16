#ifndef AKWF_0303_512_H_
#define AKWF_0303_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0303_512_NUM_CELLS 512
#define AKWF_0303_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0303_512_DATA [] =
{-14, -125, -94, -66, -43, -18, 0, 21, 32, 48, 54, 63, 64, 69, 65, 65, 60, 56,
48, 42, 34, 26, 17, 9, 1, -6, -14, -20, -26, -31, -36, -39, -41, -43, -44, -44,
-42, -42, -40, -38, -35, -31, -28, -24, -20, -15, -11, -8, -4, 0, 4, 6, 10, 12,
15, 16, 17, 19, 20, 21, 20, 21, 20, 19, 19, 18, 16, 15, 13, 12, 10, 9, 7, 6, 4,
3, 1, 0, -2, -3, -4, -4, -5, -6, -6, -7, -8, -7, -8, -8, -7, -7, -6, -6, -5, -5,
-5, -4, -4, -4, -3, -3, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2,
2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, -1, 1, 0, 0, 0, -1, 0, -1, 0, -1, -1,
0, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, 1, 0, 0, 0, -1, 0, -1, 1, 0, 0, 0, 0,
1, -1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1,
1, 0, 0, 0, 1, 1, 0, -1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, -1, 0,
0, 1, -1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0,
-1, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
-1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0,
0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, -1, 1, -1, 0, 0, 0,
0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
1, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0,
0, 0, 1, 0, -1, 1, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0,
0, 1, 1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 1, 0, 0, 1, 0, 0, 1, -1, 0, 0, 0, 0, -1, 0,
1, 0, -1, 0, 1, 0, 0, -1, };

#endif /* AKWF_0303_512_H_ */
