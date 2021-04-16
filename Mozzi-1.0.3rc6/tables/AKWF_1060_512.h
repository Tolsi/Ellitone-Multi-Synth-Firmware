#ifndef AKWF_1060_512_H_
#define AKWF_1060_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1060_512_NUM_CELLS 512
#define AKWF_1060_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1060_512_DATA [] = {1,
1, 2, 4, 4, 5, 6, 9, 9, 11, 13, 14, 16, 18, 18, 20, 21, 23, 25, 27, 28, 29, 31,
33, 35, 35, 37, 39, 40, 41, 43, 44, 46, 47, 47, 50, 51, 52, 53, 53, 55, 56, 56,
58, 58, 59, 60, 60, 62, 63, 62, 63, 64, 65, 65, 65, 66, 67, 68, 68, 69, 69, 70,
70, 71, 72, 72, 74, 75, 74, 76, 77, 77, 77, 78, 80, 80, 81, 82, 82, 84, 84, 85,
86, 87, 89, 90, 90, 92, 92, 93, 94, 95, 96, 96, 97, 98, 99, 100, 100, 101, 102,
103, 103, 104, 105, 105, 106, 106, 106, 107, 107, 108, 108, 109, 109, 109, 110,
109, 110, 110, 110, 111, 111, 111, 111, 112, 113, 113, 112, 113, 113, 114, 114,
114, 114, 115, 115, 116, 116, 117, 116, 118, 117, 117, 119, 119, 119, 120, 119,
121, 121, 121, 121, 122, 122, 124, 124, 124, 124, 125, 125, 124, 125, 126, 126,
125, 127, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127,
127, 127, 126, 126, 126, 127, 127, 125, 114, 90, 72, 73, 77, 77, 77, 80, 78, 71,
67, 64, 57, 51, 49, 48, 46, 44, 46, 46, 42, 40, 37, 35, 30, 28, 27, 26, 25, 25,
25, 23, 22, 21, 18, 16, 14, 14, 14, 12, 12, 12, 10, 9, 7, 7, 5, 4, 2, 2, 0, -1,
-1, -3, -4, -6, -7, -9, -11, -12, -13, -15, -17, -18, -19, -20, -22, -24, -26,
-26, -29, -30, -32, -34, -35, -36, -38, -40, -40, -41, -44, -44, -46, -47, -47,
-49, -50, -52, -53, -54, -54, -55, -55, -57, -58, -59, -59, -59, -60, -62, -62,
-63, -63, -63, -64, -64, -65, -66, -67, -67, -68, -68, -69, -69, -71, -71, -72,
-72, -73, -74, -74, -75, -77, -77, -78, -79, -80, -81, -81, -83, -83, -84, -85,
-86, -88, -88, -88, -90, -90, -91, -93, -93, -94, -95, -96, -97, -98, -99, -99,
-100, -101, -101, -102, -102, -102, -104, -104, -104, -104, -105, -106, -105,
-106, -106, -106, -107, -107, -107, -107, -108, -109, -109, -109, -110, -110,
-110, -110, -110, -111, -111, -112, -112, -112, -112, -113, -113, -114, -114,
-114, -114, -115, -116, -115, -116, -116, -117, -117, -119, -118, -120, -120,
-120, -121, -120, -121, -122, -122, -123, -122, -123, -124, -124, -125, -125,
-125, -126, -126, -125, -126, -126, -126, -127, -126, -127, -126, -127, -127,
-127, -128, -127, -126, -126, -127, -127, -127, -127, -126, -127, -126, -127,
-126, -126, -126, -126, -127, -126, -126, -126, -126, -126, -126, -126, -126,
-127, -126, -126, -126, -120, -101, -78, -69, -74, -75, -75, -78, -80, -74, -68,
-64, -59, -52, -48, -46, -45, -44, -43, -44, -43, -39, -38, -34, -30, -27, -26,
-25, -23, -22, -23, -22, -21, -19, -18, -16, -14, -12, -11, -10, -10, -9, -8,
-7, -6, -5, -4, -2, 0, };

#endif /* AKWF_1060_512_H_ */
