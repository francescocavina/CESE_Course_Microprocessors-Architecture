/*
 * c_func.h
 *
 *  Created on: Jun 17, 2023
 *      Author: Francesco Cavina
 */

#ifndef INC_C_FUNC_H_
#define INC_C_FUNC_H_


#include <stdint.h>
#include <math.h>


/* EJERCICIO 1 ---------------------------------------------------------------*/
void c_zeros(uint32_t *vector, uint32_t longitud);

/* EJERCICIO 2 ---------------------------------------------------------------*/
void c_productoEscalar32(uint32_t *vectorIn, uint32_t *vectorOut, uint32_t longitud, uint32_t escalar);

/* EJERCICIO 3 ---------------------------------------------------------------*/
void c_productoEscalar16(uint16_t *vectorIn, uint16_t *vectorOut, uint16_t longitud, uint16_t escalar);

/* EJERCICIO 4 ---------------------------------------------------------------*/
void c_productoEscalarSat16(uint16_t *vectorIn, uint16_t *vectorOut, uint16_t longitud, uint16_t escalar);

/* EJERCICIO 5 ---------------------------------------------------------------*/
void c_filtroVentana10(uint16_t *vectorIn, uint16_t *vectorOut, uint16_t longitudVectorIn);

/* EJERCICIO 6 ---------------------------------------------------------------*/
void c_pack32to16(int32_t * vectorIn, int16_t *vectorOut, uint32_t longitud);

/* EJERCICIO 7 ---------------------------------------------------------------*/
int32_t c_max(int32_t * vectorIn, uint32_t longitud);

/* EJERCICIO 8 ---------------------------------------------------------------*/
void c_downsampleM(int32_t * vectorIn, int32_t * vectorOut, uint32_t longitud, uint32_t N);

/* EJERCICIO 9 ---------------------------------------------------------------*/
void c_invertir(uint16_t *vector, uint32_t longitud);

/* EJERCICIO 10 ------------------------------------------------------------*/
void c_eco(int16_t *vectorIn, int16_t *vectorOut, uint16_t bufferSize, uint16_t samplingRate, uint16_t delay_ms);

/* EJERCICIO 11 --------------------------------------------------------------*/



#endif /* INC_C_FUNC_H_ */
