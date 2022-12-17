/*
 * Timer0_Interface.h
 *
 *  Created on: Sep 11, 2022
 *      Author: lione
 */

#ifndef GPT_Types_H_
#define GPT_Types_H_




typedef enum
{
SNAPHOT_MODE,
CONTINUOUS_MODE
}t_mode;

typedef enum{
COUNTS_UP,
COUNTS_DOWN
}t_counts;


typedef enum
{
INTERRUPT_ENABLE,
INTERRUPT_DISABLE
}t_interrupt;

typedef enum
{
  TIMER0_A_16,
	TIMER0_A_32,
	TIMER0_B_16,
	TIMER0_B_32,
	TIMER1_A_16,
	TIMER1_A_32,
	TIMER1_B_16,
	TIMER1_B_32,
	TIMER2_A_16,
	TIMER2_A_32,
	TIMER2_B_16,
	TIMER2_B_32,
	TIMER3_A_16,
	TIMER3_A_32,
	TIMER3_B_16,
	TIMER3_B_32,
	TIMER4_A_16,
	TIMER4_A_32,
	TIMER4_B_16,
	TIMER4_B_32,
	TIMER5_A_16,
	TIMER5_A_32,
	TIMER5_B_16,
	TIMER5_B_32
}timer_type;

#define TASAPS	(7)
#define TACDIR	(4)
#define TBTOIM	(8)
#define TATOIM	(0)
#define TBEN		(8)
#define TAEN		(0)

#endif /* GPT_Types_H_ */