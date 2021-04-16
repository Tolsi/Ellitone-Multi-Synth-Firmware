#ifndef AKWF_1092_512_H_
#define AKWF_1092_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1092_512_NUM_CELLS 512
#define AKWF_1092_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1092_512_DATA [] = {1,
4, 8, 12, 15, 18, 23, 27, 32, 35, 40, 43, 46, 50, 54, 59, 62, 66, 69, 73, 76,
79, 83, 85, 89, 92, 95, 97, 100, 102, 105, 107, 109, 111, 113, 114, 116, 117,
120, 120, 122, 122, 124, 124, 125, 125, 127, 126, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 126, 125, 126,
125, 125, 124, 124, 124, 123, 123, 123, 122, 123, 122, 121, 121, 120, 120, 120,
119, 119, 117, 117, 117, 116, 115, 115, 113, 112, 112, 110, 110, 108, 107, 105,
103, 102, 101, 99, 97, 96, 94, 92, 90, 87, 86, 83, 81, 80, 77, 75, 72, 71, 69,
66, 64, 62, 60, 58, 56, 54, 52, 50, 49, 48, 46, 45, 44, 43, 42, 41, 40, 39, 39,
39, 39, 39, 39, 40, 39, 41, 40, 41, 43, 43, 43, 44, 46, 47, 48, 48, 49, 50, 52,
53, 54, 56, 57, 58, 59, 60, 62, 62, 63, 65, 66, 67, 67, 69, 69, 70, 70, 71, 72,
73, 74, 74, 75, 76, 75, 75, 76, 76, 77, 77, 77, 77, 76, 77, 77, 76, 76, 75, 76,
76, 75, 74, 75, 74, 74, 73, 72, 72, 71, 71, 70, 69, 68, 68, 67, 66, 64, 65, 63,
62, 61, 60, 60, 57, 57, 56, 54, 53, 52, 50, 49, 47, 45, 44, 43, 41, 39, 37, 34,
33, 30, 28, 25, 22, 21, 17, 15, 11, 8, 5, 1, -1, -4, -9, -13, -16, -20, -23,
-27, -32, -35, -39, -44, -46, -50, -53, -58, -61, -65, -69, -71, -75, -78, -82,
-84, -88, -90, -92, -95, -98, -100, -102, -104, -106, -108, -109, -110, -111,
-113, -114, -116, -116, -117, -118, -117, -118, -119, -118, -119, -120, -119,
-119, -119, -119, -119, -118, -118, -118, -118, -117, -116, -116, -116, -115,
-115, -114, -114, -114, -113, -112, -111, -112, -111, -110, -110, -109, -110,
-109, -108, -109, -108, -107, -106, -106, -106, -105, -104, -105, -104, -103,
-103, -102, -102, -100, -99, -99, -99, -98, -96, -95, -94, -94, -93, -91, -90,
-88, -88, -87, -85, -84, -82, -80, -78, -77, -76, -74, -72, -69, -68, -65, -64,
-62, -61, -58, -57, -55, -54, -52, -50, -48, -48, -46, -45, -43, -42, -42, -41,
-40, -40, -39, -39, -38, -39, -39, -39, -39, -39, -40, -41, -42, -42, -43, -44,
-45, -46, -47, -49, -50, -51, -53, -54, -55, -57, -58, -60, -61, -63, -64, -65,
-66, -67, -69, -71, -72, -73, -74, -75, -76, -77, -78, -78, -80, -80, -81, -82,
-82, -83, -84, -85, -85, -85, -85, -86, -86, -86, -86, -87, -86, -87, -85, -85,
-86, -86, -85, -85, -85, -84, -84, -84, -83, -83, -83, -81, -81, -80, -79, -79,
-78, -77, -76, -75, -74, -74, -73, -72, -71, -69, -68, -67, -66, -65, -64, -63,
-62, -59, -59, -58, -56, -54, -52, -51, -48, -48, -45, -43, -41, -38, -36, -34,
-32, -29, -26, -23, -21, -17, -14, -11, -8, -5, -1, };

#endif /* AKWF_1092_512_H_ */
