#ifndef AKWF_0955_512_H_
#define AKWF_0955_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0955_512_NUM_CELLS 512
#define AKWF_0955_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0955_512_DATA [] = {1,
6, 10, 15, 20, 24, 30, 35, 40, 48, 53, 61, 67, 74, 80, 89, 95, 104, 112, 123,
123, 98, 104, 105, 93, 86, 81, 80, 76, 73, 67, 62, 54, 46, 39, 31, 22, 15, 6,
-3, -9, -17, -25, -32, -39, -45, -52, -58, -64, -69, -75, -80, -86, -77, -89,
-87, -52, -60, -56, -40, -31, -22, -16, -4, -35, -37, 10, -6, -15, -3, 5, 9, 10,
11, 11, 12, 12, 12, 11, 12, 10, 11, 9, 9, 8, 7, 6, 5, 6, 5, 5, 5, 5, 5, 5, 6, 5,
6, 6, 7, 8, 8, 9, 10, 10, 10, 11, 12, 12, 13, 12, 12, 13, 13, 13, 13, 12, 13,
12, 12, 12, 11, 10, 9, 9, 9, 8, 7, 7, 6, 5, 5, 3, 3, 2, 1, 1, 0, -1, -1, -2, -2,
-2, -4, -4, -4, -5, -5, -6, -6, -5, -6, -6, -6, -6, -5, -6, -5, -5, -5, -4, -3,
-3, -3, -3, -1, -1, -1, 0, 1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 7, 9, 9, 9, 10, 11, 12,
11, 11, 12, 12, 12, 12, 12, 13, 13, 12, 12, 11, 11, 10, 10, 9, 8, 7, 6, 4, 3, 2,
0, -1, -3, -5, -7, -9, -11, -13, -14, -17, -18, -18, -21, -21, -22, -24, -24,
-26, -26, -27, -27, -27, -28, -28, -28, -28, -27, -27, -26, -27, -26, -25, -25,
-24, -24, -22, -22, -21, -19, -19, -18, -17, -16, -15, -15, -13, -13, -12, -11,
-9, -8, -8, -7, -6, -5, -4, -4, -3, -3, -1, -1, 0, 0, 0, 1, 2, 2, 3, 3, 3, 3, 4,
4, 5, 4, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 3, 2, 1, 1, 1, 0, -1, -1,
-2, -2, -3, -4, -4, -5, -5, -6, -7, -7, -8, -9, -9, -9, -11, -11, -12, -11, -13,
-12, -13, -14, -14, -15, -16, -16, -16, -16, -17, -17, -18, -18, -18, -18, -18,
-19, -19, -18, -18, -19, -19, -19, -19, -19, -19, -19, -18, -18, -18, -17, -17,
-16, -16, -15, -15, -15, -15, -15, -13, -13, -13, -11, -10, -10, -9, -9, -8, -7,
-6, -5, -4, -5, -3, -3, -2, -1, 1, 2, 2, 3, 5, 5, 5, 6, 7, 8, 8, 9, 10, 11, 12,
13, 13, 13, 15, 15, 16, 17, 17, 17, 18, 19, 19, 18, 20, 20, 20, 20, 20, 20, 21,
21, 21, 21, 21, 20, 20, 20, 20, 20, 19, 18, 18, 18, 17, 17, 16, 15, 14, 13, 13,
12, 11, 9, 9, 7, 6, 5, 4, 4, 1, 0, -2, -2, -3, -6, -7, -8, -9, -10, -12, -13,
-15, -17, -18, -19, -21, -22, -23, -25, -27, -28, -29, -30, -32, -32, -34, -34,
-36, -36, -39, -38, -39, -40, -41, -42, -42, -43, -42, -42, -42, -43, -43, -42,
-42, -41, -40, -40, -39, -38, -36, -35, -33, -32, -30, -28, -25, -24, -21, -18,
-15, -12, -9, -1, -5, -2, };

#endif /* AKWF_0955_512_H_ */
