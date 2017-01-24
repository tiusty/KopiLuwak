/*******************************************************************************
 * @file 	dsplib_processsignal.c
 * @brief 	this function computes the FFT
 * @version 1.0.0
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2015 /b>
 *******************************************************************************
 *
 *
 *******************************************************************************/

#ifndef DSPLIB_PROCESSSIGNAL_H
#define DSPLIB_PROCESSSIGNAL_H
#include "common_library.h"
#include "arm_math.h"


/*===========================================================================================================
						enum definition
===========================================================================================================*/


/*===========================================================================================================
						structure definition
===========================================================================================================*/



/*===========================================================================================================
						Public functions declaration
===========================================================================================================*/
void dsplib_computeHannfft ( float32_t *pf32DataIn , float32_t *pf32DataOut , const uint16_t ui16NbData);
void dsplib_computefft ( float32_t *pf32DataIn , float32_t *pf32DataOut , const uint16_t ui16NbData);

#endif

