#ifndef AKWF_0253_512_H_
#define AKWF_0253_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0253_512_NUM_CELLS 512
#define AKWF_0253_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0253_512_DATA [] = {1,
5, 8, 12, 15, 18, 21, 23, 27, 30, 33, 36, 38, 41, 43, 46, 49, 52, 53, 56, 57,
60, 62, 65, 67, 68, 69, 72, 73, 76, 77, 79, 80, 81, 82, 85, 85, 87, 89, 90, 91,
92, 94, 94, 96, 97, 98, 99, 99, 100, 102, 103, 103, 104, 105, 107, 108, 109,
110, 111, 111, 113, 113, 114, 115, 116, 116, 117, 119, 119, 118, 119, 119, 121,
121, 121, 122, 122, 121, 121, 121, 121, 121, 122, 121, 121, 121, 121, 120, 120,
120, 120, 120, 119, 118, 120, 119, 118, 119, 118, 118, 117, 118, 116, 116, 117,
116, 116, 117, 115, 115, 115, 115, 114, 115, 115, 115, 115, 115, 115, 115, 115,
116, 116, 115, 116, 116, 117, 117, 116, 117, 117, 116, 116, 117, 117, 117, 117,
116, 116, 116, 114, 114, 113, 113, 112, 112, 110, 109, 109, 107, 105, 105, 103,
103, 102, 100, 99, 98, 96, 95, 94, 93, 91, 89, 88, 87, 85, 84, 83, 81, 79, 78,
76, 74, 73, 72, 71, 69, 68, 66, 64, 64, 62, 61, 60, 59, 57, 56, 55, 54, 54, 52,
51, 49, 49, 48, 47, 46, 44, 43, 42, 41, 40, 39, 37, 37, 36, 34, 33, 31, 29, 29,
27, 26, 25, 24, 24, 22, 20, 19, 18, 18, 17, 15, 14, 13, 12, 11, 12, 11, 10, 9,
8, 8, 8, 7, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 8, 7, 7,
8, 8, 9, 8, 8, 9, 8, 8, 8, 8, 7, 8, 7, 7, 6, 5, 5, 3, 3, 2, 1, 1, -1, -2, -3,
-4, -5, -6, -8, -8, -11, -11, -13, -13, -16, -16, -18, -19, -20, -23, -24, -26,
-27, -28, -30, -31, -32, -34, -35, -37, -38, -40, -40, -42, -42, -44, -45, -47,
-48, -49, -50, -52, -53, -55, -56, -57, -58, -60, -61, -62, -64, -65, -67, -69,
-70, -72, -73, -75, -77, -78, -79, -81, -84, -85, -86, -88, -90, -91, -93, -95,
-95, -96, -99, -99, -102, -103, -103, -105, -106, -108, -109, -109, -110, -112,
-112, -113, -114, -115, -115, -116, -117, -118, -117, -118, -118, -119, -118,
-119, -119, -119, -119, -119, -119, -119, -119, -119, -119, -118, -119, -118,
-119, -118, -119, -118, -119, -119, -119, -119, -120, -120, -120, -119, -120,
-120, -121, -121, -121, -122, -122, -123, -123, -124, -124, -124, -125, -124,
-125, -126, -125, -126, -126, -126, -127, -127, -127, -128, -128, -128, -128,
-128, -127, -128, -128, -127, -128, -127, -128, -127, -127, -126, -125, -124,
-123, -123, -123, -122, -121, -120, -120, -119, -118, -116, -115, -115, -114,
-113, -111, -110, -110, -108, -108, -107, -105, -104, -103, -102, -100, -99,
-98, -97, -96, -94, -93, -92, -91, -89, -88, -86, -84, -83, -81, -79, -77, -76,
-73, -71, -69, -67, -65, -63, -60, -58, -56, -54, -50, -49, -46, -43, -40, -37,
-35, -32, -28, -26, -22, -19, -16, -13, -10, -7, -3, 0, };

#endif /* AKWF_0253_512_H_ */