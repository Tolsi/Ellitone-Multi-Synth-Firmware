#ifndef AKWF_0806_512_H_
#define AKWF_0806_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0806_512_NUM_CELLS 512
#define AKWF_0806_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0806_512_DATA [] = {3,
10, 16, 21, 26, 30, 34, 37, 39, 41, 41, 43, 43, 44, 44, 44, 44, 44, 42, 41, 41,
40, 38, 37, 35, 34, 32, 31, 29, 27, 25, 24, 23, 21, 19, 17, 15, 14, 12, 11, 10,
8, 7, 5, 4, 3, 0, 0, -1, -2, -3, -5, -5, -6, -8, -9, -9, -9, -10, -11, -12, -13,
-13, -13, -13, -14, -15, -15, -15, -15, -14, -15, -15, -15, -15, -16, -15, -15,
-16, -15, -14, -15, -14, -15, -14, -14, -14, -14, -14, -13, -13, -12, -12, -12,
-11, -12, -11, -11, -10, -10, -10, -9, -9, -8, -9, -7, -7, -6, -7, -7, -5, -5,
-5, -5, -4, -5, -4, -4, -3, -3, -2, -2, -1, -1, -1, 0, 0, 1, 1, 2, 1, 1, 0, 1,
0, 1, 1, 3, 2, 2, 2, 3, 3, 4, 4, 3, 4, 4, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 4,
3, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 4, 3, 3, 3, 3, 3, 4, 3, 3, 2,
2, 3, 3, 2, 3, 3, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 0, 1, 2, 1, 1, 1, 0, 0,
0, 0, 1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, -1, -2, -1, -1, -1, 0, -1, -1, -2, -3, -8, -33, -81, -124,
-128, -104, -78, -62, -52, -43, -32, -23, -15, -6, 0, 6, 12, 17, 21, 24, 28, 30,
33, 35, 36, 38, 39, 39, 40, 39, 40, 40, 39, 39, 38, 38, 37, 36, 36, 34, 33, 32,
31, 30, 28, 28, 26, 24, 23, 22, 20, 19, 17, 16, 15, 13, 13, 11, 10, 9, 7, 7, 5,
4, 4, 3, 1, 1, 0, -1, -2, -4, -3, -5, -4, -5, -6, -6, -7, -8, -9, -9, -9, -10,
-10, -10, -10, -10, -11, -11, -12, -12, -10, -11, -11, -11, -12, -11, -12, -11,
-11, -11, -11, -10, -11, -11, -11, -10, -10, -10, -10, -10, -8, -3, -3, -6, -9,
-10, -9, -8, -8, -8, -8, -7, -7, -6, -7, -5, -6, -5, -6, -5, -5, -3, -4, -4, -4,
-3, -3, -2, -3, -2, -2, -1, -2, -2, -1, -1, -1, 0, -1, 1, 0, 0, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 1, 2, 1, 1, 3, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1,
0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -2, -15, -49, -92, -115, -111, -89, -68, -52,
-41, -30, -19, -10, -2, };

#endif /* AKWF_0806_512_H_ */