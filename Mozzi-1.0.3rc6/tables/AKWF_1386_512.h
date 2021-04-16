#ifndef AKWF_1386_512_H_
#define AKWF_1386_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1386_512_NUM_CELLS 512
#define AKWF_1386_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1386_512_DATA [] = {2,
5, 8, 11, 14, 18, 20, 23, 25, 29, 31, 34, 36, 39, 42, 44, 47, 49, 52, 55, 57,
60, 62, 64, 67, 69, 71, 73, 76, 78, 81, 83, 85, 87, 88, 91, 92, 94, 95, 96, 98,
100, 101, 102, 103, 104, 105, 106, 106, 107, 108, 109, 109, 109, 110, 109, 110,
109, 110, 109, 109, 109, 109, 107, 108, 107, 108, 106, 106, 105, 105, 103, 103,
102, 101, 100, 99, 98, 98, 97, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84,
83, 82, 81, 80, 79, 78, 77, 76, 74, 75, 73, 73, 72, 71, 70, 70, 69, 68, 68, 67,
66, 67, 65, 66, 64, 64, 63, 64, 62, 63, 62, 61, 61, 62, 61, 61, 61, 60, 60, 60,
60, 60, 60, 59, 58, 58, 59, 59, 58, 58, 59, 58, 58, 58, 58, 58, 58, 57, 58, 57,
57, 57, 58, 56, 57, 57, 57, 57, 57, 56, 56, 57, 58, 57, 56, 56, 57, 57, 57, 57,
56, 58, 55, 59, 48, 32, 36, 33, 34, 35, 35, 36, 37, 38, 40, 40, 41, 42, 43, 43,
44, 45, 46, 47, 48, 50, 50, 51, 52, 54, 54, 56, 56, 57, 59, 59, 60, 61, 63, 63,
63, 64, 65, 64, 64, 65, 66, 65, 66, 64, 66, 65, 64, 64, 62, 43, 43, 41, 40, 41,
40, 43, 37, 48, -23, -54, -46, -56, -49, -54, -48, -49, -44, -43, -38, -35, -30,
-28, -24, -20, -17, -14, -10, -6, -2, 2, 6, 9, 13, 17, 19, 23, 27, 30, 33, 35,
38, 41, 42, 44, 46, 46, 47, 47, 47, 46, 45, 44, 43, 40, 39, 37, 35, 32, 28, 25,
22, 18, 15, 10, 8, 3, -1, -5, -8, -13, -17, -21, -25, -29, -34, -38, -41, -45,
-48, -51, -55, -59, -62, -65, -69, -71, -74, -77, -80, -83, -85, -88, -90, -94,
-95, -97, -100, -101, -104, -106, -107, -109, -111, -113, -115, -116, -117,
-118, -119, -121, -122, -123, -124, -125, -125, -126, -127, -127, -127, -127,
-128, -128, -126, -127, -126, -125, -124, -125, -123, -122, -122, -120, -119,
-119, -118, -117, -116, -115, -115, -113, -112, -111, -110, -109, -108, -108,
-106, -106, -105, -104, -103, -103, -102, -101, -100, -100, -99, -98, -97, -97,
-97, -95, -94, -95, -94, -94, -93, -93, -92, -91, -92, -91, -90, -90, -89, -89,
-88, -89, -88, -88, -88, -87, -86, -86, -86, -86, -85, -84, -85, -83, -83, -82,
-83, -82, -82, -81, -80, -80, -80, -79, -79, -79, -78, -77, -77, -77, -76, -76,
-75, -76, -73, -74, -72, -74, -70, -74, -68, -75, -64, -81, -33, 35, 23, 36, 30,
34, 29, 29, 24, 23, 18, 16, 12, 8, 5, 1, -3, -7, -9, -14, -18, -24, -26, -33,
-34, -42, -42, -49, -49, -57, -57, -64, -64, -71, -70, -76, -74, -78, -77, -79,
-79, -78, -86, 11, -39, -59, -44, -55, -44, -51, -42, -46, -37, -39, -31, -31,
-24, -23, -17, -15, -10, -8, -3, 0, };

#endif /* AKWF_1386_512_H_ */