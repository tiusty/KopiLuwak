/*******************************************************************************
 * @file srvbubblelevel.c
 * @brief this file defines the command set for the ADXL363 (accelerometer)
 * @version 1.0.0
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2015  , </b>
 *******************************************************************************
 *
 *
 *******************************************************************************/
#ifndef SRV_BUBBLELEVEL_H_
#define SRV_BUBBLELEVEL_H_

#include "common_library.h"
#include "common_statuscode.h"
#include "srvadxl363.h"
#include "kernel_process.h"
#include "srvlis3mdl.h"

#if (APP_CHOSEN_FLAG ==  APP_DEMOTAG_BUBBLELEVEL)
/*===========================================================================================================
						constant definition
===========================================================================================================*/

/*===========================================================================================================
						Enum definition
===========================================================================================================*/


/*===========================================================================================================
						struct definition
===========================================================================================================*/



/*===========================================================================================================
						extern definition
===========================================================================================================*/

/*===========================================================================================================
						prototype
===========================================================================================================*/
uint8_t 	srvBubble_ProcessAcceleromterIRQ 		( Kernel_QueueItem_struct *sQueueItem );
uint8_t 	srvBubble_EnableMotionDetection 		( bool bOnOrOff );
#endif
#endif /* SRV_BUBBLELEVEL_H_ */
