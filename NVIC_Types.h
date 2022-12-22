
#ifndef INTERRUPTTYPES_H_
#define INTERRUPTTYPES_H_

#include "std_Types.h"


#define MODE_XXX 	(4) 
#define MODE_XXY  (5)
#define MODE_XYY  (6)
#define MODE_YYY  (7)



#define VECTKEY_APPINT (0x05FA)

#define NVIC_ACTIVATED_INT_SIZE           1


#define PRIGROUP_SHIFTING        8u
#define APINT_VECTKEY_SHIFTING   16u
#define NVIC_REG_NUM_OF_PRI_FIELDS   4u
	

typedef enum 
{
	NVIC_GPIO_PORT_A = 0 			,
	NVIC_GPIO_PORT_B     			,
	NVIC_GPIO_PORT_C     			,
	NVIC_GPIO_PORT_D     			,
	NVIC_GPIO_PORT_E     			,
				
	NVIC_UART_0         			,
	NVIC_UART_1         			,
				
	NVIC_SSI_0          			,
				
	NVIC_I2C_0          			,
				
	NVIC_PWM_0_FAULT    			,
	NVIC_PWM_0_GEN_0    			,
	NVIC_PWM_0_GEN_1    			,
	NVIC_PWM_0_GEN_2    			,
				
	NVIC_QEI_0          			,
				
	NVIC_ADC_0_SEQ_0    			,
	NVIC_ADC_0_SEQ_1    			,
	NVIC_ADC_0_SEQ_2    			,
	NVIC_ADC_0_SEQ_3    			,
	
	NVIC_TIMER_WATCHDOG_0_1    		,
	NVIC_16_32_TIMER_0_A      		,
	NVIC_16_32_TIMER_0_B      		,
	NVIC_16_32_TIMER_1_A      		,
	NVIC_16_32_TIMER_1_B      		,
	NVIC_16_32_TIMER_2_A      		,
	NVIC_16_32_TIMER_2_B      		,
	
	NVIC_ANALOG_COMPARATOR_0   		,
	NVIC_ANALOG_COMPARATOR_1   		,
	
	/*_______27 Reserved______________*/
	
	NVIC_SYSTEM_CONTROL = 28   		,
	
	NVIC_FLASH_EEPROM_MEMORY_CONTROL,
	
	NVIC_DIO_PORT_F    			 	,
	
	/*_______31 & 32 Reserved________*/
	
	NVIC_UART_2 = 33   				,
	
	NVIC_SSI_1         				,
	
	NVIC_16_32_TIMER_3_A     		,
	NVIC_16_32_TIMER_3_B     		,
	
	NVIC_I2C_1         				,
	
	NVIC_QEI_1         				,
	
	NVIC_CAN_0         				,
	NVIC_CAN_1         				,
	
	/*_______41 & 42 Reserved________*/
	
	NVIC_HIBERNATION = 43 			,
	
	NVIC_USB           				,
					
	NVIC_PWM_GEN_3     				,
					
	NVIC_UDMA_SOFTWARE 				,
	NVIC_UDMA_ERROR    				,
					
	NVIC_ADC_1_SEQ_0   				,
	NVIC_ADC_1_SEQ_1   				,
	NVIC_ADC_1_SEQ_2   				,
	NVIC_ADC_1_SEQ_3   				,
	
	/*_______52 - 56 Reserved________*/
	
	NVIC_SSI_2 = 57    				,
	NVIC_SSI_3         				,
					
	NVIC_UART_3        				,
	NVIC_UART_4        				,
	NVIC_UART_5        				,
	NVIC_UART_6        				,
	NVIC_UART_7        				,
	
	/*_______64 - 67 Reserved________*/
	
	NVIC_I2C_2 = 68    				,
	NVIC_I2C_3         				,
	
	NVIC_16_32_TIMER_4_A     		,
	NVIC_16_32_TIMER_4_B     		,
	
	/*_______72 - 91 Reserved________*/
	
	NVIC_16_32_TIMER_5_A = 92		,
	NVIC_16_32_TIMER_5_B     		,
	NVIC_32_64_TIMER_0_A     		,
	NVIC_32_64_TIMER_0_B     		,
	NVIC_32_64_TIMER_1_A     		,
	NVIC_32_64_TIMER_1_B     		,
	NVIC_32_64_TIMER_2_A     		,
	NVIC_32_64_TIMER_2_B     		,
	NVIC_32_64_TIMER_3_A     		,
	NVIC_32_64_TIMER_3_B     		,
	NVIC_32_64_TIMER_4_A     		,
	NVIC_32_64_TIMER_4_B     		,
	NVIC_32_64_TIMER_5_A     		,
	NVIC_32_64_TIMER_5_B     		,
	
	NVIC_SYSTEM_EXCEPTION    		,
	
	/*_______107 - 133 Reserved________*/
	
	NVIC_PWM_1_GEN_0 = 134   		,
	NVIC_PWM_1_GEN_1         		,
	NVIC_PWM_1_GEN_2         		,
	NVIC_PWM_1_GEN_3         		,
	NVIC_PWM_1_FAULT
}nvic_num;


typedef struct 
{
nvic_num NVIC_Number;
	u8 Group_Pri;
	u8 Sub_Group_Pri;
}NVIC_Cfg;

typedef struct 
{
NVIC_Cfg intrrupts[NVIC_ACTIVATED_INT_SIZE];
}NVIC_CfgType;

extern const NVIC_CfgType NVIC_Configrations;

#endif /* INTERRUPTTYPES_H_ */