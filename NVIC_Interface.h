 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "NVIC_Types.h"
#include "std_Types.h"
#include "NVIC_Reg.h"
#include "Bit_Math.h"


#define NVIC_GROUPING_MODE             MODE_XXX

void NVIC_Int(NVIC_CfgType *CfgPtr);

#endif /* INTERRUPT_H_ */