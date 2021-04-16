#ifndef AKWF_0560_512_H_
#define AKWF_0560_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0560_512_NUM_CELLS 512
#define AKWF_0560_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0560_512_DATA [] =
{-1, 1, 1, 1, 2, 2, 2, 2, 3, 4, 4, 4, 4, 5, 5, 4, 6, 6, 7, 7, 6, 7, 7, 7, 8, 8,
8, 9, 9, 9, 10, 10, 11, 10, 10, 11, 11, 11, 12, 12, 12, 12, 13, 13, 14, 14, 14,
14, 15, 15, 15, 15, 16, 15, 16, 16, 16, 17, 17, 17, 17, 17, 18, 18, 19, 18, 19,
20, 18, 20, 19, 20, 21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 23,
23, 23, 24, 23, 23, 24, 24, 24, 25, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 26,
25, 26, 25, 26, 26, 26, 26, 27, 26, 27, 27, 27, 27, 27, 27, 28, 26, 27, 27, 27,
27, 27, 28, 27, 27, 28, 27, 28, 27, 29, 27, 28, 28, 28, 28, 28, 29, 28, 28, 29,
28, 28, 27, 28, 28, 29, 27, 28, 28, 28, 28, 27, 28, 27, 28, 28, 27, 29, 27, 28,
28, 28, 28, 28, 28, 27, 27, 27, 27, 27, 28, 28, 28, 27, 27, 27, 27, 27, 27, 27,
27, 27, 27, 26, 27, 26, 27, 27, 26, 26, 26, 25, 26, 26, 25, 26, 26, 26, 26, 25,
25, 25, 26, 25, 25, 24, 24, 25, 24, 25, 24, 24, 23, 24, 24, 24, 24, 23, 24, 23,
24, 23, 23, 23, 23, 22, 23, 22, 22, 22, 23, 22, 21, 22, 21, 21, 21, 20, 21, 20,
21, 20, 21, 20, 20, 19, 20, 20, 19, 19, 19, 19, 19, 19, 18, 18, 19, 18, 18, 19,
18, 17, 18, 18, 18, 18, 17, 18, 17, 17, 17, 17, 16, 16, 16, 16, 17, 15, 16, 16,
15, 15, 15, 16, 14, 15, 14, 15, 14, 14, 11, -2, -28, -62, -95, -120, -128, -123,
-104, -77, -50, -28, -16, -16, -25, -39, -55, -67, -72, -70, -59, -45, -28, -12,
0, 6, 6, 2, -4, -11, -17, -21, -21, -20, -17, -14, -12, -11, -13, -17, -22, -28,
-33, -39, -42, -43, -43, -43, -41, -41, -41, -43, -44, -45, -46, -48, -48, -48,
-48, -47, -45, -44, -42, -42, -41, -41, -40, -41, -40, -39, -39, -37, -37, -37,
-36, -34, -35, -34, -34, -34, -36, -35, -35, -36, -35, -36, -35, -36, -36, -37,
-36, -36, -37, -37, -37, -37, -38, -38, -38, -37, -38, -37, -37, -38, -38, -37,
-38, -38, -37, -37, -36, -37, -36, -36, -35, -35, -35, -34, -35, -33, -33, -34,
-33, -32, -31, -32, -31, -31, -30, -30, -29, -30, -29, -28, -27, -28, -27, -27,
-27, -26, -25, -26, -26, -25, -24, -24, -23, -23, -23, -23, -22, -22, -22, -21,
-21, -20, -20, -20, -19, -19, -19, -18, -18, -18, -16, -17, -16, -16, -16, -16,
-15, -14, -15, -14, -13, -13, -13, -13, -12, -12, -12, -11, -11, -10, -11, -10,
-9, -8, -9, -9, -9, -8, -8, -7, -6, -7, -6, -6, -5, -5, -4, -4, -4, -3, -3, -3,
-2, -2, -1, -2, -2, -1, 0, -1, 1, };

#endif /* AKWF_0560_512_H_ */