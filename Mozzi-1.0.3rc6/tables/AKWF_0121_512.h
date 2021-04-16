#ifndef AKWF_0121_512_H_
#define AKWF_0121_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0121_512_NUM_CELLS 512
#define AKWF_0121_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0121_512_DATA [] = {2,
6, 10, 15, 19, 24, 28, 33, 36, 40, 43, 47, 52, 55, 59, 62, 65, 67, 71, 74, 77,
80, 82, 85, 87, 89, 91, 93, 95, 97, 99, 100, 102, 103, 105, 106, 108, 109, 111,
112, 112, 113, 114, 115, 117, 117, 118, 118, 119, 120, 121, 121, 121, 121, 122,
122, 124, 124, 124, 124, 126, 125, 126, 125, 126, 126, 127, 127, 127, 127, 126,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 126, 126, 126,
126, 126, 126, 125, 125, 124, 125, 124, 123, 123, 124, 124, 122, 122, 122, 121,
121, 120, 120, 120, 120, 119, 118, 118, 118, 117, 116, 115, 115, 115, 114, 113,
113, 113, 111, 111, 111, 110, 109, 109, 107, 108, 106, 106, 106, 105, 105, 103,
103, 103, 102, 102, 102, 101, 101, 100, 100, 99, 99, 99, 99, 98, 98, 98, 98, 99,
98, 99, 98, 99, 99, 99, 99, 100, 100, 101, 101, 102, 102, 102, 103, 104, 104,
104, 104, 105, 105, 106, 107, 107, 107, 107, 107, 107, 108, 108, 109, 108, 108,
109, 109, 108, 109, 108, 109, 108, 109, 109, 109, 108, 108, 108, 107, 107, 105,
105, 104, 104, 103, 101, 101, 100, 99, 97, 96, 95, 93, 91, 89, 88, 86, 83, 81,
79, 75, 73, 69, 67, 64, 59, 57, 53, 49, 46, 41, 38, 33, 30, 25, 20, 16, 11, 6,
2, -2, -7, -10, -15, -20, -24, -27, -31, -36, -39, -42, -47, -49, -53, -56, -60,
-63, -66, -68, -72, -74, -77, -80, -82, -84, -87, -88, -91, -93, -95, -96, -98,
-99, -102, -103, -104, -105, -107, -108, -109, -109, -111, -113, -114, -115,
-115, -116, -116, -117, -119, -119, -120, -120, -121, -121, -121, -123, -123,
-123, -124, -124, -123, -124, -124, -125, -125, -125, -125, -125, -126, -125,
-127, -127, -126, -126, -126, -127, -127, -126, -126, -126, -126, -126, -126,
-127, -127, -127, -127, -127, -127, -127, -126, -127, -126, -127, -126, -126,
-126, -126, -126, -126, -125, -125, -124, -124, -124, -124, -124, -123, -124,
-123, -123, -122, -122, -122, -122, -121, -120, -120, -120, -119, -120, -119,
-119, -118, -118, -117, -117, -117, -116, -116, -116, -115, -115, -115, -115,
-114, -114, -113, -113, -113, -113, -112, -112, -111, -112, -111, -110, -110,
-110, -110, -109, -109, -109, -108, -108, -108, -108, -108, -108, -109, -108,
-109, -109, -108, -108, -109, -109, -109, -110, -110, -110, -110, -111, -111,
-111, -112, -112, -113, -113, -113, -114, -114, -114, -114, -115, -115, -115,
-116, -115, -115, -116, -116, -117, -116, -116, -116, -116, -116, -117, -116,
-116, -116, -116, -116, -117, -115, -115, -115, -115, -114, -114, -113, -113,
-112, -112, -111, -110, -110, -109, -107, -106, -106, -103, -103, -102, -99,
-99, -97, -94, -92, -91, -88, -85, -82, -79, -77, -73, -70, -66, -63, -59, -55,
-51, -47, -43, -38, -34, -30, -25, -20, -16, -11, -6, -2, };

#endif /* AKWF_0121_512_H_ */