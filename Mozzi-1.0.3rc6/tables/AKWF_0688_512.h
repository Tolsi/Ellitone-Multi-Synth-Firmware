#ifndef AKWF_0688_512_H_
#define AKWF_0688_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0688_512_NUM_CELLS 512
#define AKWF_0688_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0688_512_DATA [] = {1,
2, 4, 6, 7, 9, 11, 11, 13, 15, 17, 17, 19, 20, 22, 24, 26, 26, 28, 31, 32, 34,
35, 36, 37, 38, 40, 42, 44, 45, 47, 48, 49, 51, 52, 53, 56, 56, 58, 60, 62, 62,
64, 66, 67, 68, 70, 72, 73, 74, 76, 76, 78, 78, 78, 78, 78, 79, 78, 79, 80, 78,
79, 79, 78, 78, 78, 78, 78, 77, 77, 77, 78, 77, 78, 77, 77, 78, 78, 78, 78, 79,
79, 80, 80, 81, 81, 81, 82, 83, 84, 84, 86, 86, 88, 88, 89, 90, 91, 91, 93, 94,
95, 96, 97, 98, 100, 101, 101, 103, 104, 105, 106, 107, 109, 110, 111, 113, 114,
115, 116, 117, 119, 120, 122, 123, 123, 125, 127, 127, 127, 127, 127, 126, 123,
121, 119, 115, 113, 109, 105, 103, 98, 94, 90, 87, 82, 79, 74, 71, 67, 63, 59,
56, 52, 49, 47, 43, 41, 38, 35, 33, 32, 29, 27, 25, 24, 22, 21, 20, 19, 18, 18,
16, 16, 15, 14, 15, 14, 14, 13, 14, 14, 14, 14, 15, 14, 14, 15, 16, 17, 16, 18,
18, 19, 19, 20, 22, 22, 22, 24, 25, 26, 26, 28, 28, 30, 30, 31, 32, 33, 35, 36,
37, 38, 38, 39, 39, 39, 40, 40, 39, 39, 39, 39, 39, 39, 38, 38, 38, 38, 37, 37,
37, 37, 37, 37, 36, 37, 36, 36, 36, 37, 37, 36, 37, 37, 38, 38, 39, 38, 40, 39,
41, 41, 42, 43, 42, 44, 44, 45, 46, 47, 48, 48, 49, 51, 52, 53, 53, 54, 56, 56,
57, 59, 59, 60, 62, 63, 64, 66, 67, 67, 69, 70, 72, 73, 73, 75, 76, 76, 78, 79,
80, 82, 83, 85, 85, 86, 85, 86, 84, 82, 79, 76, 72, 69, 65, 61, 57, 53, 48, 43,
39, 33, 29, 23, 19, 13, 11, 2, 5, -36, -67, -63, -66, -60, -60, -55, -53, -48,
-45, -43, -43, -43, -44, -45, -45, -46, -46, -47, -46, -45, -44, -44, -42, -41,
-39, -38, -35, -34, -32, -30, -27, -25, -23, -20, -18, -16, -14, -12, -9, -7,
-5, -2, 0, 3, 4, 3, 1, -4, -8, -14, -19, -26, -32, -39, -46, -52, -59, -64, -70,
-75, -80, -84, -89, -92, -95, -98, -101, -102, -104, -106, -108, -109, -109,
-109, -110, -111, -111, -111, -109, -109, -108, -109, -107, -107, -106, -104,
-104, -103, -102, -99, -98, -96, -96, -94, -93, -92, -90, -88, -88, -86, -86,
-85, -85, -85, -85, -85, -85, -85, -86, -86, -87, -87, -88, -87, -88, -87, -88,
-87, -87, -88, -88, -87, -87, -86, -86, -85, -85, -84, -83, -83, -81, -80, -79,
-79, -78, -77, -76, -75, -74, -72, -70, -69, -68, -67, -66, -64, -64, -61, -61,
-58, -57, -56, -54, -53, -51, -50, -49, -47, -46, -45, -43, -41, -40, -38, -37,
-36, -33, -32, -31, -29, -27, -25, -25, -22, -22, -20, -18, -16, -16, -13, -12,
-11, -10, -8, -5, -4, -3, -1, 0, };

#endif /* AKWF_0688_512_H_ */
