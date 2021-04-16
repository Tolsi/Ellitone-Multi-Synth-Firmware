#ifndef AKWF_0029_512_H_
#define AKWF_0029_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0029_512_NUM_CELLS 512
#define AKWF_0029_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0029_512_DATA [] = {1,
1, 2, 2, 2, 4, 3, 4, 4, 4, 3, 4, 4, 3, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 0, 0, 1,
0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
-1, -1, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
0, 1, 0, 0, -1, -1, 1, 1, 1, 0, 0, 0, 0, 1, -14, -38, 5, 33, 4, 1, 8, 11, 11,
10, 6, 5, 2, 0, -3, -7, -9, -11, -12, -11, -9, -8, -5, -3, -1, 1, 3, 4, 5, 6, 5,
6, 5, 5, 3, 2, 1, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, -1, -1,
0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 2, 18,
19, 2, 5, 10, 6, 4, 4, 2, 3, 3, 3, 4, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, -1, -2,
-2, -2, -2, -3, -1, -4, -2, -3, -2, -3, -1, -4, -2, -3, -1, -3, -1, -3, 0, -3,
0, -4, 0, -4, 59, 127, -14, -46, 21, -4, -9, -22, -17, -18, -11, -10, -5, -4, 1,
3, 7, 8, 8, 7, 5, 3, 1, -2, -5, -6, -8, -9, -10, -9, -10, -9, -9, -8, -6, -5,
-4, -4, -3, -2, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -2, -1, -1,
-2, -1, -1, -1, -2, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0,
0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0,
0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1,
-21, -35, 17, 27, 0, 4, 8, 11, 11, 8, 6, 5, 2, -1, -4, -7, -9, -10, -12, -11,
-10, -7, -5, -2, 1, 2, 4, 5, 6, 6, 6, 5, 5, 3, 3, 2, 1, 0, -1, 0, -1, -1, -2,
-2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0,
0, 0, 1, 1, -1, 0, 0, -1, 0, 1, -4, -20, -15, -1, -9, -8, -5, -4, -2, -3, -3,
-3, -3, -4, -4, -2, -2, -2, -1, -1, 0, 0, 0, 0, 2, 1, 2, 2, 2, 2, 2, 2, 3, 2, 3,
3, 2, 2, 3, 2, 2, 1, 3, 2, 2, 1, 2, 1, 2, 1, 2, -5, -9, -27, -64, -43, -11, -6,
-6, -3, 0, 1, 3, 4, 8, 10, 13, 14, 17, 17, 15, 14, 11, 9, 6, 3, 2, 1, -1, -2,
-2, -2, -2, -1, 0, };

#endif /* AKWF_0029_512_H_ */
