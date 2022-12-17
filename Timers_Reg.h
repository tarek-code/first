/*
 * Timer0_Interface.h
 *
 *  Created on: Sep 11, 2022
 *      Author: lione
 */

#ifndef Timers_Reg_H_
#define Timers_Reg_H_

#include "std_Types.h"


#define GPT_Timer0_BASE 			(0x40030000)
#define GPT_Timer1_BASE 			(0x40031000)
#define GPT_Timer2_BASE 			(0x40032000)
#define GPT_Timer3_BASE 			(0x40033000)
#define GPT_Timer4_BASE 			(0x40034000)
#define GPT_Timer5_BASE 			(0x40035000)
#define GPT_WIDE_Timer0_BASE 	(0x40036000)
#define GPT_WIDE_Timer1_BASE 	(0x40037000)
#define GPT_WIDE_Timer2_BASE 	(0x4004C000)
#define GPT_WIDE_Timer3_BASE 	(0x4004D000)
#define GPT_WIDE_Timer4_BASE 	(0x4004E000)
#define GPT_WIDE_Timer5_BASE 	(0x4004F000)
#define RCGCTIMER_BASE				(0x400FE000)

#define GPT_GPTMIMR_OFFSET		(0x018)          // GPTM Interrupt Mask
#define GPT_GPTMCFG_OFFSET		(0x000)          // GPTM Configuration
#define GPT_GPTMTAV_OFFSET		(0x050)          // GPTM Timer A Value 
#define GPT_GPTMCTL_OFFSET		(0x00C)          // GPTM Control
#define GPT_GPTMTAMR_OFFSET		(0x004)          // GPTM Timer A Mode 
#define GPT_GPTMTBMR_OFFSET		(0x008)          // GPTM Timer B Mode 
#define GPT_GPTMTAPS_OFFSET		(0x05C)          // GPTM Timer A Prescale Snapshot 
#define GPT_GPTMTBPS_OFFSET		(0x060)          // GPTM Timer B Prescale Snapshot 
#define GPT_GPTMTAPV_OFFSET		(0x064)          // GPTM Timer A Prescale Value
#define GPT_GPTMTBPV_OFFSET		(0x068)          // GPTM Timer B Prescale Value
#define GPT_GPTMPP_OFFSET		``(0xFC0)          // GPTM Peripheral Properties
#define RCGCTIMER_OFFSET			(0x604)						// 16/32-Bit General-Purpose Timer Run Mode Clock Gating Control
#define RCGCWTIMER_OFFSET			(0x65C)						// 32/64-Bit Wide General-Purpose Timer Run Mode Clock Gating Contro
#define GPT_GPTMTAPR_OFFSET		(0x038)					//GPTM Timer A Prescale
#define GPT_GPTMTBPR_OFFSET		(0x03C)					//GPTM Timer B Prescale
#define GPT_GPTMTAILR_OFFSET	(0x028)					// GPTM Timer A Interval Load
#define GPT_GPTMTBILR_OFFSET	(0x02C)					// GPTM Timer B Interval Load

#define RCGCTIMER_Reg 				(*(u32 volatile*)(RCGCTIMER_OFFSET+RCGCTIMER_BASE))
#define RCGCWTIMER_Reg 				(*(u32 volatile*)(RCGCTIMER_OFFSET+RCGCTIMER_BASE))

/*                                  timers_reg              */ 

/* timer0 reg */
#define GPT_GPTMIMR_Timer0_REG     (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_Timer0_REG     (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_Timer0_REG     (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_Timer0_REG     (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_Timer0_REG      (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_Timer0_REG    (*(u32 volatile*)(GPT_Timer0_BASE+GPT_GPTMTBILR_OFFSET))
	

/* timer1 reg */
#define GPT_GPTMIMR_Timer1_REG     (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_Timer1_REG     (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_Timer1_REG     (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_Timer1_REG     (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_Timer1_REG      (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_Timer1_REG    (*(u32 volatile*)(GPT_Timer1_BASE+GPT_GPTMTBILR_OFFSET))



/* timer2 reg */
#define GPT_GPTMIMR_Timer2_REG     (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_Timer2_REG     (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_Timer2_REG     (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_Timer2_REG     (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_Timer2_REG      (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_Timer2_REG    (*(u32 volatile*)(GPT_Timer2_BASE+GPT_GPTMTBILR_OFFSET))

	
/* timer3 reg */
#define GPT_GPTMIMR_Timer3_REG     (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_Timer3_REG     (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_Timer3_REG     (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_Timer3_REG     (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_Timer3_REG      (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_Timer3_REG    (*(u32 volatile*)(GPT_Timer3_BASE+GPT_GPTMTBILR_OFFSET))
	
