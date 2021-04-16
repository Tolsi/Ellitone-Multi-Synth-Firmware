#ifndef AKWF_1117_512_H_
#define AKWF_1117_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1117_512_NUM_CELLS 512
#define AKWF_1117_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1117_512_DATA [] = {1,
2, 2, 4, 3, 4, 5, 6, 8, 10, 12, 13, 14, 14, 14, 16, 15, 18, 20, 21, 22, 24, 25,
26, 26, 27, 28, 30, 31, 32, 32, 34, 34, 35, 36, 36, 39, 39, 40, 41, 42, 42, 43,
43, 44, 45, 46, 47, 47, 48, 49, 50, 51, 51, 52, 53, 54, 54, 55, 55, 57, 57, 58,
59, 59, 60, 61, 61, 62, 63, 64, 64, 65, 66, 66, 66, 67, 68, 68, 68, 69, 70, 70,
71, 71, 72, 73, 75, 75, 77, 77, 77, 77, 76, 77, 77, 77, 78, 78, 79, 79, 80, 79,
80, 81, 81, 81, 81, 82, 83, 83, 84, 84, 84, 85, 84, 85, 86, 86, 86, 85, 86, 87,
87, 87, 87, 87, 88, 88, 89, 88, 88, 88, 89, 88, 89, 89, 89, 89, 88, 88, 87, 87,
88, 87, 88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 87, 87, 87, 86, 86, 86, 86, 86,
86, 85, 85, 84, 84, 84, 83, 82, 82, 81, 81, 81, 80, 80, 80, 79, 77, 76, 76, 75,
75, 76, 75, 75, 74, 73, 73, 72, 72, 71, 71, 70, 70, 68, 68, 67, 67, 66, 65, 65,
64, 63, 62, 62, 61, 61, 59, 59, 58, 58, 57, 56, 56, 54, 54, 53, 52, 52, 51, 50,
49, 48, 48, 47, 47, 45, 45, 44, 43, 42, 42, 41, 40, 39, 38, 37, 36, 36, 34, 34,
33, 32, 31, 30, 29, 29, 28, 26, 25, 25, 24, 23, 22, 21, 20, 20, 18, 18, 17, 15,
14, 13, 12, 11, 10, 9, 7, 7, 5, 4, 3, 1, 1, 0, -1, -2, -4, -5, -5, -7, -8, -10,
-11, -13, -13, -15, -16, -17, -17, -19, -21, -21, -22, -24, -24, -26, -27, -28,
-29, -31, -31, -32, -33, -35, -35, -36, -37, -39, -38, -39, -41, -41, -42, -43,
-44, -45, -45, -45, -46, -48, -47, -47, -49, -49, -50, -50, -50, -52, -53, -53,
-53, -54, -54, -54, -54, -55, -55, -55, -57, -56, -57, -57, -57, -58, -58, -58,
-58, -59, -59, -60, -59, -59, -60, -60, -68, -89, -111, -124, -127, -118, -102,
-84, -71, -66, -67, -70, -75, -76, -75, -75, -75, -76, -78, -80, -81, -81, -83,
-87, -88, -87, -82, -78, -78, -79, -85, -92, -97, -99, -99, -98, -98, -100,
-102, -108, -111, -115, -118, -118, -120, -121, -124, -125, -126, -125, -124,
-123, -122, -120, -118, -118, -119, -121, -123, -124, -125, -125, -126, -128,
-127, -128, -125, -123, -122, -120, -119, -118, -117, -113, -110, -109, -108,
-109, -110, -111, -110, -110, -109, -107, -106, -105, -103, -102, -101, -100,
-99, -98, -99, -97, -96, -93, -91, -89, -87, -85, -84, -82, -79, -76, -74, -73,
-71, -70, -69, -71, -70, -69, -68, -67, -64, -61, -59, -56, -53, -52, -50, -49,
-46, -46, -46, -45, -45, -44, -43, -40, -37, -32, -30, -29, -28, -26, -24, -23,
-21, -20, -18, -17, -16, -14, -13, -12, -10, -9, -8, -7, -5, -4, -3, -1, -1, };

#endif /* AKWF_1117_512_H_ */
