#ifndef AKWF_1321_512_H_
#define AKWF_1321_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1321_512_NUM_CELLS 512
#define AKWF_1321_512_SAMPLERATE 512
 
const char __attribute__((section(".progmem.data"))) AKWF_1321_512_DATA [] = {0,
0, -2, 2, 4, 7, 8, 9, 12, 14, 16, 18, 20, 23, 24, 27, 29, 30, 32, 33, 35, 36,
39, 39, 41, 43, 44, 45, 46, 48, 49, 50, 50, 51, 53, 54, 55, 56, 57, 58, 59, 59,
60, 60, 60, 61, 62, 63, 63, 64, 64, 65, 65, 65, 66, 65, 66, 67, 66, 67, 67, 67,
68, 69, 68, 68, 69, 69, 69, 69, 68, 69, 70, 69, 70, 69, 70, 71, 69, 70, 70, 70,
71, 71, 71, 71, 70, 71, 71, 71, 72, 71, 71, 71, 72, 72, 72, 72, 72, 72, 72, 72,
73, 74, 74, 73, 73, 73, 75, 74, 74, 75, 75, 76, 76, 76, 76, 76, 77, 78, 78, 78,
78, 78, 79, 79, 81, 81, 81, 81, 82, 82, 83, 84, 84, 83, 85, 85, 86, 86, 86, 87,
88, 88, 88, 89, 90, 90, 90, 90, 91, 90, 91, 91, 91, 90, 91, 91, 91, 91, 92, 92,
92, 91, 92, 91, 91, 91, 90, 90, 90, 89, 89, 89, 89, 88, 87, 86, 86, 86, 85, 84,
84, 83, 82, 82, 80, 80, 79, 77, 77, 75, 73, 73, 71, 71, 69, 68, 67, 65, 65, 63,
61, 60, 59, 58, 56, 54, 53, 51, 50, 49, 47, 46, 44, 42, 40, 39, 38, 36, 34, 33,
31, 30, 28, 26, 26, 24, 22, 20, 19, 18, 16, 14, 12, 11, 11, 8, 7, 6, 3, 3, 1, 0,
-1, -2, -4, -6, -6, -7, -8, -10, -11, -12, -14, -15, -16, -17, -19, -19, -20,
-22, -22, -24, -25, -25, -26, -28, -28, -29, -29, -30, -31, -32, -33, -34, -34,
-35, -35, -35, -37, -37, -37, -38, -38, -39, -40, -41, -40, -41, -41, -42, -42,
-43, -43, -43, -44, -43, -44, -44, -45, -45, -45, -45, -45, -46, -47, -46, -46,
-47, -46, -48, -47, -47, -48, -48, -48, -47, -48, -48, -48, -49, -49, -49, -49,
-49, -50, -49, -50, -49, -50, -50, -50, -51, -51, -51, -51, -51, -51, -52, -51,
-52, -52, -52, -53, -53, -53, -53, -54, -54, -54, -54, -55, -55, -55, -56, -56,
-56, -58, -57, -58, -58, -58, -58, -60, -60, -60, -60, -61, -61, -62, -63, -63,
-64, -64, -65, -68, -68, -69, -70, -70, -72, -72, -73, -74, -74, -76, -77, -79,
-80, -82, -81, -82, -84, -85, -87, -88, -89, -91, -92, -93, -94, -96, -97, -98,
-99, -101, -102, -104, -106, -107, -110, -110, -112, -114, -116, -116, -118,
-119, -120, -121, -121, -122, -123, -123, -124, -123, -124, -125, -125, -127,
-126, -127, -128, -128, -128, -127, -128, -128, -128, -127, -128, -127, -128,
-128, -127, -127, -127, -125, -124, -125, -124, -123, -122, -121, -121, -119,
-119, -117, -116, -115, -114, -112, -112, -109, -108, -106, -105, -102, -102,
-100, -97, -95, -94, -92, -90, -87, -86, -84, -82, -80, -78, -76, -73, -72, -69,
-66, -64, -61, -59, -56, -54, -52, -50, -47, -44, -42, -39, -37, -35, -32, -30,
-27, -25, -22, -20, -18, -15, -13, -9, -8, -3, };

#endif /* AKWF_1321_512_H_ */
