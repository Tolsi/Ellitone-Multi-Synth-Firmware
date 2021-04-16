#ifndef AKWF_1164_512_H_
#define AKWF_1164_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1164_512_NUM_CELLS 512
#define AKWF_1164_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1164_512_DATA [] = {1,
3, 5, 7, 9, 11, 13, 16, 16, 19, 21, 23, 23, 27, 36, 42, 47, 50, 54, 57, 60, 64,
68, 71, 73, 76, 79, 81, 84, 87, 89, 91, 93, 96, 97, 100, 100, 103, 104, 105,
106, 108, 110, 111, 112, 113, 115, 115, 116, 117, 118, 119, 120, 121, 122, 121,
122, 123, 123, 124, 124, 126, 126, 125, 127, 126, 126, 127, 127, 127, 127, 127,
122, 120, 119, 116, 115, 113, 112, 111, 108, 107, 106, 104, 103, 102, 100, 99,
98, 97, 96, 94, 93, 92, 91, 90, 89, 87, 87, 86, 85, 85, 83, 81, 81, 81, 80, 79,
78, 77, 76, 75, 75, 73, 74, 72, 72, 71, 70, 69, 69, 68, 68, 67, 66, 66, 64, 64,
64, 63, 62, 62, 61, 61, 61, 60, 59, 59, 59, 59, 57, 57, 56, 57, 56, 54, 55, 54,
53, 54, 53, 52, 52, 52, 51, 50, 50, 49, 49, 49, 49, 48, 48, 47, 47, 46, 46, 45,
45, 45, 45, 44, 44, 43, 42, 43, 42, 41, 41, 41, 40, 40, 39, 40, 39, 39, 38, 38,
38, 37, 37, 36, 35, 36, 36, 35, 34, 35, 34, 34, 34, 33, 33, 32, 32, 32, 31, 31,
30, 30, 31, 30, 30, 30, 29, 28, 28, 28, 28, 27, 27, 27, 27, 26, 25, 26, 25, 25,
24, 23, 23, 24, 23, 23, 22, 22, 21, 21, 21, 21, 20, 19, 19, 19, 19, 19, 19, 18,
18, 18, 18, 17, 17, 17, 16, 16, 14, 15, 15, 14, 14, 14, 13, 12, 13, 13, 11, 12,
13, 8, 2, -3, -5, -7, -10, -13, -16, -18, -20, -23, -24, -28, -30, -31, -33,
-35, -36, -38, -40, -42, -43, -44, -46, -48, -48, -50, -50, -52, -53, -55, -55,
-56, -57, -58, -59, -59, -62, -62, -63, -63, -64, -66, -67, -66, -67, -67, -68,
-68, -70, -70, -70, -71, -71, -72, -72, -73, -73, -73, -74, -75, -74, -74, -76,
-76, -76, -76, -77, -77, -77, -77, -78, -79, -78, -78, -78, -79, -80, -80, -80,
-79, -80, -79, -80, -81, -80, -81, -81, -81, -81, -81, -82, -82, -82, -82, -82,
-83, -82, -83, -82, -83, -82, -83, -83, -83, -83, -83, -84, -83, -84, -84, -84,
-84, -85, -84, -84, -85, -85, -85, -85, -86, -85, -85, -85, -85, -86, -85, -87,
-86, -87, -86, -86, -86, -87, -86, -86, -87, -87, -87, -87, -88, -88, -88, -87,
-88, -87, -87, -88, -89, -89, -88, -88, -89, -89, -88, -88, -88, -88, -89, -89,
-88, -89, -89, -89, -89, -90, -89, -89, -90, -90, -89, -91, -90, -91, -91, -91,
-90, -90, -91, -91, -91, -90, -91, -91, -92, -90, -92, -91, -92, -91, -92, -91,
-92, -93, -92, -92, -92, -93, -90, -85, -83, -81, -79, -77, -75, -73, -71, -69,
-68, -65, -63, -61, -59, -57, -54, -53, -51, -49, -47, -45, -43, -41, -40, -38,
-36, -33, -31, -30, -27, -26, -24, -23, -21, -18, -17, -15, -12, -11, -8, -7,
-5, -4, -1, };

#endif /* AKWF_1164_512_H_ */
