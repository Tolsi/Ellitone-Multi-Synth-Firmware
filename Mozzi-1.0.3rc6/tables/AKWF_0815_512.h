#ifndef AKWF_0815_512_H_
#define AKWF_0815_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0815_512_NUM_CELLS 512
#define AKWF_0815_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0815_512_DATA [] = {1,
9, 16, 22, 29, 34, 40, 46, 51, 57, 61, 66, 70, 74, 77, 81, 83, 86, 89, 92, 93,
96, 97, 99, 99, 99, 100, 100, 100, 100, 100, 100, 99, 97, 97, 96, 94, 93, 91,
90, 88, 86, 85, 82, 79, 77, 75, 73, 69, 67, 65, 63, 60, 58, 55, 53, 50, 47, 44,
42, 39, 37, 35, 32, 29, 27, 25, 21, 20, 18, 15, 13, 10, 9, 7, 5, 3, 2, -1, -1,
1, 8, 16, 26, 37, 49, 58, 69, 78, 86, 94, 99, 104, 107, 110, 111, 112, 111, 109,
106, 103, 98, 93, 87, 81, 74, 67, 61, 53, 46, 38, 30, 23, 15, 6, -1, -9, -17,
-23, -31, -37, -44, -51, -56, -63, -69, -73, -78, -84, -88, -92, -96, -99, -102,
-105, -107, -110, -112, -114, -116, -116, -118, -118, -118, -119, -118, -118,
-118, -118, -117, -115, -114, -112, -111, -109, -107, -105, -103, -101, -99,
-96, -93, -91, -89, -86, -83, -80, -77, -74, -71, -68, -66, -63, -59, -57, -53,
-50, -47, -45, -42, -39, -36, -33, -31, -29, -25, -23, -21, -18, -15, -13, -12,
-9, -7, -5, -3, -1, 2, 3, 4, 5, 7, 8, 9, 10, 10, 11, 11, 13, 14, 15, 15, 16, 17,
17, 18, 18, 19, 20, 20, 21, 21, 22, 22, 23, 24, 24, 25, 25, 25, 25, 26, 26, 26,
26, 27, 26, 27, 26, 27, 26, 27, 26, 26, 25, 26, 25, 25, 25, 25, 24, 24, 24, 23,
23, 23, 21, 21, 20, 20, 20, 19, 18, 18, 17, 17, 16, 16, 16, 15, 15, 15, 14, 13,
13, 11, 12, 11, 11, 10, 10, 10, 9, 8, 8, 7, 7, 7, 6, 5, 5, 5, 5, 4, 4, 3, 3, 3,
2, 2, 2, 2, 2, 1, 2, 1, 1, 0, 1, 0, 1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -2, -2, -2, -2, -2,
-1, -2, -1, -1, -2, -2, -1, -1, -1, -2, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0,
0, -1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1,
1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1,
1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1,
1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, -1,
0, -1, 0, 0, -5, -12, -21, -33, -44, -56, -67, -78, -88, -97, -106, -113, -118,
-122, -125, -127, -128, -128, -127, -125, -122, -118, -113, -108, -103, -96,
-91, -84, -77, -69, -62, -55, -47, -40, -33, -24, -16, -9, -2, };

#endif /* AKWF_0815_512_H_ */
