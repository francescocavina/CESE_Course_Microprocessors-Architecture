/*
 * c_func_tester.c
 *
 *  Created on: Jun 17, 2023
 *      Author: Francesco Cavina
 */

#include "c_func_tester.h"


#define BUFFER_SIZE 4096		// EJERCICIO 10
#define SAMPLING_RATE 44100		// EJERCICIO 10
#define DELAY_MS 20				// EJERCICIO 10


/* EJERCICIO 1 ---------------------------------------------------------------*/
void c_zeros_tester(void) {

	uint32_t myVec[] = {1, 3, 5, 7, 9, 11};

	c_zeros(myVec, sizeof(myVec) / sizeof(myVec[0]));
}


/* EJERCICIO 2 ---------------------------------------------------------------*/
void c_productoEscalar32_tester(void) {

	uint32_t myVecIn[] = {1, 3, 5, 7, 9, 11};
	uint32_t myVecSize = sizeof(myVecIn) / sizeof(myVecIn[0]);
	uint32_t myVecOut[myVecSize];
	uint32_t scalar = 8;

	c_productoEscalar32(myVecIn, myVecOut, myVecSize, scalar);
}


/* EJERCICIO 3 ---------------------------------------------------------------*/
void c_productoEscalar16_tester(void) {

	uint16_t myVecIn[] = {1, 3, 5, 7, 9, 11};
	uint16_t myVecSize = sizeof(myVecIn) / sizeof(myVecIn[0]);
	uint16_t myVecOut[myVecSize];
	uint16_t scalar = 4;

	c_productoEscalar16(myVecIn, myVecOut, myVecSize, scalar);
}


/* EJERCICIO 4 ---------------------------------------------------------------*/
void c_productoEscalar16Sat_tester(void) {

	uint16_t myVecIn[] = {1, 3, 5, 7, 9, 11};
	uint16_t myVecSize = sizeof(myVecIn) / sizeof(myVecIn[0]);
	uint16_t myVecOut[myVecSize];
	uint16_t scalar = 4;

	c_productoEscalarSat16(myVecIn, myVecOut, myVecSize, scalar);
}


/* EJERCICIO 5 ---------------------------------------------------------------*/
void c_filtroVentana10_tester(void) {

	uint16_t myVecIn[] = {1, 3, 5, 4, 6, 2, 8, 12, 7, 16};
	uint16_t myVecInSize = sizeof(myVecIn) / sizeof(myVecIn[0]);

	uint16_t myVecOut[myVecInSize];

	c_filtroVentana10(myVecIn, myVecOut, myVecInSize);
}


/* EJERCICIO 6 ---------------------------------------------------------------*/
void c_pack32to16_tester(void) {

	int32_t myVecIn[] = {32500, 439000, 65500, 7010000, 115400, 4000450, 3990705493, 1200, 815440, 340444};
	uint32_t myVecInSize = sizeof(myVecIn) / sizeof(myVecIn[0]);

	int16_t myVecOut[myVecInSize];

	c_pack32to16(myVecIn, myVecOut, myVecInSize);
}


/* EJERCICIO 7 ---------------------------------------------------------------*/
void c_max_tester(void) {

	int32_t myVecIn[] = {32500, 439000, -65500, 7010000, -115400, 4000450, 90705493, -1200, 815440, 340444};
	uint32_t myVecInSize = sizeof(myVecIn) / sizeof(myVecIn[0]);

	int32_t result = c_max(myVecIn, myVecInSize);
}


/* EJERCICIO 8 ---------------------------------------------------------------*/
void c_downsampleM_tester(void) {

	int32_t myVecIn[] = {100, 88, 123, 500, 1, 57, 980, 10, 45, 1, 450, 650, 976, 784, 1, 725, 680, 506, 120, 1, 34, 78, 90, 120, 1};
	uint32_t myVecInSize = sizeof(myVecIn) / sizeof(myVecIn[0]);
	int32_t myVecOut[myVecInSize];
	uint32_t N = 5;

	c_downsampleM(myVecIn, myVecOut, myVecInSize, N);
}


/* EJERCICIO 9 ---------------------------------------------------------------*/
void c_invertir_tester(void) {

	uint16_t myVec[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int32_t myVecSize = sizeof(myVec) / sizeof(myVec[0]);

	c_invertir(myVec, myVecSize);
}


/* EJERCICIO 10 ------------------------------------------------------------*/
void c_eco_tester(void) {

	int16_t myVecIn[BUFFER_SIZE] = {0};
	int16_t myVecOut[BUFFER_SIZE] = {0};

	srand(0);

	for(uint16_t i = 0; i < BUFFER_SIZE; i++) {

		myVecIn[i] = rand() % 65536 - 32768;
	}


	DWT->CYCCNT = 0;

	c_eco(myVecIn, myVecOut, BUFFER_SIZE, SAMPLING_RATE, DELAY_MS);

	const volatile uint32_t Ciclos = DWT->CYCCNT;	// Reporta 282900 ciclos en modo Debug!!!
}


/* EJERCICIO 11 --------------------------------------------------------------*/
void c_corr_tester(void) {


}

