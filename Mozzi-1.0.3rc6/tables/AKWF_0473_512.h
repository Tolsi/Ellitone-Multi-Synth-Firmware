#ifndef AKWF_0473_512_H_
#define AKWF_0473_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0473_512_NUM_CELLS 512
#define AKWF_0473_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0473_512_DATA [] = {0,
0, 1, 1, 1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 1, 0, -1, 1, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 1, 0, 0, 0, -1, 0,
-1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1,
0, 0, -1, 0, 1, 0, 0, 0, 1, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, -1, -1,
1, -1, 0, 0, 1, 0, 0, 0, 0, 0, 4, 11, 18, 25, 27, 26, 28, 30, 31, 34, 35, 38,
38, 40, 41, 43, 45, 46, 46, 48, 49, 50, 50, 51, 51, 51, 52, 53, 53, 52, 52, 54,
52, 53, 53, 54, 53, 53, 53, 53, 53, 52, 52, 53, 52, 52, 51, 51, 51, 50, 51, 50,
49, 51, 50, 50, 48, 49, 48, 49, 49, 48, 49, 48, 47, 48, 47, 47, 47, 47, 47, 48,
47, 47, 47, 46, 47, 47, 47, 47, 47, 47, 47, 46, 46, 47, 46, 47, 46, 48, 47, 48,
47, 48, 48, 48, 48, 48, 49, 48, 49, 50, 49, 50, 50, 50, 51, 51, 52, 53, 53, 53,
53, 54, 55, 55, 56, 57, 56, 57, 57, 58, 58, 59, 59, 61, 61, 61, 62, 63, 60, 47,
14, -20, -39, -36, -26, -21, -29, -44, -52, -53, -51, -50, -54, -56, -59, -61,
-62, -63, -64, -64, -64, -65, -65, -65, -64, -64, -64, -63, -63, -62, -61, -61,
-61, -59, -60, -58, -57, -56, -56, -55, -54, -54, -53, -53, -52, -51, -52, -50,
-50, -50, -49, -48, -49, -48, -48, -48, -46, -47, -46, -47, -46, -46, -46, -46,
-46, -46, -45, -46, -46, -46, -46, -46, -46, -46, -46, -46, -46, -47, -47, -47,
-47, -48, -47, -47, -48, -48, -48, -48, -48, -49, -48, -48, -49, -49, -48, -48,
-48, -49, -49, -49, -49, -49, -49, -48, -49, -48, -49, -48, -48, -48, -47, -47,
-47, -47, -47, -46, -45, -44, -43, -42, -42, -41, -41, -38, -37, -36, -34, -32,
-29, -25, -21, -15, -9, -4, -1, -3, -4, -4, -3, -3, 0, 1, 1, 2, 2, 3, 4, 4, 4,
5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1,
2, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
-1, 0, -1, 0, -1, 0, 0, 0, -1, -1, 0, 1, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, 0, 0, -1, 0, 0, 0, 1, 1, -1, 0, 1, 0, -1, };

#endif /* AKWF_0473_512_H_ */