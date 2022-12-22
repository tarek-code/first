#ifndef SYSTICK_TIMER_REG_H
#define SYSTICK_TIMER_REG_H

#include "std_Types.h"

// Systick timer BASE
#define Systick_Timer_BASE    (0xE000E000)
// Systick timer OFFSET
#define SysTick_Timer_STCTRL_OFFSET					(0x010)     					// SysTick Control and Status Register
#define SysTick_Timer_STRELOAD_OFFSET				(0x014)     					// SysTick Reload Value Register
#define SysTick_Timer_STCURRENT_OFFSET			(0x018)     					// SysTick Current Value Register

// Systick timer Register 
#define SysTick_Timer_STCTRL_REG				(*(u32 volatile*)(SysTick_Timer_STCTRL_OFFSET+Systick_Timer_BASE))
#define SysTick_Timer_STRELOAD_REG				(*(u32 volatile*)(SysTick_Timer_STRELOAD_OFFSET+Systick_Timer_BASE))
#define SysTick_Timer_STCURRENT_REG				(*(u32 volatile*)(SysTick_Timer_STCURRENT_OFFSET+Systick_Timer_BASE))
	
#endif /*SYSTICK_TIMER_REG_H*/