#ifndef AKWF_1021_512_H_
#define AKWF_1021_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1021_512_NUM_CELLS 512
#define AKWF_1021_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1021_512_DATA [] = {7,
18, 23, 27, 29, 34, 36, 39, 43, 44, 47, 48, 51, 53, 55, 58, 59, 62, 63, 65, 66,
68, 70, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 85, 85, 87, 88, 89, 90, 91, 92,
94, 94, 96, 97, 96, 98, 99, 100, 100, 101, 101, 102, 104, 104, 105, 106, 106,
107, 108, 108, 109, 110, 110, 111, 111, 111, 113, 113, 113, 114, 114, 115, 115,
117, 117, 117, 117, 118, 119, 118, 119, 121, 120, 120, 121, 121, 121, 122, 122,
122, 122, 124, 124, 123, 124, 124, 124, 124, 126, 125, 125, 125, 125, 125, 126,
126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 125, 125,
125, 125, 124, 125, 123, 124, 123, 124, 123, 123, 123, 123, 122, 122, 120, 120,
121, 119, 120, 120, 119, 119, 118, 118, 117, 116, 117, 116, 115, 116, 114, 114,
114, 113, 112, 111, 111, 110, 110, 109, 108, 108, 107, 106, 106, 105, 104, 103,
102, 102, 101, 101, 100, 99, 98, 97, 96, 95, 94, 93, 93, 91, 90, 89, 88, 87, 86,
85, 83, 82, 81, 80, 79, 78, 76, 74, 73, 72, 70, 68, 67, 65, 64, 62, 60, 57, 56,
54, 51, 50, 48, 45, 42, 40, 37, 34, 31, 27, 22, 18, 11, 1, -10, -18, -24, -27,
-31, -34, -36, -40, -42, -45, -48, -50, -52, -54, -56, -58, -60, -63, -64, -66,
-67, -68, -70, -71, -74, -74, -75, -77, -78, -80, -82, -82, -84, -85, -86, -88,
-88, -89, -91, -92, -92, -93, -94, -95, -96, -97, -98, -99, -100, -101, -101,
-102, -103, -104, -104, -105, -106, -106, -107, -108, -109, -109, -110, -110,
-111, -111, -112, -113, -114, -114, -114, -114, -115, -116, -116, -117, -117,
-118, -118, -119, -119, -120, -120, -119, -121, -122, -122, -121, -122, -123,
-123, -122, -123, -123, -123, -123, -124, -124, -125, -125, -125, -125, -126,
-126, -125, -127, -127, -127, -127, -126, -127, -126, -127, -127, -127, -127,
-127, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -127, -128, -128, -128, -128, -128, -127, -128, -127, -127, -128,
-128, -127, -127, -127, -126, -126, -126, -127, -126, -125, -126, -125, -126,
-125, -126, -125, -124, -124, -123, -123, -123, -122, -123, -122, -122, -122,
-121, -121, -121, -121, -120, -119, -119, -118, -118, -117, -117, -116, -117,
-116, -116, -114, -115, -114, -113, -113, -111, -111, -111, -110, -110, -109,
-108, -108, -107, -106, -106, -105, -104, -104, -103, -102, -101, -101, -99,
-98, -98, -96, -96, -95, -94, -94, -92, -91, -90, -88, -88, -87, -86, -84, -83,
-82, -81, -80, -78, -77, -76, -74, -72, -71, -70, -69, -67, -65, -63, -61, -59,
-57, -56, -54, -52, -49, -47, -45, -42, -40, -36, -33, -30, -26, -22, -17, -9,
-1, };

#endif /* AKWF_1021_512_H_ */