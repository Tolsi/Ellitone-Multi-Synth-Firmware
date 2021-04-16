#ifndef AKWF_0642_512_H_
#define AKWF_0642_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0642_512_NUM_CELLS 512
#define AKWF_0642_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0642_512_DATA [] = {3,
5, 8, 11, 13, 16, 18, 21, 23, 26, 28, 30, 32, 34, 36, 39, 41, 43, 46, 48, 51,
52, 54, 56, 58, 60, 62, 65, 66, 68, 69, 73, 74, 76, 78, 79, 81, 83, 84, 86, 88,
89, 90, 92, 93, 96, 97, 98, 100, 101, 102, 103, 105, 107, 107, 108, 109, 111,
112, 113, 113, 115, 116, 116, 118, 119, 119, 120, 120, 122, 122, 123, 123, 124,
124, 125, 125, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,
122, 119, 117, 113, 111, 109, 106, 104, 101, 99, 96, 95, 92, 91, 88, 86, 83, 82,
79, 77, 76, 73, 71, 69, 67, 65, 62, 61, 59, 56, 55, 54, 52, 51, 47, 47, 44, 44,
41, 41, 38, 37, 36, 34, 32, 30, 29, 28, 27, 25, 24, 22, 22, 20, 19, 18, 17, 16,
15, 14, 13, 12, 12, 9, 9, 9, 7, 6, 7, 5, 5, 4, 4, 4, 3, 2, 2, 1, 1, 2, 1, 1, 1,
-1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0, -1, 1, 0, 0, 0,
0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0,
0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 1, 0, 1, 0, 0, 0, -1, 1, 0,
0, -1, 0, 0, 0, 0, -3, -6, -8, -12, -14, -17, -19, -21, -24, -26, -28, -30, -33,
-35, -37, -40, -42, -44, -45, -48, -51, -53, -55, -57, -59, -60, -63, -65, -66,
-69, -71, -73, -75, -76, -78, -79, -81, -83, -84, -85, -88, -89, -91, -92, -94,
-95, -98, -99, -100, -102, -103, -104, -105, -106, -108, -109, -110, -112, -111,
-112, -114, -115, -116, -118, -118, -119, -119, -119, -121, -121, -122, -123,
-123, -124, -125, -125, -125, -126, -126, -127, -127, -127, -127, -128, -127,
-127, -128, -128, -127, -124, -121, -118, -116, -113, -110, -109, -106, -103,
-101, -100, -97, -94, -92, -89, -87, -85, -84, -82, -78, -76, -74, -72, -71,
-68, -66, -64, -63, -61, -59, -56, -55, -53, -52, -50, -48, -46, -44, -43, -41,
-40, -38, -36, -35, -33, -32, -31, -30, -27, -26, -25, -24, -23, -21, -20, -18,
-17, -16, -15, -15, -14, -13, -12, -11, -10, -9, -9, -8, -7, -5, -6, -4, -4, -4,
-3, -2, -3, -2, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 1, -1, -1, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, };

#endif /* AKWF_0642_512_H_ */