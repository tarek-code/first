
#include "Dio_Interface.h"


int main (void)
{
Dio_ConfigureChannel(DIO_PORTA,CHANNEL0,OUTPUT);
Dio_WriteChannel(DIO_PORTA,CHANNEL0,HIGH); 
}