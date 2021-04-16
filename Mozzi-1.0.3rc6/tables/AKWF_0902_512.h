#ifndef AKWF_0902_512_H_
#define AKWF_0902_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0902_512_NUM_CELLS 512
#define AKWF_0902_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0902_512_DATA [] = {1,
2, 3, 4, 5, 6, 8, 9, 9, 10, 12, 13, 14, 16, 17, 18, 19, 21, 21, 23, 24, 25, 26,
27, 28, 29, 30, 31, 32, 34, 35, 36, 38, 38, 39, 40, 41, 42, 44, 45, 45, 47, 48,
49, 51, 52, 52, 54, 56, 56, 57, 59, 59, 60, 62, 63, 64, 66, 66, 68, 69, 70, 71,
73, 73, 75, 75, 77, 78, 79, 80, 80, 82, 84, 85, 85, 86, 89, 89, 90, 92, 92, 94,
96, 96, 97, 99, 100, 100, 102, 102, 103, 104, 106, 107, 109, 110, 112, 112, 112,
115, 116, 117, 117, 118, 119, 121, 122, 122, 123, 124, 124, 125, 125, 126, 127,
126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 126, 126, 126, 125, 125, 124, 124, 123, 123, 122, 122, 122, 121, 120,
120, 118, 118, 117, 116, 116, 114, 113, 113, 112, 111, 110, 108, 107, 107, 106,
104, 103, 102, 101, 99, 98, 98, 96, 95, 93, 92, 92, 90, 88, 87, 87, 85, 84, 83,
81, 80, 79, 78, 76, 75, 74, 73, 71, 70, 70, 69, 68, 66, 65, 64, 62, 62, 60, 59,
58, 57, 57, 54, 53, 53, 51, 50, 50, 49, 47, 47, 45, 45, 43, 42, 41, 39, 40, 38,
37, 35, 35, 34, 33, 31, 30, 29, 28, 28, 27, 25, 23, 22, 21, 20, 20, 18, 17, 16,
15, 14, 12, 10, 10, 8, 8, 6, 5, 4, 2, 2, 0, -1, -2, -3, -4, -6, -7, -8, -10,
-10, -10, -12, -14, -14, -16, -18, -19, -19, -21, -22, -23, -24, -26, -26, -28,
-29, -29, -31, -31, -33, -34, -35, -37, -38, -39, -39, -40, -41, -44, -44, -45,
-46, -48, -49, -50, -50, -52, -53, -54, -55, -56, -57, -59, -59, -61, -62, -63,
-65, -65, -67, -68, -69, -69, -71, -72, -73, -74, -76, -77, -77, -80, -81, -81,
-83, -84, -85, -86, -88, -88, -90, -90, -92, -93, -94, -96, -96, -98, -99, -100,
-101, -103, -103, -105, -106, -106, -108, -109, -110, -111, -112, -113, -115,
-115, -116, -118, -119, -119, -121, -121, -123, -123, -124, -124, -124, -125,
-126, -127, -126, -127, -128, -128, -128, -128, -128, -128, -128, -128, -127,
-127, -128, -128, -127, -126, -128, -126, -127, -126, -126, -126, -125, -125,
-124, -123, -123, -122, -122, -122, -121, -119, -119, -118, -118, -117, -116,
-116, -114, -114, -112, -111, -110, -110, -108, -107, -106, -104, -103, -102,
-102, -101, -100, -98, -98, -96, -94, -93, -92, -92, -90, -87, -88, -86, -86,
-84, -82, -81, -79, -78, -77, -76, -75, -75, -73, -71, -71, -69, -68, -66, -66,
-65, -63, -62, -61, -60, -59, -59, -57, -56, -55, -53, -53, -51, -50, -49, -48,
-47, -47, -45, -44, -44, -42, -41, -40, -39, -38, -36, -36, -35, -33, -32, -32,
-31, -29, -28, -27, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -14, -13,
-12, -11, -10, -9, -8, -6, -5, -4, -3, -2, 0, };

#endif /* AKWF_0902_512_H_ */
