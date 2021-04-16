#ifndef AKWF_1161_512_H_
#define AKWF_1161_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1161_512_NUM_CELLS 512
#define AKWF_1161_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1161_512_DATA [] = {1,
4, 5, 8, 10, 13, 15, 17, 19, 22, 22, 24, 26, 27, 29, 31, 32, 34, 36, 36, 37, 38,
40, 41, 43, 44, 46, 45, 48, 48, 49, 50, 51, 52, 53, 54, 55, 54, 55, 56, 56, 56,
56, 56, 56, 57, 56, 56, 56, 55, 55, 56, 55, 54, 53, 53, 51, 50, 48, 45, 44, 43,
44, 45, 47, 49, 51, 54, 57, 59, 63, 66, 68, 72, 76, 79, 82, 85, 89, 92, 95, 98,
101, 104, 107, 108, 111, 113, 115, 117, 118, 119, 122, 122, 123, 124, 125, 126,
126, 126, 127, 126, 126, 126, 126, 127, 126, 126, 125, 125, 123, 123, 123, 121,
120, 119, 118, 117, 115, 114, 112, 111, 109, 109, 107, 105, 105, 102, 101, 100,
99, 98, 95, 94, 92, 92, 90, 89, 88, 87, 85, 85, 84, 83, 83, 82, 81, 80, 80, 79,
78, 78, 77, 76, 76, 76, 74, 74, 75, 74, 74, 73, 72, 73, 72, 72, 71, 70, 71, 71,
71, 70, 70, 69, 70, 69, 69, 69, 69, 68, 69, 70, 71, 71, 71, 72, 72, 72, 72, 73,
73, 74, 75, 75, 75, 77, 76, 76, 77, 77, 77, 77, 78, 78, 77, 77, 77, 77, 76, 75,
75, 75, 75, 75, 74, 73, 73, 72, 70, 69, 69, 69, 67, 66, 65, 63, 63, 61, 60, 58,
56, 54, 53, 50, 49, 48, 45, 43, 41, 38, 35, 35, 32, 29, 27, 25, 22, 20, 18, 15,
12, 10, 8, 4, 2, 1, -2, -4, -8, -9, -12, -14, -16, -18, -20, -22, -23, -26, -27,
-29, -30, -32, -34, -35, -37, -37, -39, -40, -41, -42, -43, -45, -45, -47, -47,
-49, -50, -51, -52, -53, -54, -55, -55, -55, -55, -57, -57, -57, -57, -57, -57,
-57, -57, -57, -57, -57, -57, -57, -56, -55, -54, -53, -52, -50, -48, -44, -45,
-44, -45, -47, -49, -50, -52, -55, -58, -61, -64, -67, -70, -74, -76, -81, -83,
-86, -90, -93, -97, -100, -103, -104, -108, -109, -113, -114, -116, -118, -119,
-121, -122, -123, -124, -126, -126, -126, -127, -127, -128, -128, -128, -127,
-128, -127, -127, -126, -127, -125, -124, -124, -122, -121, -121, -120, -119,
-117, -116, -114, -114, -112, -111, -108, -108, -106, -105, -103, -102, -100,
-99, -97, -96, -95, -93, -92, -91, -90, -88, -88, -86, -85, -84, -84, -82, -83,
-81, -80, -81, -80, -79, -79, -78, -77, -77, -76, -76, -75, -75, -74, -73, -73,
-73, -73, -73, -72, -73, -73, -71, -71, -71, -71, -71, -70, -70, -70, -69, -70,
-70, -70, -71, -71, -71, -70, -71, -73, -72, -73, -73, -74, -75, -75, -75, -77,
-76, -76, -77, -78, -77, -78, -78, -78, -78, -79, -77, -77, -78, -77, -77, -76,
-77, -76, -75, -75, -74, -74, -73, -72, -72, -70, -70, -69, -67, -66, -65, -64,
-63, -61, -59, -58, -56, -55, -53, -52, -49, -48, -46, -43, -40, -39, -37, -34,
-32, -29, -27, -25, -22, -20, -18, -16, -12, -10, -7, -5, -3, 0, };

#endif /* AKWF_1161_512_H_ */