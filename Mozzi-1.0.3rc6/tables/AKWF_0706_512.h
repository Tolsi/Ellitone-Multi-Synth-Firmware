#ifndef AKWF_0706_512_H_
#define AKWF_0706_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0706_512_NUM_CELLS 512
#define AKWF_0706_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0706_512_DATA [] = {2,
6, 8, 12, 14, 17, 21, 24, 26, 30, 32, 35, 38, 42, 44, 47, 51, 53, 56, 60, 62,
65, 68, 71, 75, 76, 82, 82, 87, 89, 93, 94, 100, 101, 106, 105, 113, 111, 120,
116, 127, 112, 27, 37, 37, 42, 45, 48, 50, 53, 57, 59, 63, 66, 69, 71, 76, 77,
81, 83, 88, 87, 99, 15, -4, 9, 5, 14, 12, 20, 20, 25, 25, 30, 31, 38, 37, 44,
43, 50, 48, 58, 50, 72, 13, -42, -22, -29, -18, -21, -13, -14, -8, -7, -2, 0, 3,
6, 9, 12, 14, 18, 21, 25, 26, 31, 31, 38, 38, 44, 43, 50, 49, 57, 55, 61, 61,
68, 67, 74, 73, 79, 79, 85, 86, 88, 98, -73, -104, -84, -92, -79, -85, -74, -79,
-70, -72, -63, -66, -59, -58, -53, -52, -47, -46, -42, -39, -36, -33, -31, -27,
-25, -21, -19, -14, -13, -9, -6, -2, -1, 3, 5, 9, 13, 16, 17, 21, 23, 27, 30,
33, 36, 38, 42, 45, 48, 50, 55, 56, 61, 62, 68, 68, 73, 75, 80, 80, 85, 86, 91,
94, 7, -1, 9, 7, 14, 14, 20, 19, 25, 26, 31, 31, 37, 38, 44, 44, 50, 49, 58, 52,
71, 2, -41, -21, -29, -17, -21, -13, -14, -7, -8, -2, 0, 4, 5, 10, 12, 15, 18,
22, 24, 27, 31, 32, 37, 38, 44, 44, 50, 50, 57, 55, 63, 61, 69, 66, 75, 72, 81,
78, 88, 84, 95, 86, -88, -97, -85, -90, -80, -83, -75, -78, -69, -71, -64, -65,
-58, -58, -52, -52, -46, -46, -41, -40, -35, -33, -30, -27, -23, -21, -18, -14,
-12, -9, -6, -2, -1, 6, 4, 12, 10, 19, 14, 25, 17, 38, -5, -73, -54, -59, -52,
-52, -46, -46, -41, -40, -35, -34, -28, -27, -23, -22, -16, -16, -11, -10, -2,
-9, -96, -93, -89, -87, -82, -81, -77, -76, -70, -70, -64, -64, -58, -58, -53,
-50, -47, -46, -41, -40, -35, -34, -30, -27, -23, -20, -18, -14, -11, -8, -6,
-2, 0, 5, 5, 10, 12, 16, 18, 22, 24, 27, 31, 33, 37, 39, 43, 45, 50, 50, 56, 55,
63, 61, 69, 66, 75, 71, 83, 76, 90, 81, 101, 71, -101, -91, -90, -87, -82, -83,
-75, -76, -69, -71, -63, -65, -57, -58, -52, -52, -46, -46, -41, -40, -34, -34,
-29, -27, -23, -21, -17, -15, -11, -8, -7, -2, -1, 4, 4, 11, 11, 18, 15, 26, 18,
40, -14, -74, -53, -60, -49, -53, -45, -45, -40, -39, -34, -34, -28, -28, -21,
-22, -16, -17, -8, -12, 1, -17, -101, -89, -91, -85, -83, -80, -77, -74, -72,
-68, -65, -62, -60, -56, -54, -51, -47, -45, -40, -40, -30, -114, -128, -119,
-122, -114, -115, -109, -108, -102, -103, -97, -96, -92, -90, -85, -84, -79,
-77, -74, -71, -67, -65, -62, -59, -56, -53, -50, -47, -45, -42, -38, -35, -32,
-30, -27, -23, -21, -17, -14, -11, -8, -6, -2, 1, };

#endif /* AKWF_0706_512_H_ */
