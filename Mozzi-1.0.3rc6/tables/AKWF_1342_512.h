#ifndef AKWF_1342_512_H_
#define AKWF_1342_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1342_512_NUM_CELLS 512
#define AKWF_1342_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1342_512_DATA [] = {0,
1, 4, 5, 8, 10, 11, 13, 15, 17, 19, 21, 22, 24, 27, 28, 30, 32, 33, 36, 37, 39,
40, 43, 44, 47, 48, 50, 52, 53, 54, 57, 58, 60, 61, 63, 65, 66, 68, 69, 71, 73,
74, 76, 78, 79, 81, 82, 83, 85, 85, 87, 88, 90, 91, 93, 94, 95, 97, 97, 98, 100,
102, 102, 104, 104, 106, 107, 108, 110, 110, 110, 112, 112, 113, 114, 115, 116,
117, 118, 119, 118, 120, 120, 120, 121, 122, 123, 123, 124, 124, 125, 126, 126,
126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 126, 127, 126, 126, 125, 125, 125, 124, 123, 123,
123, 122, 122, 121, 120, 120, 120, 118, 118, 117, 116, 116, 114, 113, 113, 112,
112, 110, 109, 108, 107, 107, 106, 103, 102, 101, 101, 99, 98, 96, 96, 94, 92,
92, 90, 88, 88, 86, 84, 83, 83, 80, 79, 77, 77, 74, 73, 72, 70, 68, 67, 65, 64,
62, 60, 58, 57, 55, 54, 52, 49, 48, 46, 44, 42, 41, 40, 37, 35, 34, 33, 30, 28,
26, 24, 23, 22, 19, 18, 16, 13, 12, 9, 8, 7, 4, 2, 0, -2, -3, -6, -7, -8, -12,
-12, -15, -17, -18, -20, -22, -24, -27, -29, -29, -32, -34, -36, -37, -39, -40,
-43, -43, -46, -48, -50, -51, -53, -54, -56, -58, -59, -61, -63, -64, -66, -67,
-69, -70, -72, -74, -76, -77, -78, -80, -81, -83, -84, -86, -88, -88, -90, -91,
-93, -94, -95, -97, -97, -99, -101, -101, -102, -103, -105, -105, -107, -108,
-109, -110, -111, -111, -113, -113, -114, -115, -116, -116, -118, -118, -119,
-120, -121, -121, -122, -122, -124, -123, -124, -124, -125, -125, -125, -125,
-126, -126, -126, -127, -127, -128, -128, -127, -127, -128, -128, -128, -128,
-128, -128, -127, -128, -127, -127, -127, -127, -128, -127, -126, -126, -126,
-125, -126, -124, -124, -124, -122, -123, -122, -121, -120, -120, -119, -118,
-118, -117, -116, -116, -114, -114, -113, -113, -111, -110, -109, -109, -107,
-105, -106, -103, -103, -102, -101, -99, -99, -97, -96, -95, -93, -92, -91, -90,
-88, -86, -85, -84, -82, -81, -79, -78, -76, -75, -73, -72, -70, -68, -67, -66,
-64, -62, -59, -59, -57, -55, -53, -51, -50, -48, -46, -45, -43, -41, -39, -38,
-36, -35, -33, -30, -28, -27, -25, -23, -21, -19, -17, -16, -14, -12, -10, -8,
-7, -4, -3, 0, 2, 3, 5, 7, 9, 11, 12, 15, 16, 18, 20, 23, 23, 25, 28, 29, 31,
34, 35, 37, 38, 40, 42, 44, 45, 48, 49, 51, 53, 55, 56, 58, 59, 62, 63, 64, 66,
67, 69, 70, 73, 74, 75, 77, 78, 80, 81, 83, 85, 86, 87, 89, 89, 91, 93, 94, 95,
95, 97, 98, 99, 100, 102, 103, 105, 106, 106, 108, 109, 110, 110, 112, 112, 114,
114, 117, 115, 118, 116, 121, 115, 125, 113, 127, 78, };

#endif /* AKWF_1342_512_H_ */
