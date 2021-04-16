#ifndef AKWF_0330_512_H_
#define AKWF_0330_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0330_512_NUM_CELLS 512
#define AKWF_0330_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0330_512_DATA [] = {1,
4, 6, 8, 10, 11, 14, 16, 19, 21, 23, 25, 27, 29, 32, 34, 37, 39, 41, 43, 46, 49,
51, 53, 55, 58, 59, 62, 64, 65, 67, 69, 70, 72, 73, 75, 76, 77, 78, 79, 81, 82,
82, 83, 84, 84, 86, 87, 87, 88, 89, 89, 91, 91, 92, 93, 94, 95, 96, 98, 99, 99,
101, 101, 103, 105, 105, 107, 108, 109, 110, 111, 111, 114, 114, 114, 116, 117,
117, 118, 118, 119, 119, 121, 121, 121, 122, 121, 122, 122, 122, 123, 122, 122,
122, 123, 122, 124, 123, 124, 123, 123, 123, 123, 123, 123, 123, 124, 124, 123,
124, 124, 124, 124, 125, 125, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 126,
126, 125, 124, 124, 123, 123, 122, 121, 121, 120, 119, 118, 117, 117, 116, 116,
115, 114, 113, 114, 112, 111, 110, 111, 109, 108, 108, 107, 107, 106, 105, 104,
103, 103, 102, 101, 100, 100, 99, 98, 98, 96, 95, 95, 94, 93, 92, 91, 90, 89,
88, 87, 86, 86, 83, 83, 81, 79, 79, 78, 77, 75, 74, 73, 71, 70, 69, 67, 65, 64,
63, 62, 61, 60, 57, 56, 55, 55, 53, 52, 51, 49, 48, 47, 45, 45, 42, 42, 41, 39,
37, 37, 35, 34, 33, 32, 31, 29, 28, 26, 26, 24, 23, 22, 21, 19, 18, 17, 16, 15,
14, 12, 11, 9, 8, 6, 5, 3, 2, -1, -1, -4, -6, -7, -10, -12, -15, -17, -20, -22,
-24, -26, -29, -32, -33, -35, -38, -40, -42, -44, -46, -48, -51, -52, -53, -55,
-57, -58, -60, -61, -62, -63, -64, -64, -66, -68, -68, -70, -69, -72, -72, -73,
-74, -74, -75, -77, -78, -79, -80, -80, -82, -83, -84, -85, -86, -86, -89, -89,
-91, -90, -92, -94, -94, -95, -97, -97, -98, -100, -101, -103, -103, -104, -105,
-106, -107, -107, -109, -110, -111, -112, -113, -113, -115, -115, -115, -116,
-117, -117, -118, -119, -120, -121, -121, -121, -122, -123, -123, -123, -124,
-124, -125, -125, -126, -127, -126, -126, -127, -128, -128, -128, -127, -128,
-128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -127, -128, -128, -127, -128, -127, -127, -128, -127, -127, -127,
-126, -125, -126, -125, -125, -124, -124, -124, -123, -123, -121, -122, -121,
-120, -119, -119, -118, -117, -117, -116, -116, -115, -115, -115, -115, -114,
-114, -113, -113, -113, -113, -112, -112, -111, -110, -110, -110, -110, -110,
-110, -108, -108, -108, -107, -107, -107, -106, -105, -104, -105, -104, -103,
-103, -101, -100, -100, -99, -98, -97, -96, -95, -94, -93, -92, -90, -89, -88,
-87, -85, -84, -82, -80, -79, -77, -76, -74, -72, -70, -68, -67, -64, -62, -60,
-58, -57, -54, -53, -50, -47, -46, -43, -42, -40, -38, -36, -33, -32, -29, -27,
-25, -23, -22, -19, -16, -15, -12, -10, -9, -5, -4, -2, 0, };

#endif /* AKWF_0330_512_H_ */