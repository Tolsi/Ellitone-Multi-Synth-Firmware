#ifndef AKWF_1091_512_H_
#define AKWF_1091_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1091_512_NUM_CELLS 512
#define AKWF_1091_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1091_512_DATA [] =
{-1, 4, 10, 14, 20, 24, 29, 34, 39, 44, 49, 54, 58, 63, 67, 71, 76, 80, 84, 88,
91, 95, 98, 102, 105, 108, 111, 112, 115, 118, 119, 122, 122, 124, 125, 127,
126, 127, 127, 127, 127, 127, 127, 127, 126, 124, 123, 121, 120, 118, 116, 114,
111, 108, 105, 102, 99, 95, 92, 89, 84, 81, 77, 73, 69, 64, 59, 55, 49, 45, 40,
34, 29, 23, 17, 12, 5, -1, -7, -14, -21, -28, -35, -42, -50, -56, -64, -69, -75,
-81, -86, -91, -93, -95, -94, -92, -86, -78, -68, -69, -86, -82, -73, -70, -61,
-55, -46, -37, -30, -22, -15, -8, -2, 3, 9, 13, 17, 18, 20, 22, 23, 22, 21, 21,
19, 16, 12, 9, 4, -1, -6, -12, -19, -25, -31, -38, -44, -51, -57, -62, -65, -66,
-68, -65, -58, -49, -36, -45, -72, -67, -57, -56, -47, -42, -34, -28, -20, -14,
-9, -3, 2, 7, 10, 13, 15, 17, 19, 18, 17, 18, 15, 13, 11, 7, 4, 0, -5, -10, -15,
-21, -26, -33, -38, -45, -51, -58, -64, -69, -74, -78, -82, -84, -84, -83, -80,
-75, -68, -63, -74, -77, -68, -63, -56, -48, -40, -31, -22, -13, -6, 4, 11, 18,
25, 32, 38, 43, 48, 52, 56, 60, 63, 65, 67, 68, 69, 69, 70, 70, 69, 68, 67, 66,
65, 64, 61, 59, 56, 54, 51, 50, 46, 44, 41, 38, 35, 32, 29, 27, 23, 21, 19, 16,
13, 11, 8, 6, 4, 2, 0, -2, -4, -5, -6, -8, -9, -10, -11, -12, -13, -13, -14,
-14, -14, -15, -14, -14, -13, -13, -12, -11, -10, -9, -7, -6, -3, -1, 1, 4, 5,
8, 11, 14, 18, 21, 25, 29, 34, 38, 42, 46, 51, 55, 60, 64, 68, 72, 75, 78, 79,
80, 78, 75, 70, 61, 51, 40, 48, 56, 45, 38, 31, 22, 13, 3, -5, -14, -22, -31,
-38, -45, -51, -56, -62, -65, -68, -70, -72, -73, -73, -71, -70, -67, -64, -61,
-56, -52, -45, -40, -34, -27, -22, -15, -11, -7, -6, -8, -13, -24, -40, -53,
-22, 9, -6, -10, -12, -20, -24, -32, -37, -43, -49, -52, -56, -58, -60, -60,
-60, -58, -55, -52, -47, -43, -38, -33, -26, -20, -15, -11, -8, -7, -10, -18,
-32, -54, -61, -15, 11, -9, -8, -13, -20, -25, -33, -37, -42, -46, -49, -51,
-52, -53, -51, -50, -48, -44, -40, -34, -29, -23, -17, -11, -6, -1, 2, 3, 1, -4,
-15, -31, -47, -16, 21, 6, 0, -1, -9, -14, -21, -26, -32, -35, -40, -44, -45,
-47, -48, -47, -46, -45, -42, -40, -35, -31, -26, -22, -15, -9, -2, 4, 10, 16,
22, 26, 31, 32, 33, 32, 28, 21, 12, 9, 32, 38, 27, 24, 17, 10, 3, -3, -10, -17,
-24, -30, -35, -40, -45, -48, -53, -56, -58, -58, -60, -60, -60, -60, -59, -58,
-57, -54, -53, -51, -47, -44, -40, -37, -33, -29, -25, -21, -17, -12, -7, -2, };

#endif /* AKWF_1091_512_H_ */