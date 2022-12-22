/*
 * Timer0_Interface.h
 *
 *  Created on: Sep 11, 2022
 *      Author: lione
 */

#ifndef NVIC_Reg_H_
#define NVIC_Reg_H_

#include "std_Types.h"

// base for Systick_timer and  NVIC
#define Peripheral_BASE 			(0xE000E000)

#define NVIC_ENABLE_BASE_ADDRESS         (0xE000E100)   
#define NVIC_PRI_BASE_ADDRESS            (0xE000E400)   


#define PRI0_OFFSET					(0x400)     					// SysTick Control and Status Register
#define APINT_OFFSET				(0xD0C)     					// SysTick Control and Status Register




#define PRI0_REG				(*(u32 volatile*)(PRI0_OFFSET+Peripheral_BASE))
#define APINT_REG				(*(u32 volatile*)(APINT_OFFSET+Peripheral_BASE))






#endif /* NVIC_Reg_H_ */
