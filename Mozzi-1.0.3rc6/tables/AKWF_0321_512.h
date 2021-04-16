#ifndef AKWF_0321_512_H_
#define AKWF_0321_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0321_512_NUM_CELLS 512
#define AKWF_0321_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0321_512_DATA [] = {0,
3, 6, 9, 12, 15, 17, 20, 23, 26, 29, 32, 35, 37, 40, 43, 45, 49, 51, 54, 56, 59,
62, 64, 67, 70, 72, 74, 76, 79, 81, 84, 86, 88, 89, 91, 94, 96, 97, 98, 100,
101, 103, 104, 105, 106, 106, 107, 107, 108, 109, 109, 110, 110, 110, 110, 108,
108, 107, 106, 107, 105, 105, 104, 103, 103, 102, 100, 100, 99, 99, 98, 97, 97,
96, 95, 95, 95, 95, 95, 95, 95, 95, 95, 96, 95, 96, 96, 97, 97, 97, 99, 100,
100, 100, 100, 102, 102, 103, 104, 105, 106, 107, 107, 109, 108, 110, 110, 111,
113, 113, 113, 113, 114, 115, 114, 115, 115, 115, 116, 117, 116, 117, 117, 117,
117, 117, 117, 118, 117, 118, 117, 118, 118, 118, 119, 119, 119, 119, 120, 120,
120, 120, 122, 121, 122, 122, 122, 123, 123, 124, 124, 125, 124, 124, 125, 124,
124, 124, 122, 122, 122, 123, 122, 121, 121, 120, 119, 118, 117, 116, 115, 114,
112, 110, 108, 107, 105, 102, 99, 97, 95, 92, 89, 86, 83, 79, 76, 74, 71, 68,
64, 62, 58, 54, 52, 50, 46, 44, 42, 39, 37, 34, 32, 30, 27, 25, 24, 22, 20, 18,
17, 15, 13, 12, 10, 9, 9, 7, 6, 5, 4, 3, 4, 3, 3, 1, 1, 1, 0, 0, 0, 0, 0, -1, 0,
-1, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, 0, -1, -1,
-1, -2, -2, -2, -1, -3, -2, -2, -3, -2, -2, -3, -3, -3, -3, -3, -3, -4, -4, -4,
-5, -4, -5, -5, -5, -6, -7, -8, -8, -9, -10, -11, -12, -13, -13, -14, -17, -17,
-19, -21, -23, -23, -25, -27, -29, -31, -32, -34, -36, -39, -41, -43, -46, -48,
-51, -54, -57, -60, -62, -66, -68, -72, -74, -77, -79, -82, -85, -88, -91, -93,
-97, -99, -101, -103, -105, -107, -108, -111, -112, -113, -114, -116, -118,
-119, -120, -120, -121, -122, -124, -125, -124, -126, -126, -126, -127, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127,
-126, -126, -126, -127, -125, -126, -126, -127, -127, -127, -127, -127, -127,
-127, -127, -127, -126, -126, -126, -125, -125, -126, -125, -125, -124, -124,
-122, -122, -122, -121, -121, -119, -118, -118, -117, -116, -115, -114, -113,
-112, -111, -109, -109, -108, -106, -107, -106, -104, -103, -102, -102, -101,
-100, -100, -98, -99, -97, -97, -97, -97, -97, -95, -95, -95, -95, -95, -95,
-95, -95, -96, -95, -96, -96, -97, -97, -97, -97, -99, -99, -101, -101, -102,
-104, -103, -105, -106, -106, -107, -109, -109, -109, -110, -111, -111, -110,
-110, -110, -111, -111, -109, -109, -108, -107, -107, -105, -105, -102, -101,
-101, -99, -96, -95, -93, -92, -89, -87, -86, -82, -81, -78, -76, -74, -70, -68,
-65, -63, -59, -56, -54, -51, -47, -45, -42, -39, -35, -33, -30, -27, -22, -19,
-17, -13, -11, -7, -4, -1, };

#endif /* AKWF_0321_512_H_ */