/* timer4 reg */
#define GPT_GPTMIMR_Timer4_REG     (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_Timer4_REG     (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_Timer4_REG     (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_Timer4_REG     (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_Timer4_REG      (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_Timer4_REG    (*(u32 volatile*)(GPT_Timer4_BASE+GPT_GPTMTBILR_OFFSET))
	
/* timer5 reg */
#define GPT_GPTMIMR_Timer5_REG     (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_Timer5_REG     (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_Timer5_REG     (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_Timer5_REG     (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_Timer5_REG      (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_Timer5_REG    (*(u32 volatile*)(GPT_Timer5_BASE+GPT_GPTMTBILR_OFFSET))



/* WIDE timer0 reg */
#define GPT_GPTMIMR_WIDE_Timer0_REG     (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_WIDE_Timer0_REG     (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_WIDE_Timer0_REG     (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_WIDE_Timer0_REG     (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_WIDE_Timer0_REG    	 (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_WIDE_Timer0_REG    (*(u32 volatile*)(GPT_WIDE_Timer0_BASE+GPT_GPTMTBILR_OFFSET))


/* WIDE timer1 reg */
#define GPT_GPTMIMR_WIDE_Timer1_REG     (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_WIDE_Timer1_REG     (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_WIDE_Timer1_REG     (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_WIDE_Timer1_REG     (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_WIDE_Timer1_REG    	 (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_WIDE_Timer1_REG    (*(u32 volatile*)(GPT_WIDE_Timer1_BASE+GPT_GPTMTBILR_OFFSET))
	

/* WIDE timer2 reg */
#define GPT_GPTMIMR_WIDE_Timer2_REG     (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_WIDE_Timer2_REG     (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_WIDE_Timer2_REG     (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_WIDE_Timer2_REG     (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_WIDE_Timer2_REG    	 (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_WIDE_Timer2_REG    (*(u32 volatile*)(GPT_WIDE_Timer2_BASE+GPT_GPTMTBILR_OFFSET))
	

/* WIDE timer3 reg */
#define GPT_GPTMIMR_WIDE_Timer3_REG     (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_WIDE_Timer3_REG     (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_WIDE_Timer3_REG     (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_WIDE_Timer3_REG     (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_WIDE_Timer3_REG    	 (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_WIDE_Timer3_REG    (*(u32 volatile*)(GPT_WIDE_Timer3_BASE+GPT_GPTMTBILR_OFFSET))
	

/* WIDE timer4 reg */
#define GPT_GPTMIMR_WIDE_Timer4_REG     (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_WIDE_Timer4_REG     (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_WIDE_Timer4_REG     (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_WIDE_Timer4_REG     (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_WIDE_Timer4_REG    	 (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_WIDE_Timer4_REG    (*(u32 volatile*)(GPT_WIDE_Timer4_BASE+GPT_GPTMTBILR_OFFSET))
	

/* WIDE timer5 reg */
#define GPT_GPTMIMR_WIDE_Timer5_REG     (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMIMR_OFFSET))
#define GPT_GPTMCFG_WIDE_Timer5_REG     (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMCFG_OFFSET))
#define GPT_GPTMTAV_WIDE_Timer5_REG     (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTAV_OFFSET))
#define GPT_GPTMCTL_WIDE_Timer5_REG     (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMCTL_OFFSET))
#define GPT_GPTMTAMR_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTAMR_OFFSET))
#define GPT_GPTMTBMR_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTBMR_OFFSET))
#define GPT_GPTMTAPS_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTAPS_OFFSET))
#define GPT_GPTMTBPS_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTBPS_OFFSET))
#define GPT_GPTMTAPV_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTAPV_OFFSET))
#define GPT_GPTMTBPV_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTBPV_OFFSET))
#define GPT_GPTMPP_WIDE_Timer5_REG    	 (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMPP_OFFSET))
#define GPT_GPTMTAPR_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTAPR_OFFSET))
#define GPT_GPTMTBPR_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTBPR_OFFSET))
#define GPT_GPTMTBILR_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTAILR_OFFSET))
#define GPT_GPTMTAILR_WIDE_Timer5_REG    (*(u32 volatile*)(GPT_WIDE_Timer5_BASE+GPT_GPTMTBILR_OFFSET))


#endif /* Timers_Reg_H_ */

