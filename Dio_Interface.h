/*****************************************
 *  Dio_Interface.h
 *  Created on:  10,12, 2022
 *  Author: Tarek Adel
 **************************************/

#ifndef Dio_Interface_H_
#define Dio_Interface_H_

#include "Dio_Private.h"
#include "Dio_Types.h"

void Dio_ConfigureChannel(Dio_Port port, Dio_Channnel channel, Dio_ChannelDirection dir);
void Dio_WriteChannel(Dio_Port port, Dio_Channnel channel, Dio_ChannelLevel level);

#endif /* Dio_Interface_H_ */
