#ifndef AKWF_0919_512_H_
#define AKWF_0919_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0919_512_NUM_CELLS 512
#define AKWF_0919_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0919_512_DATA [] = {1,
4, 8, 11, 15, 18, 23, 25, 29, 32, 36, 40, 43, 47, 50, 55, 57, 60, 60, 63, 64,
68, 70, 72, 74, 77, 78, 80, 82, 84, 86, 88, 89, 90, 92, 93, 95, 96, 98, 98, 99,
101, 101, 102, 103, 105, 105, 105, 106, 106, 108, 107, 109, 108, 108, 109, 109,
110, 110, 109, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 105, 105,
105, 103, 103, 102, 101, 101, 101, 100, 99, 99, 98, 97, 96, 95, 94, 93, 92, 90,
90, 88, 88, 85, 85, 82, 82, 80, 77, 76, 74, 73, 71, 69, 67, 66, 63, 61, 58, 56,
53, 51, 50, 47, 44, 42, 39, 37, 35, 33, 29, 27, 25, 22, 19, 18, 15, 13, 10, 7,
5, 1, -2, -4, -7, -10, -12, -15, -17, -21, -24, -26, -30, -31, -34, -37, -40,
-43, -45, -48, -52, -55, -58, -60, -62, -66, -68, -70, -73, -77, -79, -82, -84,
-87, -89, -91, -94, -96, -99, -102, -105, -106, -109, -111, -113, -116, -118,
-121, -122, -125, -125, -123, -123, -124, -126, -127, -127, -127, -128, -128,
-127, -127, -128, -128, -127, -126, -125, -125, -125, -124, -123, -122, -121,
-120, -120, -118, -117, -117, -114, -113, -112, -110, -109, -107, -105, -104,
-101, -101, -99, -96, -94, -92, -89, -87, -86, -84, -81, -79, -77, -75, -72,
-70, -67, -66, -63, -60, -58, -55, -53, -50, -49, -46, -43, -41, -39, -35, -30,
-26, -23, -20, -18, -13, -10, -7, -3, 1, 4, 8, 12, 15, 18, 22, 26, 28, 32, 37,
40, 44, 47, 51, 54, 57, 60, 60, 62, 65, 67, 70, 72, 75, 77, 79, 79, 82, 84, 85,
87, 88, 90, 92, 93, 95, 96, 96, 97, 98, 100, 101, 102, 103, 104, 104, 106, 105,
106, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108,
108, 108, 108, 107, 107, 106, 105, 105, 104, 104, 102, 102, 102, 102, 100, 100,
98, 98, 98, 96, 96, 94, 94, 93, 91, 90, 89, 87, 86, 84, 83, 83, 81, 79, 77, 75,
73, 73, 71, 69, 68, 65, 64, 60, 56, 55, 53, 51, 48, 47, 44, 41, 39, 36, 34, 31,
29, 26, 24, 22, 19, 17, 14, 12, 10, 6, 4, 1, -2, -5, -8, -11, -12, -16, -19,
-21, -24, -27, -30, -33, -35, -38, -41, -44, -47, -50, -52, -54, -57, -60, -63,
-66, -69, -72, -74, -76, -79, -82, -85, -87, -89, -92, -94, -98, -100, -102,
-105, -107, -110, -112, -115, -116, -119, -120, -124, -125, -123, -122, -124,
-124, -126, -126, -128, -128, -128, -128, -128, -128, -128, -126, -127, -126,
-126, -125, -125, -124, -122, -121, -121, -120, -118, -117, -116, -115, -113,
-112, -111, -110, -108, -106, -105, -102, -102, -99, -97, -94, -94, -91, -89,
-86, -85, -83, -79, -78, -75, -73, -70, -68, -66, -64, -61, -59, -56, -54, -52,
-49, -47, -43, -42, -40, -37, -34, -29, -24, -21, -18, -14, -12, -8, -6, -1, };

#endif /* AKWF_0919_512_H_ */
