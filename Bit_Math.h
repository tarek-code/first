/*
 * Bit_Math.h
 *
 *  Created on: Jun 22, 2022
 *      Author: lione
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Register,Bit_no) 		(Register|=(1<<Bit_no))

#define CLEAR_BIT(Register,Bit_no) 		(Register&=~(1<<Bit_no))

#define TOGGLE_BIT(Register,Bit_no) 	(Register^=(1<<Bit_no))

#define CHECK_BIT(Register,Bit_no)  	((Register>>Bit_no)&0x01)


/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG = (REG>>num) | (REG << ((sizeof(REG) * 8)-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG = (REG<<num) | (REG >> ((sizeof(REG) * 8)-num)) )

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )


#define GET_HWREG(BaseAddr,RegOffset)      *((volatile u32*)(BaseAddr+RegOffset))
#define GPIODIR(BaseAddr)                  *((volatile u32*)BaseAddr+GPIODIR_OFFSET) 

#define BASE_ADDRESS_PRE                              0x40000000
#define BASE_ADDRESS_PRE_ALIAS                        0x42000000

#define GET_RegisterOffset(RegisterAddr)              ((RegisterAddr - BASE_ADDRESS_PRE)/4)
#define GET_BitOffset(RegisterAddr,BitPos)            ((GET_RegisterOffset(RegisterAddr)*32) + BitPos)
#define GET_BBAlIAS_PRE_REG(RegisterAddr, BitPos)     (*(volatile uint32*)((GET_BitOffset(RegisterAddr,BitPos)*4) + BASE_ADDRESS_PRE_ALIAS))

#endif /* BIT_MATH_H_ */
