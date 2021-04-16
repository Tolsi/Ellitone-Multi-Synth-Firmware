#ifndef AKWF_0608_512_H_
#define AKWF_0608_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0608_512_NUM_CELLS 512
#define AKWF_0608_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_0608_512_DATA [] = {0,
4, 6, 10, 13, 15, 19, 21, 24, 27, 30, 33, 36, 39, 42, 44, 47, 49, 51, 54, 57,
59, 62, 64, 66, 69, 72, 75, 76, 79, 80, 83, 85, 87, 90, 91, 93, 96, 96, 99, 101,
102, 104, 105, 107, 109, 111, 112, 113, 114, 116, 116, 118, 119, 119, 121, 122,
122, 123, 123, 125, 125, 126, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127,
126, 124, 120, 117, 113, 110, 105, 101, 95, 91, 86, 81, 75, 69, 64, 59, 53, 47,
41, 35, 28, 23, 17, 12, 5, -1, -7, -12, -17, -23, -27, -34, -39, -44, -49, -54,
-59, -63, -67, -71, -76, -80, -83, -87, -90, -93, -96, -99, -101, -103, -105,
-107, -109, -111, -111, -112, -113, -112, -113, -111, -109, -107, -103, -99,
-95, -91, -86, -82, -77, -72, -66, -62, -56, -50, -45, -39, -34, -28, -23, -17,
-11, -4, 2, 7, 13, 19, 24, 30, 37, 41, 46, 52, 56, 61, 67, 71, 76, 81, 85, 89,
93, 97, 100, 104, 107, 110, 113, 115, 117, 119, 121, 123, 124, 125, 126, 127,
127, 127, 127, 125, 124, 123, 122, 120, 117, 114, 113, 109, 108, 104, 101, 98,
95, 92, 90, 86, 82, 80, 76, 72, 68, 65, 61, 58, 54, 51, 47, 43, 39, 35, 32, 28,
25, 21, 17, 13, 9, 6, 2, -1, -5, -9, -13, -16, -20, -23, -26, -31, -34, -37,
-40, -44, -47, -50, -53, -56, -59, -62, -65, -68, -71, -73, -76, -78, -81, -83,
-85, -88, -90, -92, -94, -95, -97, -100, -101, -102, -103, -105, -107, -107,
-108, -110, -110, -111, -112, -112, -112, -114, -114, -114, -114, -113, -114,
-111, -111, -108, -107, -104, -100, -98, -96, -92, -90, -87, -84, -81, -78, -75,
-71, -68, -65, -61, -57, -55, -50, -48, -45, -41, -38, -35, -32, -28, -25, -22,
-20, -17, -14, -11, -9, -6, -3, -2, 1, 3, 5, 6, 8, 9, 10, 12, 13, 14, 15, 16,
17, 17, 17, 18, 22, 40, 64, 90, 110, 123, 127, 127, 127, 125, 124, 122, 121,
119, 117, 116, 114, 112, 110, 108, 106, 103, 100, 98, 96, 94, 91, 89, 86, 83,
81, 78, 75, 73, 69, 67, 63, 60, 58, 54, 51, 50, 47, 43, 40, 37, 34, 30, 27, 25,
21, 19, 16, 13, 9, 6, 4, 1, -2, -5, -8, -11, -14, -17, -20, -22, -25, -28, -31,
-34, -37, -40, -42, -44, -48, -50, -52, -54, -57, -60, -62, -64, -66, -69, -71,
-73, -75, -76, -79, -81, -83, -85, -86, -88, -90, -92, -93, -95, -96, -98, -99,
-100, -101, -103, -104, -106, -106, -107, -108, -109, -109, -110, -111, -112,
-111, -112, -113, -113, -113, -114, -114, -114, -114, -113, -113, -111, -110,
-110, -108, -107, -105, -104, -102, -99, -99, -96, -93, -91, -90, -87, -84, -82,
-80, -77, -75, -72, -69, -67, -64, -62, -59, -56, -53, -50, -47, -45, -42, -39,
-36, -33, -30, -27, -25, -21, -18, -15, -12, -10, -6, -4, -1, };

#endif /* AKWF_0608_512_H_ */