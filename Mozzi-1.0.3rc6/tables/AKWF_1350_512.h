#ifndef AKWF_1350_512_H_
#define AKWF_1350_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1350_512_NUM_CELLS 512
#define AKWF_1350_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1350_512_DATA [] = {0,
0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3,
3, 3, 4, 3, 4, 4, 4, 5, 6, 5, 6, 6, 6, 6, 7, 7, 8, 8, 8, 8, 8, 9, 9, 10, 10, 11,
10, 11, 12, 12, 13, 13, 13, 14, 15, 15, 15, 16, 15, 16, 16, 17, 17, 18, 19, 19,
19, 19, 20, 21, 21, 22, 22, 22, 23, 23, 23, 24, 25, 25, 25, 25, 26, 27, 27, 28,
28, 29, 28, 30, 30, 30, 31, 32, 31, 32, 32, 33, 33, 34, 34, 35, 35, 35, 36, 36,
36, 37, 38, 38, 38, 39, 39, 39, 39, 41, 40, 41, 42, 41, 42, 42, 43, 42, 43, 43,
43, 43, 44, 44, 45, 44, 45, 45, 45, 45, 46, 46, 47, 46, 46, 47, 47, 47, 48, 47,
48, 47, 48, 47, 48, 49, 48, 48, 49, 48, 48, 48, 48, 48, 48, 48, 49, 48, 48, 48,
48, 48, 48, 48, 48, 48, 48, 47, 47, 47, 47, 46, 46, 46, 45, 46, 45, 45, 44, 44,
44, 44, 43, 42, 42, 42, 42, 40, 41, 40, 39, 39, 38, 38, 38, 37, 37, 37, 35, 35,
34, 34, 33, 33, 32, 31, 30, 30, 30, 28, 28, 27, 26, 25, 25, 24, 23, 23, 22, 21,
20, 19, 19, 18, 16, 16, 15, 14, 13, 13, 11, 11, 9, 9, 8, 7, 6, 5, 5, 3, 1, 1,
-1, -2, -2, -4, -5, -6, -6, -8, -9, -10, -11, -12, -14, -14, -15, -16, -17, -19,
-20, -21, -22, -23, -24, -25, -26, -29, -29, -31, -31, -33, -34, -34, -37, -37,
-38, -39, -41, -43, -43, -44, -46, -48, -48, -49, -50, -51, -53, -54, -56, -56,
-58, -59, -59, -62, -63, -65, -65, -67, -68, -68, -70, -71, -72, -74, -75, -76,
-77, -78, -79, -80, -80, -81, -82, -83, -85, -86, -87, -88, -89, -90, -92, -92,
-94, -94, -96, -96, -97, -99, -99, -100, -101, -102, -103, -104, -105, -105,
-107, -107, -108, -108, -109, -111, -111, -112, -112, -113, -113, -114, -116,
-116, -117, -118, -118, -119, -119, -119, -120, -121, -121, -122, -122, -123,
-123, -124, -124, -124, -125, -125, -126, -126, -126, -126, -126, -127, -127,
-128, -127, -127, -127, -128, -128, -128, -127, -128, -128, -128, -128, -128,
-128, -127, -128, -127, -128, -127, -127, -127, -126, -126, -127, -125, -125,
-125, -124, -124, -124, -124, -123, -122, -122, -121, -121, -121, -120, -119,
-118, -118, -116, -115, -115, -114, -114, -113, -113, -111, -110, -110, -109,
-107, -107, -106, -105, -104, -103, -102, -101, -99, -98, -98, -96, -95, -94,
-93, -92, -90, -89, -88, -86, -85, -83, -82, -81, -80, -78, -76, -75, -73, -72,
-71, -69, -68, -66, -65, -62, -61, -60, -57, -57, -53, -52, -51, -48, -47, -46,
-44, -42, -39, -38, -35, -34, -33, -31, -29, -27, -25, -23, -22, -19, -18, -15,
-14, -12, -9, -7, -5, -4, 0, };

#endif /* AKWF_1350_512_H_ */