#ifndef AKWF_0912_512_H_
#define AKWF_0912_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0912_512_NUM_CELLS 512
#define AKWF_0912_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0912_512_DATA [] = {3,
8, 13, 17, 22, 26, 31, 35, 39, 43, 47, 51, 55, 58, 62, 65, 69, 71, 74, 77, 79,
82, 85, 87, 89, 91, 92, 94, 95, 96, 97, 97, 97, 98, 98, 98, 97, 96, 95, 94, 93,
91, 89, 87, 85, 83, 81, 79, 76, 73, 71, 69, 65, 63, 61, 57, 55, 52, 49, 47, 43,
41, 38, 37, 34, 31, 30, 28, 26, 24, 23, 20, 18, 18, 16, 15, 14, 14, 12, 12, 10,
11, 9, 10, 10, 8, 9, 9, 10, 10, 9, 10, 11, 10, 11, 11, 12, 13, 13, 16, 15, 17,
18, 20, 21, 22, 24, 25, 26, 28, 30, 32, 33, 34, 35, 37, 38, 40, 41, 43, 43, 44,
46, 47, 47, 48, 49, 49, 50, 49, 50, 50, 50, 50, 50, 48, 49, 48, 47, 46, 45, 43,
43, 41, 39, 37, 35, 32, 29, 26, 23, 20, 16, 14, 10, 7, 3, -2, -4, -8, -13, -15,
-20, -23, -26, -28, -31, -34, -36, -38, -40, -42, -43, -45, -46, -47, -47, -48,
-48, -49, -48, -49, -50, -50, -51, -51, -52, -53, -54, -55, -57, -58, -59, -62,
-64, -66, -69, -71, -74, -77, -80, -84, -87, -91, -93, -98, -101, -105, -108,
-111, -114, -117, -119, -122, -124, -125, -127, -128, -128, -128, -128, -127,
-127, -125, -125, -123, -120, -118, -117, -114, -111, -108, -104, -100, -96,
-93, -89, -84, -81, -77, -72, -68, -62, -58, -54, -49, -44, -39, -34, -29, -25,
-20, -15, -10, -5, 0, 5, 9, 14, 18, 23, 27, 31, 36, 39, 44, 47, 52, 55, 59, 61,
65, 69, 72, 75, 78, 80, 82, 85, 88, 89, 91, 92, 93, 95, 96, 97, 97, 98, 98, 98,
97, 97, 97, 96, 93, 93, 91, 89, 87, 85, 83, 81, 78, 76, 73, 70, 68, 64, 63, 60,
57, 55, 52, 49, 46, 44, 41, 38, 36, 33, 31, 29, 27, 25, 23, 22, 20, 19, 17, 16,
15, 14, 13, 13, 11, 10, 11, 10, 10, 10, 9, 8, 9, 9, 9, 10, 9, 11, 10, 11, 12,
12, 14, 14, 14, 16, 17, 19, 20, 20, 22, 25, 25, 27, 29, 31, 31, 33, 35, 37, 37,
38, 40, 41, 42, 44, 45, 46, 46, 48, 48, 49, 49, 50, 50, 50, 49, 51, 49, 50, 49,
49, 48, 46, 46, 44, 43, 42, 39, 38, 36, 34, 32, 29, 25, 23, 19, 17, 13, 9, 5, 1,
-3, -6, -10, -13, -17, -19, -23, -27, -30, -32, -35, -36, -39, -40, -42, -44,
-46, -46, -46, -48, -48, -49, -48, -49, -49, -50, -49, -51, -51, -52, -53, -54,
-55, -57, -59, -60, -63, -64, -67, -68, -72, -75, -78, -81, -85, -89, -91, -96,
-99, -102, -105, -109, -112, -115, -117, -120, -122, -124, -125, -127, -128,
-128, -128, -128, -126, -127, -126, -124, -123, -120, -118, -116, -113, -110,
-107, -103, -101, -97, -92, -88, -84, -81, -76, -72, -67, -62, -58, -52, -48,
-43, -38, -33, -29, -23, -18, -14, -9, -4, 0, };

#endif /* AKWF_0912_512_H_ */