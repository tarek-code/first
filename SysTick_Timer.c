 #include "SysTick_Timer_Interface.h"
 
 
 static void (*sysTickISR)(void);
 
 void SysTickEnable(void)
 {
 
	SET_BIT(SysTick_Timer_STCTRL_REG,0);
	 SET_BIT(SysTick_Timer_STCTRL_REG,2);
 }
 
 void SysTickDisable(void)
 {
 CLEAR_BIT(SysTick_Timer_STCTRL_REG,0);
 }
 

 
 void SysTickIntEnable(void)
 {
 SET_BIT(SysTick_Timer_STCTRL_REG,1);
 }
 
 void SysTickIntDisable(void)
 {
 CLEAR_BIT(SysTick_Timer_STCTRL_REG,1);
 }
 
 void SysTickPeriodSet(u32 ui32Period)
 {

 SysTick_Timer_STRELOAD_REG=(ui32Period-1);
     while( (SysTick_Timer_STCTRL_REG & (1<<16) ) == 0) ; 

 }
 
 u32 SysTickPeriodGet(void)
 {
 
	 return (SysTick_Timer_STCURRENT_REG+1);
 }
 
 
 
 
 
 // callback fn
 void SysTick_SetISRCallBack( void (*funPtr)(void) ) 
{ 
	sysTickISR = funPtr; 
}

void SysTick_Handler(void) 
{ 
	sysTickISR(); 
}