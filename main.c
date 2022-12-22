#include "Dio_Interface.h"
#include "SysTick_Timer_Interface.h"


int main(void)
{
	
	SysTickEnable();



Dio_ConfigureChannel(DIO_PORTF,CHANNEL0,OUTPUT);

	

	
	
	while(1)
	{
		
			
		Dio_WriteChannel(DIO_PORTF,CHANNEL0,HIGH); // LED ON
		SysTickPeriodSet(15999999);
		
		
		Dio_WriteChannel(DIO_PORTF,CHANNEL0,LOW); // LED OFF
		SysTickPeriodSet(15999999);
	
		
	}
	
	return 0;
}


