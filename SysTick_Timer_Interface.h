#ifndef SYSTICK_TIMER_INTERFACE_H
#define SYSTICK_TIMER_INTERFACE_H

#include "SysTick_Timer_Reg.h"

#include "Bit_Math.h"

 void SysTickEnable(void);
 void SysTickDisable(void);
 void SysTickIntEnable(void);
 void SysTickIntDisable(void);
 void SysTickPeriodSet(u32 ui32Period);
 u32 SysTickPeriodGet(void);


void SysTick_SetISRCallBack(void(*funPtr)(void));



#endif