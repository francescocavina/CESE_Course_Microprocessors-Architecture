/*
 * asm_func_tester.h
 *
 *  Created on: Jun 2, 2023
 *      Author: Francesco Cavina
 */

#ifndef INC_ASM_FUNC_TESTER_H_
#define INC_ASM_FUNC_TESTER_H_

#include <stdint.h>
#include "asm_func.h"


void asm_sum_tester(void);

/* EJERCICIO 1 ---------------------------------------------------------------*/
void asm_zeros_tester(void);

/* EJERCICIO 2 ---------------------------------------------------------------*/
void asm_productoEscalar32_tester(void);

/* EJERCICIO 3 ---------------------------------------------------------------*/
void asm_productoEscalar16_tester(void);

/* EJERCICIO 4 ---------------------------------------------------------------*/
void asm_productoEscalar16Sat_tester(void);

/* EJERCICIO 5 ---------------------------------------------------------------*/
void asm_filtroVentana10_tester(void);

/* EJERCICIO 6 ---------------------------------------------------------------*/
void asm_pack32to16_tester(void);

/* EJERCICIO 7 ---------------------------------------------------------------*/
void asm_max_tester(void);

/* EJERCICIO 8 ---------------------------------------------------------------*/
void asm_downsampleM_tester(void);

/* EJERCICIO 9 ---------------------------------------------------------------*/
void asm_invertir_tester(void);

/* EJERCICIO 10 --------------------------------------------------------------*/


/* EJERCICIO 11 --------------------------------------------------------------*/
void asm_corr_tester(void);


#endif /* INC_ASM_FUNC_TESTER_H_ */