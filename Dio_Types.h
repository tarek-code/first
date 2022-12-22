/*****************************************
 *  Dio_Types.h
 *  Created on:  10,12, 2022
 *  Author: Tarek Adel
 **************************************/

#ifndef Dio_Types_H_
#define Dio_Types_H_

#include "Bit_Math.h"


typedef enum
{
DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD,
	DIO_PORTE,
	DIO_PORTF
}Dio_Port;


typedef enum 
{
CHANNEL0,
CHANNEL1,
CHANNEL2,
CHANNEL3,
CHANNEL4,
CHANNEL5,
CHANNEL6,
CHANNEL7
}Dio_Channnel;


typedef enum
{
INPUT,
OUTPUT
}Dio_ChannelDirection;


typedef enum
{
LOW,
HIGH
}Dio_ChannelLevel;

#endif /* Dio_Types_H_ */

