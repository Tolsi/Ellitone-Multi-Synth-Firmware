#ifndef AKWF_1394_512_H_
#define AKWF_1394_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1394_512_NUM_CELLS 512
#define AKWF_1394_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1394_512_DATA [] = {0,
3, 6, 8, 10, 12, 15, 18, 21, 24, 25, 27, 30, 33, 35, 38, 40, 42, 46, 47, 50, 52,
55, 57, 59, 63, 64, 67, 69, 71, 74, 76, 79, 81, 84, 86, 88, 90, 93, 95, 97, 99,
101, 104, 105, 106, 108, 110, 111, 112, 114, 114, 116, 117, 117, 118, 118, 119,
120, 121, 120, 121, 122, 123, 123, 123, 123, 123, 123, 124, 125, 125, 125, 125,
125, 125, 126, 126, 126, 126, 126, 125, 126, 127, 126, 127, 127, 126, 127, 126,
126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 126, 127, 127, 127, 126, 126, 126, 126, 126, 125,
127, 125, 126, 125, 125, 127, 125, 126, 125, 125, 125, 125, 124, 125, 124, 124,
123, 124, 123, 123, 123, 122, 122, 121, 121, 120, 120, 120, 119, 118, 118, 117,
117, 115, 115, 113, 113, 112, 110, 108, 108, 105, 104, 103, 100, 98, 96, 94, 93,
90, 88, 85, 83, 81, 79, 77, 75, 73, 71, 68, 66, 64, 62, 59, 57, 55, 54, 51, 48,
47, 45, 43, 39, 39, 35, 33, 31, 30, 27, 25, 23, 21, 18, 17, 15, 12, 10, 8, 6, 4,
3, 0, -2, -4, -6, -9, -11, -13, -15, -16, -19, -21, -23, -25, -27, -30, -32,
-34, -36, -37, -41, -42, -44, -48, -49, -51, -53, -56, -59, -60, -62, -65, -67,
-69, -72, -74, -77, -79, -81, -83, -86, -87, -90, -92, -95, -97, -99, -102,
-104, -106, -107, -108, -111, -111, -112, -113, -116, -116, -118, -118, -118,
-119, -120, -121, -122, -122, -122, -122, -124, -124, -124, -124, -124, -125,
-126, -125, -125, -126, -126, -126, -126, -126, -126, -126, -126, -127, -127,
-126, -126, -127, -127, -127, -128, -127, -128, -128, -127, -128, -127, -127,
-127, -128, -127, -127, -128, -128, -127, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -127, -128, -127, -128, -128, -128, -128, -128,
-127, -128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -127, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128,
-127, -128, -127, -127, -128, -128, -128, -128, -128, -128, -127, -127, -128,
-128, -127, -127, -127, -127, -127, -127, -127, -126, -126, -127, -127, -126,
-126, -126, -126, -126, -126, -125, -125, -125, -124, -124, -124, -124, -123,
-123, -121, -122, -121, -120, -120, -119, -118, -118, -116, -115, -115, -113,
-111, -110, -108, -108, -105, -104, -102, -100, -96, -95, -92, -90, -88, -86,
-83, -80, -78, -76, -73, -71, -68, -66, -63, -62, -59, -56, -54, -52, -49, -46,
-44, -41, -39, -37, -34, -31, -29, -26, -24, -21, -19, -16, -14, -12, -9, -6,
-4, -1, };

#endif /* AKWF_1394_512_H_ */