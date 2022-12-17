#include "Dio_Interface.h"

void Dio_ConfigureChannel(Dio_Port port, Dio_Channnel channel, Dio_ChannelDirection dir)
{
	u32 read=0;
switch (port)
{
	case DIO_PORTA:
	SET_BIT(GPIO_RCG_REG,DIO_PORTA);
	/*     delay for two or more cycle for clock to be enabled     */
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIO_GPIOADEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIO_GPIOADIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIO_GPIOADIR_REG,channel);
	}
	
	break;
	case DIO_PORTB:
		SET_BIT(GPIO_RCG_REG,DIO_PORTB);
	/*     delay for two or more cycle for clock to be enabled     */
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIO_GPIOBDEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIO_GPIOBDIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIO_GPIOBDIR_REG,channel);
	}
	break;
	case DIO_PORTC:
		SET_BIT(GPIO_RCG_REG,DIO_PORTC);
	/*     delay for two or more cycle for clock to be enabled     */
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIO_GPIOCDEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIO_GPIOCDIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIO_GPIOCDIR_REG,channel);
	}
	
	break;
	
	
	case DIO_PORTD:
		
	SET_BIT(GPIO_RCG_REG,DIO_PORTD);
	/*     delay for two or more cycle for clock to be enabled     */
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIO_GPIODDEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIO_GPIODDIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIO_GPIODDIR_REG,channel);
	}
	break;
	
	
	case DIO_PORTE:
		SET_BIT(GPIO_RCG_REG,DIO_PORTE);
	/*     delay for two or more cycle for clock to be enabled     */
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIO_GPIOEDEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIO_GPIOEDIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIO_GPIOEDIR_REG,channel);
	}
	break;
	
	case DIO_PORTF:
		SET_BIT(GPIO_RCG_REG,DIO_PORTF);
	/*     delay for two or more cycle for clock to be enabled     */
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIO_GPIOFDEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIO_GPIOFDIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIO_GPIOFDIR_REG,channel);
	}
	break;
}
}

void Dio_WriteChannel(Dio_Port port, Dio_Channnel channel, Dio_ChannelLevel level)
{
switch(port)
{
	case DIO_PORTA:
		if(level==HIGH)
		{
		SET_BIT(GPIO_GPIOADATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIO_GPIOADATA_REG,channel);
		}
	break;
	
	
	case DIO_PORTB:
		if(level==HIGH)
		{
		SET_BIT(GPIO_GPIOBDATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIO_GPIOBDATA_REG,channel);
		}		
	
	break;
	
	
	case DIO_PORTC:
				if(level==HIGH)
		{
		SET_BIT(GPIO_GPIOCDATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIO_GPIOCDATA_REG,channel);
		}
	break;
	
	
	case DIO_PORTD:
				if(level==HIGH)
		{
		SET_BIT(GPIO_GPIODDATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIO_GPIODDATA_REG,channel);
		}
	break;
	
	
	case DIO_PORTE:
				if(level==HIGH)
		{
		SET_BIT(GPIO_GPIOEDATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIO_GPIOEDATA_REG,channel);
		}
	
	break;
	
	case DIO_PORTF:
				if(level==HIGH)
		{
		SET_BIT(GPIO_GPIOFDATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIO_GPIOFDATA_REG,channel);
		}
	
	break;
}
}