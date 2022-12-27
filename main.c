#include "Dio_Interface.h"
#include "SysTick_Timer_Interface.h"
void Delay(u32 ontime,u32 offtime);

int main(void)
{
	u32 ONTime=15999999,OFFTime=15999999;
	SysTickEnable();



Dio_ConfigureChannel(DIO_PORTF,CHANNEL0,OUTPUT);

	

	
	
	while(1)
	{
		
			
	
	Delay(ONTime,OFFTime);
		
	}
	
	return 0;
}


void Delay(u32 ontime,u32 offtime)
{
	Dio_WriteChannel(DIO_PORTF,CHANNEL0,HIGH); // LED ON
		SysTickPeriodSet(ontime);
		
		
		Dio_WriteChannel(DIO_PORTF,CHANNEL0,LOW); // LED OFF
		SysTickPeriodSet(offtime);
}