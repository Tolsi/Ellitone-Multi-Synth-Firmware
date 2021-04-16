#ifndef AKWF_0200_512_H_
#define AKWF_0200_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0200_512_NUM_CELLS 512
#define AKWF_0200_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0200_512_DATA [] = {0,
1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 9, 10, 10, 11, 12, 12, 13, 13, 13, 14, 15, 16, 17,
17, 18, 18, 19, 19, 21, 21, 20, 21, 22, 23, 22, 23, 23, 24, 24, 25, 25, 25, 26,
26, 26, 27, 27, 28, 28, 28, 28, 28, 29, 29, 30, 30, 30, 30, 31, 31, 32, 32, 31,
31, 33, 32, 33, 33, 32, 34, 35, 35, 35, 34, 34, 35, 36, 35, 36, 36, 36, 37, 37,
37, 38, 38, 38, 39, 39, 40, 39, 40, 41, 41, 41, 41, 42, 42, 43, 43, 42, 44, 45,
44, 45, 45, 46, 46, 47, 47, 48, 48, 49, 49, 49, 51, 51, 52, 53, 53, 54, 54, 55,
55, 57, 57, 57, 58, 59, 59, 60, 61, 61, 62, 63, 63, 64, 65, 66, 67, 67, 69, 68,
71, 70, 72, 71, 74, 73, 75, 75, 77, 77, 77, 79, 79, 81, 80, 83, 82, 86, 82, 88,
83, 90, 84, 92, 85, 94, 86, 97, 86, 101, 84, 107, 61, 49, 86, 35, 119, 33, 96,
52, 78, 87, 59, 93, 53, 89, 56, 79, 62, 73, 64, 68, 64, 65, 64, 64, 62, 61, 61,
59, 60, 57, 58, 56, 57, 53, 55, 52, 54, 51, 52, 49, 50, 47, 48, 46, 46, 45, 44,
43, 41, 39, 37, 36, 34, 33, 31, 30, 29, 28, 26, 26, 23, 22, 20, 19, 18, 17, 15,
13, 11, 10, 8, 8, 7, 6, 5, 5, 4, 3, 2, 1, 0, 0, -2, -3, -4, -5, -6, -6, -6, -8,
-8, -9, -10, -11, -12, -12, -13, -13, -14, -15, -16, -17, -17, -18, -19, -19,
-20, -21, -21, -22, -22, -23, -24, -24, -24, -25, -26, -26, -27, -28, -28, -29,
-30, -31, -31, -30, -32, -31, -32, -33, -33, -34, -34, -35, -35, -36, -37, -37,
-38, -37, -38, -40, -40, -40, -40, -41, -42, -43, -43, -43, -43, -43, -44, -44,
-44, -46, -45, -47, -46, -47, -47, -47, -47, -49, -48, -49, -50, -50, -50, -51,
-51, -50, -52, -51, -51, -52, -52, -53, -53, -53, -53, -54, -54, -53, -55, -54,
-54, -55, -55, -55, -55, -54, -56, -56, -55, -56, -56, -56, -57, -56, -56, -56,
-56, -56, -56, -57, -57, -57, -57, -57, -57, -57, -56, -56, -55, -57, -57, -56,
-55, -57, -57, -56, -56, -55, -56, -56, -55, -55, -55, -55, -55, -55, -55, -55,
-54, -54, -53, -54, -53, -53, -54, -53, -53, -53, -52, -52, -52, -52, -52, -52,
-52, -51, -50, -51, -50, -50, -50, -50, -49, -49, -48, -48, -48, -48, -48, -47,
-47, -47, -47, -47, -46, -46, -46, -45, -46, -45, -45, -43, -44, -44, -43, -42,
-42, -42, -42, -42, -41, -41, -41, -40, -40, -39, -39, -39, -38, -38, -38, -37,
-37, -36, -36, -35, -35, -34, -34, -32, -31, -30, -28, -28, -28, -26, -25, -24,
-24, -22, -21, -20, -18, -18, -16, -15, -14, -13, -12, -10, -9, -8, -6, -5, -3,
-3, -2, -2, 0, -1, };

#endif /* AKWF_0200_512_H_ */
