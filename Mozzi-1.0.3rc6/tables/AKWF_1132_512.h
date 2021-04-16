#ifndef AKWF_1132_512_H_
#define AKWF_1132_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1132_512_NUM_CELLS 512
#define AKWF_1132_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1132_512_DATA [] = {1,
2, 2, 4, 5, 5, 6, 7, 6, 5, 6, 7, 9, 12, 13, 17, 19, 22, 25, 29, 31, 33, 34, 36,
38, 38, 40, 42, 43, 44, 46, 47, 49, 51, 52, 54, 55, 56, 57, 59, 61, 61, 63, 65,
66, 68, 68, 70, 71, 72, 74, 75, 76, 78, 79, 80, 81, 82, 84, 85, 85, 88, 88, 90,
90, 92, 93, 94, 95, 96, 97, 99, 99, 100, 101, 102, 102, 103, 105, 106, 106, 108,
108, 109, 110, 110, 111, 112, 113, 114, 114, 115, 116, 116, 117, 118, 118, 118,
119, 120, 121, 121, 122, 122, 123, 123, 123, 124, 124, 125, 125, 125, 125, 126,
126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 125, 126,
125, 125, 125, 124, 123, 123, 122, 122, 121, 121, 121, 120, 119, 119, 118, 117,
118, 117, 115, 115, 114, 113, 113, 112, 112, 110, 110, 108, 108, 108, 107, 105,
104, 103, 103, 102, 100, 100, 99, 98, 96, 95, 95, 94, 92, 91, 90, 89, 88, 87,
85, 84, 84, 82, 82, 80, 78, 81, 83, 88, 91, 94, 97, 99, 103, 106, 106, 101, 94,
88, 81, 76, 69, 65, 58, 54, 51, 50, 48, 47, 46, 44, 43, 41, 39, 38, 36, 35, 35,
32, 31, 29, 27, 25, 24, 23, 21, 20, 18, 17, 15, 14, 12, 10, 9, 7, 5, 4, 2, 2,
-1, -2, -3, -5, -5, -5, -6, -6, -6, -5, -6, -8, -10, -12, -14, -17, -20, -23,
-27, -29, -32, -33, -35, -35, -37, -39, -41, -43, -44, -45, -47, -48, -49, -50,
-52, -54, -55, -57, -57, -59, -61, -63, -63, -64, -66, -67, -69, -71, -72, -72,
-74, -75, -77, -78, -80, -80, -82, -83, -84, -84, -87, -87, -89, -89, -90, -92,
-93, -94, -95, -96, -96, -98, -99, -100, -101, -102, -103, -104, -104, -106,
-107, -108, -109, -109, -110, -110, -111, -113, -113, -114, -114, -115, -115,
-117, -117, -117, -119, -120, -119, -120, -121, -121, -122, -122, -122, -124,
-123, -124, -124, -124, -124, -125, -125, -126, -126, -127, -127, -127, -127,
-127, -128, -127, -128, -128, -127, -128, -127, -128, -127, -128, -128, -128,
-128, -128, -128, -128, -127, -127, -127, -126, -126, -127, -127, -125, -125,
-125, -124, -124, -124, -124, -123, -122, -122, -122, -121, -120, -120, -120,
-119, -119, -119, -117, -118, -116, -116, -115, -114, -114, -113, -112, -112,
-110, -110, -109, -108, -106, -107, -105, -104, -104, -102, -102, -101, -99,
-99, -98, -97, -96, -94, -94, -92, -91, -90, -89, -88, -87, -86, -84, -83, -83,
-80, -79, -79, -80, -85, -88, -92, -95, -97, -100, -103, -106, -104, -98, -92,
-85, -80, -74, -68, -63, -57, -53, -51, -50, -48, -46, -46, -45, -42, -40, -39,
-38, -37, -34, -33, -31, -30, -29, -27, -25, -24, -23, -21, -19, -18, -16, -15,
-13, -12, -11, -9, -7, -6, -4, -2, -1, };

#endif /* AKWF_1132_512_H_ */