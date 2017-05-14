/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : DQ1.h
**     Project     : FRDM-KL27Z_McuOnEclipseLib
**     Processor   : MKL25Z128VLK4
**     Component   : SDK_BitIO
**     Version     : Component 01.022, Driver 01.00, CPU db: 3.00.000
**     Repository  : Legacy User Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-05-14, 20:14, # CodeGen: 154
**     Abstract    :
**
**     Settings    :
**          Component name                                 : DQ1
**          SDK                                            : MCUC1
**          GPIO Name                                      : GPIOB
**          PORT Name                                      : PORTB
**          Pin Number                                     : 0
**          Pin Symbol                                     : OneWireData
**          Do Pin Muxing                                  : yes
**          Init Direction                                 : Input
**          Init Value                                     : 0
**     Contents    :
**         GetDir    - bool DQ1_GetDir(void);
**         SetDir    - void DQ1_SetDir(bool Dir);
**         SetInput  - void DQ1_SetInput(void);
**         SetOutput - void DQ1_SetOutput(void);
**         GetVal    - bool DQ1_GetVal(void);
**         PutVal    - void DQ1_PutVal(bool Val);
**         ClrVal    - void DQ1_ClrVal(void);
**         SetVal    - void DQ1_SetVal(void);
**         NegVal    - void DQ1_NegVal(void);
**         Init      - void DQ1_Init(void);
**         Deinit    - void DQ1_Deinit(void);
**
**     * Copyright (c) 2015-2017, Erich Styger
**      * Web:         https://mcuoneclipse.com
**      * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**      * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**      * All rights reserved.
**      *
**      * Redistribution and use in source and binary forms, with or without modification,
**      * are permitted provided that the following conditions are met:
**      *
**      * - Redistributions of source code must retain the above copyright notice, this list
**      *   of conditions and the following disclaimer.
**      *
**      * - Redistributions in binary form must reproduce the above copyright notice, this
**      *   list of conditions and the following disclaimer in the documentation and/or
**      *   other materials provided with the distribution.
**      *
**      * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**      * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**      * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**      * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**      * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**      * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**      * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**      * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**      * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**      * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file DQ1.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup DQ1_module DQ1 module documentation
**  @{
*/         

#ifndef __DQ1_H
#define __DQ1_H

/* MODULE DQ1. */
#include "MCUC1.h" /* SDK and API used */
#include "DQ1config.h" /* configuration */

#if MCUC1_CONFIG_SDK_VERSION_USED == MCUC1_CONFIG_SDK_KINETIS_1_3
  #include "fsl_gpio_driver.h"

  /* only GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF and GPIOG are currently supported */
  #define DQ1_GPIO_IDX GPIOB_IDX   /* GPIOB */

  enum DQ1_pinNames{
    OneWireData = GPIO_MAKE_PIN(DQ1_GPIO_IDX, DQ1_CONFIG_PIN_NUMBER),
  };

  extern const gpio_output_pin_user_config_t DQ1_OutputConfig[];
  extern const gpio_input_pin_user_config_t DQ1_InputConfig[];
#endif

void DQ1_Init(void);
/*
** ===================================================================
**     Method      :  DQ1_Init (component SDK_BitIO)
**     Description :
**         Driver initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void DQ1_ClrVal(void);
/*
** ===================================================================
**     Method      :  DQ1_ClrVal (component SDK_BitIO)
**     Description :
**         Clears the pin value (sets it to a low level)
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void DQ1_SetVal(void);
/*
** ===================================================================
**     Method      :  DQ1_SetVal (component SDK_BitIO)
**     Description :
**         Sets the pin value to a high value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void DQ1_NegVal(void);
/*
** ===================================================================
**     Method      :  DQ1_NegVal (component SDK_BitIO)
**     Description :
**         Toggles/negates the pin value
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void DQ1_Deinit(void);
/*
** ===================================================================
**     Method      :  DQ1_Deinit (component SDK_BitIO)
**     Description :
**         Driver de-initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

bool DQ1_GetVal(void);
/*
** ===================================================================
**     Method      :  DQ1_GetVal (component SDK_BitIO)
**     Description :
**         Returns the pin value
**     Parameters  : None
**     Returns     :
**         ---             - Returns the value of the pin:
**                           FALSE/logical level '0' or TRUE/logical
**                           level '1'
** ===================================================================
*/

bool DQ1_GetDir(void);
/*
** ===================================================================
**     Method      :  DQ1_GetDir (component SDK_BitIO)
**     Description :
**         Return the direction of the pin (input/output)
**     Parameters  : None
**     Returns     :
**         ---             - FALSE if port is input, TRUE if port is
**                           output
** ===================================================================
*/

void DQ1_SetDir(bool Dir);
/*
** ===================================================================
**     Method      :  DQ1_SetDir (component SDK_BitIO)
**     Description :
**         Sets the direction of the pin (input or output)
**     Parameters  :
**         NAME            - DESCRIPTION
**         Dir             - FALSE: input, TRUE: output
**     Returns     : Nothing
** ===================================================================
*/

void DQ1_SetInput(void);
/*
** ===================================================================
**     Method      :  DQ1_SetInput (component SDK_BitIO)
**     Description :
**         Sets the pin as input
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void DQ1_SetOutput(void);
/*
** ===================================================================
**     Method      :  DQ1_SetOutput (component SDK_BitIO)
**     Description :
**         Sets the pin as output
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void DQ1_PutVal(bool Val);
/*
** ===================================================================
**     Method      :  DQ1_PutVal (component SDK_BitIO)
**     Description :
**         Sets the pin value
**     Parameters  :
**         NAME            - DESCRIPTION
**         Val             - Value to set. FALSE/logical '0' or
**                           TRUE/logical '1'
**     Returns     : Nothing
** ===================================================================
*/

/* END DQ1. */

#endif
/* ifndef __DQ1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/