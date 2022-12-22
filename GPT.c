#include "GPT_Interface.h"

void GPT_Int( t_mode mode ,timer_type type , t_counts counts,t_interrupt interrupt)
{

	switch(type)
	{
	
		case TIMER0_A_16:
			
		
  // enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
		/* Interval Load */
		GPT_GPTMTAILR_Timer0_REG=200&0xFFFF;
		
		// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer0_REG,TAEN);
		
		
		
		
		// make it individual mode
		GPT_GPTMCFG_Timer0_REG=0x4;
		
		
		
		
		/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_Timer0_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTAMR_Timer0_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_Timer0_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_Timer0_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_GPTMTAMR_Timer0_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_Timer0_REG,7);
			
			// Controlling Interuppt Via Match Interrupt Enable
			SET_BIT(GPT_GPTMTAMR_Timer0_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
								GPT_GPTMTAMR_Timer0_REG=0x2;
		// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer0_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER0_A_32:
			
		
		
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
		
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer0_REG,TAEN);
		
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer0_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_WIDE_Timer0_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer0_REG,5);

			break;
		}
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer0_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_WIDE_Timer0_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTAMR_WIDE_Timer0_REG=0x0;
			
			
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_WIDE_Timer0_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer0_REG,7);
								GPT_GPTMTAMR_WIDE_Timer0_REG=0x2;
			
			
	// choosing counts up or down 
		
			break;
		}
			/* Interval Load */
		GPT_GPTMTAILR_Timer0_REG=200&0xFFFF;
		break;
		
		case TIMER0_B_16:
			
		// enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer0_REG,TBEN);
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer0_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTBPR_Timer0_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_Timer0_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_Timer0_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_Timer0_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_Timer0_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_Timer0_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer0_REG,7);
								GPT_GPTMTBMR_Timer0_REG=0x2;
	
			break;
		}
		break;
			/* Interval Load */
		GPT_GPTMTBILR_Timer0_REG=200&0xFFFF;
		case TIMER0_B_32:
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer0_REG,TBEN);
				// make it individual mode
		GPT_GPTMCFG_Timer0_REG=0x4;
						// Prescaler 0xFF for 256 ticks, 209.7152ms Max Time 
		GPT_GPTMTBPR_WIDE_Timer0_REG=0xFFFF;
		// interval load 
		GPT_GPTMTAILR_Timer0_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_WIDE_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_WIDE_Timer0_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer0_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_WIDE_Timer0_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_WIDE_Timer0_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_WIDE_Timer0_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer0_REG,7);
								GPT_GPTMTBMR_WIDE_Timer0_REG=0x2;
	
			break;
		}
		break;
		
		
		case TIMER1_A_16:
			
		
  // enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
		// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer1_REG,TAEN);
		
		
		
		
		// make it individual mode
		GPT_GPTMCFG_Timer1_REG=0x4;
		
		
		
		
		/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_Timer1_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTAMR_Timer1_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_Timer1_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_Timer1_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_GPTMTAMR_Timer0_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_Timer1_REG,7);
			
			// Controlling Interuppt Via Match Interrupt Enable
			SET_BIT(GPT_GPTMTAMR_Timer1_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
								GPT_GPTMTAMR_Timer1_REG=0x2;
		// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer1_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER1_A_32:
			
		
		
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
		
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer1_REG,TAEN);
		
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer0_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_WIDE_Timer1_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer1_REG,5);

			break;
		}
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer1_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_WIDE_Timer1_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTAMR_WIDE_Timer1_REG=0x0;
			
			
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_WIDE_Timer1_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer1_REG,7);
								GPT_GPTMTAMR_WIDE_Timer1_REG=0x2;
			
			
	// choosing counts up or down 
		
			break;
		}
		
		break;
		
		case TIMER1_B_16:
			
		// enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer1_REG,TBEN);
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer1_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTBPR_Timer1_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_Timer1_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_Timer1_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_Timer1_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_Timer1_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_Timer1_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer1_REG,7);
								GPT_GPTMTBMR_Timer1_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER1_B_32:
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer1_REG,TBEN);
				// make it individual mode
		GPT_GPTMCFG_Timer1_REG=0x4;
						// Prescaler 0xFF for 256 ticks, 209.7152ms Max Time 
		GPT_GPTMTBPR_WIDE_Timer1_REG=0xFFFF;
		// interval load 
		GPT_GPTMTAILR_WIDE_Timer1_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_WIDE_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_WIDE_Timer1_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer1_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_WIDE_Timer1_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_WIDE_Timer1_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_WIDE_Timer1_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer1_REG,7);
								GPT_GPTMTBMR_WIDE_Timer1_REG=0x2;
	
			break;
		}
		break;
		case TIMER2_A_16:
			
		
  // enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
		
		
		// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer2_REG,TAEN);
		
		
		
		
		// make it individual mode
		GPT_GPTMCFG_Timer2_REG=0x4;
		
		
		
		
		/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_Timer2_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTAMR_Timer2_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_Timer2_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_Timer2_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_GPTMTAMR_Timer2_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_Timer2_REG,7);
			
			// Controlling Interuppt Via Match Interrupt Enable
			SET_BIT(GPT_GPTMTAMR_Timer2_REG,5);
			
			
		
			break;
			
			case CONTINUOUS_MODE:
								GPT_GPTMTAMR_Timer2_REG=0x2;
		// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer2_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER2_A_32:
			
		
		
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
		
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer2_REG,TAEN);
		
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer2_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_WIDE_Timer2_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer2_REG,5);

			break;
		}
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer2_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_WIDE_Timer2_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTAMR_WIDE_Timer2_REG=0x0;
			
			
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_WIDE_Timer2_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer2_REG,7);
			GPT_GPTMTAMR_WIDE_Timer2_REG=0x2;
			
			
	// choosing counts up or down 
		
			break;
		}
		
		break;
		
		case TIMER2_B_16:
			
		// enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer2_REG,TBEN);
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer2_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTBPR_Timer2_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_Timer2_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_Timer2_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_Timer2_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_Timer2_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_Timer2_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer2_REG,7);
								GPT_GPTMTBMR_Timer2_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER2_B_32:
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer2_REG,TBEN);
				// make it individual mode
		GPT_GPTMCFG_Timer2_REG=0x4;
						// Prescaler 0xFF for 256 ticks, 209.7152ms Max Time 
		GPT_GPTMTBPR_WIDE_Timer2_REG=0xFFFF;
		// interval load 
		GPT_GPTMTAILR_Timer2_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_WIDE_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_WIDE_Timer2_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer2_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_WIDE_Timer2_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_WIDE_Timer2_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_WIDE_Timer2_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer2_REG,7);
			GPT_GPTMTBMR_WIDE_Timer2_REG=0x2;
	
			break;
		}
		break;
		case TIMER3_A_16:
			
		
  // enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
		
		
		// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer3_REG,TAEN);
		
		
		
		
		// make it individual mode
		GPT_GPTMCFG_Timer3_REG=0x4;
		
		
		
		
		/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_Timer3_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTAMR_Timer3_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_Timer3_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_Timer3_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_GPTMTAMR_Timer3_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_Timer3_REG,7);
			
			// Controlling Interuppt Via Match Interrupt Enable
			SET_BIT(GPT_GPTMTAMR_Timer3_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
								GPT_GPTMTAMR_Timer3_REG=0x2;
		// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer3_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER3_A_32:
			
		
		
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
		
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer3_REG,TAEN);
		
		
		
				// make it individual mode
		GPT_GPTMCFG_WIDE_Timer3_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_WIDE_Timer3_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer3_REG,5);

			break;
		}
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer3_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_WIDE_Timer3_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTAMR_WIDE_Timer3_REG=0x0;
			
			
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_WIDE_Timer3_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer3_REG,7);
								GPT_GPTMTAMR_WIDE_Timer3_REG=0x2;
			
			
	// choosing counts up or down 
		
			break;
		}
		
		break;
		
		case TIMER3_B_16:
			
		// enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer3_REG,TBEN);
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer3_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTBPR_Timer3_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_Timer3_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_Timer3_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_Timer3_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_Timer3_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_Timer3_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer3_REG,7);
								GPT_GPTMTBMR_Timer3_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER3_B_32:
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer3_REG,TBEN);
				// make it individual mode
		GPT_GPTMCFG_Timer3_REG=0x4;
						// Prescaler 0xFF for 256 ticks, 209.7152ms Max Time 
		GPT_GPTMTBPR_WIDE_Timer3_REG=0xFFFF;
		// interval load 
		GPT_GPTMTAILR_WIDE_Timer3_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_WIDE_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_WIDE_Timer3_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer3_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_WIDE_Timer3_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_WIDE_Timer3_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_WIDE_Timer3_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer3_REG,7);
								GPT_GPTMTBMR_WIDE_Timer3_REG=0x2;
	
			break;
		}
		break;
		case TIMER4_A_16:
			
		
  // enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
		
		
		// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer4_REG,TAEN);
		
		
		
		
		// make it individual mode
		GPT_GPTMCFG_Timer4_REG=0x4;
		
		
		
		
		/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_Timer4_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTAMR_Timer4_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_Timer4_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_Timer4_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_GPTMTAMR_Timer4_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_Timer4_REG,7);
			
			// Controlling Interuppt Via Match Interrupt Enable
			SET_BIT(GPT_GPTMTAMR_Timer4_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
								GPT_GPTMTAMR_Timer4_REG=0x2;
		// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer4_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER4_A_32:
			
		
		
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
		
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer4_REG,TAEN);
		
		
		
				// make it individual mode
		GPT_GPTMCFG_WIDE_Timer4_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_WIDE_Timer4_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer4_REG,5);

			break;
		}
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer4_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_WIDE_Timer4_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTAMR_WIDE_Timer4_REG=0x0;
			
			
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_WIDE_Timer4_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer4_REG,7);
								GPT_GPTMTAMR_WIDE_Timer4_REG=0x2;
			
			
	// choosing counts up or down 
		
			break;
		}
		
		break;
		
		case TIMER4_B_16:
			
		// enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer4_REG,TBEN);
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer4_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTBPR_Timer4_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_Timer4_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_Timer4_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_Timer4_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_Timer4_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_Timer4_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer4_REG,7);
								GPT_GPTMTBMR_Timer4_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER4_B_32:
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer4_REG,TBEN);
				// make it individual mode
		GPT_GPTMCFG_WIDE_Timer4_REG=0x4;
						// Prescaler 0xFF for 256 ticks, 209.7152ms Max Time 
		GPT_GPTMTBPR_WIDE_Timer4_REG=0xFFFF;
		// interval load 
		GPT_GPTMTAILR_WIDE_Timer4_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_WIDE_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_WIDE_Timer4_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer4_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_WIDE_Timer4_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_WIDE_Timer4_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_WIDE_Timer4_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer4_REG,7);
								GPT_GPTMTBMR_WIDE_Timer4_REG=0x2;
	
			break;
		}
		break;
		case TIMER5_A_16:
			
		
  // enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
		
		
		// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer5_REG,TAEN);
		
		
		
		
		// make it individual mode
		GPT_GPTMCFG_Timer5_REG=0x4;
		
		
		
		
		/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_Timer5_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTAMR_Timer5_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_Timer5_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_Timer5_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_GPTMTAMR_Timer5_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_Timer5_REG,7);
			
			// Controlling Interuppt Via Match Interrupt Enable
			SET_BIT(GPT_GPTMTAMR_Timer5_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
								GPT_GPTMTAMR_Timer5_REG=0x2;
		// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_Timer5_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER5_A_32:
			
		
		
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
		
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer5_REG,TAEN);
		
		
		
				// make it individual mode
		GPT_GPTMCFG_WIDE_Timer5_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTAPR_WIDE_Timer5_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_GPTMTAMR_WIDE_Timer5_REG,5);

			break;
		}
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer5_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTAMR_WIDE_Timer5_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTAMR_WIDE_Timer5_REG=0x0;
			
			
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			SET_BIT(GPT_GPTMTAMR_WIDE_Timer5_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTAMR_WIDE_Timer5_REG,7);
								GPT_GPTMTAMR_WIDE_Timer5_REG=0x2;
			
			
	// choosing counts up or down 
		
			break;
		}
		
		break;
		
		case TIMER5_B_16:
			
		// enable clock to the register  in timer0
		SET_BIT(RCGCTIMER_Reg,0);
		
		
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_Timer5_REG,TBEN);
		
		
				// make it individual mode
		GPT_GPTMCFG_Timer5_REG=0x4;
		
		
				/* Prescaler 0xFF for 256 ticks, 209.7152ms Max Time */
		GPT_GPTMTBPR_Timer5_REG=0xFF;
		
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_Timer5_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_Timer5_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_Timer5_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_Timer5_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_Timer5_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_Timer5_REG,7);
								GPT_GPTMTBMR_Timer5_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER5_B_32:
			// enable clock to the register  in timer0
		SET_BIT(RCGCWTIMER_Reg,0);
			// disable the timer
		CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer5_REG,TBEN);
				// make it individual mode
		GPT_GPTMCFG_WIDE_Timer5_REG=0x4;
						// Prescaler 0xFF for 256 ticks, 209.7152ms Max Time 
		GPT_GPTMTBPR_WIDE_Timer5_REG=0xFFFF;
		// interval load 
		GPT_GPTMTAILR_WIDE_Timer5_REG=0xFFFF;
		
		// choosing inturrept 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_GPTMTBMR_WIDE_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_GPTMTBMR_WIDE_Timer5_REG,5);

			break;
		}
		
		// choosing counts up or down
			switch (counts)
			{
				case COUNTS_UP:
					CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer5_REG,4);
				break;
				
				case COUNTS_DOWN:
					SET_BIT(GPT_GPTMTBMR_WIDE_Timer5_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_GPTMTBMR_WIDE_Timer0_REG=0x0;
			// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			
			SET_BIT(GPT_GPTMTBMR_WIDE_Timer0_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
				// Controlling Snapchot via Snapshot Mode Bit in Mode Register
			CLEAR_BIT(GPT_GPTMTBMR_WIDE_Timer5_REG,7);
								GPT_GPTMTBMR_WIDE_Timer5_REG=0x2;
	
			break;
		}
		break;
				
	}


}

void GPT_Notification_Disable(timer_type type)
{

	switch (type)
	{
		case TIMER0_A_16:
			// clear match intrerrupt 
			CLEAR_BIT(GPT_GPTMIMR_Timer0_REG,4);
			break;
		
		case TIMER0_A_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer0_REG,4);
		break;
		case TIMER0_B_16:
			CLEAR_BIT(GPT_GPTMIMR_Timer0_REG,11);
		break;
		
		case TIMER0_B_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer0_REG,11);
		break;
		case TIMER1_A_16:
			// clear match intrerrupt 
			CLEAR_BIT(GPT_GPTMIMR_Timer1_REG,4);
			break;
		
		case TIMER1_A_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer1_REG,4);
		break;
		case TIMER1_B_16:
			CLEAR_BIT(GPT_GPTMIMR_Timer1_REG,11);
		break;
		
		case TIMER1_B_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer1_REG,11);
		break;
		case TIMER2_A_16:
			// clear match intrerrupt 
			CLEAR_BIT(GPT_GPTMIMR_Timer2_REG,4);
			break;
		
		case TIMER2_A_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer2_REG,4);
		break;
		case TIMER2_B_16:
			CLEAR_BIT(GPT_GPTMIMR_Timer2_REG,11);
		break;
		
		case TIMER2_B_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer2_REG,11);
		break;
		case TIMER3_A_16:
			// clear match intrerrupt 
			CLEAR_BIT(GPT_GPTMIMR_Timer3_REG,4);
			break;
		
		case TIMER3_A_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer3_REG,4);
		break;
		case TIMER3_B_16:
			CLEAR_BIT(GPT_GPTMIMR_Timer3_REG,11);
		break;
		
		case TIMER3_B_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer3_REG,11);
		break;
		case TIMER4_A_16:
			// clear match intrerrupt 
			CLEAR_BIT(GPT_GPTMIMR_Timer4_REG,4);
			break;
		
		case TIMER4_A_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer4_REG,4);
		break;
		case TIMER4_B_16:
			CLEAR_BIT(GPT_GPTMIMR_Timer4_REG,11);
		break;
		
		case TIMER4_B_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer4_REG,11);
		break;
		case TIMER5_A_16:
			// clear match intrerrupt 
			CLEAR_BIT(GPT_GPTMIMR_Timer5_REG,4);
			break;
		
		case TIMER5_A_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer5_REG,4);
		break;
		case TIMER5_B_16:
			CLEAR_BIT(GPT_GPTMIMR_Timer5_REG,11);
		break;
		
		case TIMER5_B_32:
			CLEAR_BIT(GPT_GPTMIMR_WIDE_Timer5_REG,11);
		break;
	
	}		
		
}	
	void GPT_Notification_Enable(timer_type type)
{
switch (type)
	{
		case TIMER0_A_16:
			// clear match intrerrupt 
			CLEAR_BIT(GPT_GPTMIMR_Timer0_REG,4);
			break;
		
		case TIMER0_A_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer0_REG,4);
		break;
		case TIMER0_B_16:
			SET_BIT(GPT_GPTMIMR_Timer0_REG,11);
		break;
		
		case TIMER0_B_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer0_REG,11);
		break;
		case TIMER1_A_16:
			// clear match intrerrupt 
			SET_BIT(GPT_GPTMIMR_Timer1_REG,4);
			break;
		
		case TIMER1_A_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer1_REG,4);
		break;
		case TIMER1_B_16:
			SET_BIT(GPT_GPTMIMR_Timer1_REG,11);
		break;
		
		case TIMER1_B_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer1_REG,11);
		break;
		case TIMER2_A_16:
			// clear match intrerrupt 
			SET_BIT(GPT_GPTMIMR_Timer2_REG,4);
			break;
		
		case TIMER2_A_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer2_REG,4);
		break;
		case TIMER2_B_16:
			SET_BIT(GPT_GPTMIMR_Timer2_REG,11);
		break;
		
		case TIMER2_B_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer2_REG,11);
		break;
		case TIMER3_A_16:
			// clear match intrerrupt 
			SET_BIT(GPT_GPTMIMR_Timer3_REG,4);
			break;
		
		case TIMER3_A_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer3_REG,4);
		break;
		case TIMER3_B_16:
			SET_BIT(GPT_GPTMIMR_Timer3_REG,11);
		break;
		
		case TIMER3_B_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer3_REG,11);
		break;
		case TIMER4_A_16:
			// clear match intrerrupt 
			SET_BIT(GPT_GPTMIMR_Timer4_REG,4);
			break;
		
		case TIMER4_A_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer4_REG,4);
		break;
		case TIMER4_B_16:
			SET_BIT(GPT_GPTMIMR_Timer4_REG,11);
		break;
		
		case TIMER4_B_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer4_REG,11);
		break;
		case TIMER5_A_16:
			// clear match intrerrupt 
			SET_BIT(GPT_GPTMIMR_Timer5_REG,4);
			break;
		
		case TIMER5_A_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer5_REG,4);
		break;
		case TIMER5_B_16:
			SET_BIT(GPT_GPTMIMR_Timer5_REG,11);
		break;
		
		case TIMER5_B_32:
			SET_BIT(GPT_GPTMIMR_WIDE_Timer5_REG,11);
		break;
	
	}		
}



void Gpt_Timer_Start(timer_type type, u32 value)
{
switch (type)
{
	case TIMER0_A_16:
		SET_BIT(GPT_GPTMCTL_Timer0_REG,0);
	GPT_GPTMTAILR_Timer0_REG=value&0xFFFF;
	break;
	
	case TIMER0_A_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer0_REG,0);
	GPT_GPTMTAILR_WIDE_Timer0_REG=value&0xFFFF;
	break;
	
	case TIMER0_B_16:
				SET_BIT(GPT_GPTMCTL_Timer0_REG,8);
	GPT_GPTMTBILR_Timer0_REG=value&0xFFFF;
	break;
	case TIMER0_B_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer0_REG,8);
	GPT_GPTMTBILR_WIDE_Timer0_REG=value&0xFFFF;
	break;
		case TIMER1_A_16:
		SET_BIT(GPT_GPTMCTL_Timer1_REG,0);
	GPT_GPTMTAILR_Timer1_REG=value&0xFFFF;
	break;
	
	case TIMER1_A_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer1_REG,0);
	GPT_GPTMTAILR_WIDE_Timer1_REG=value&0xFFFF;
	break;
	
	case TIMER1_B_16:
				SET_BIT(GPT_GPTMCTL_Timer1_REG,8);
	GPT_GPTMTBILR_Timer1_REG=value&0xFFFF;
	break;
	case TIMER1_B_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer1_REG,8);
	GPT_GPTMTBILR_WIDE_Timer1_REG=value&0xFFFF;
	break;
		case TIMER2_A_16:
		SET_BIT(GPT_GPTMCTL_Timer2_REG,0);
	GPT_GPTMTAILR_Timer2_REG=value&0xFFFF;
	break;
	
	case TIMER2_A_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer2_REG,0);
	GPT_GPTMTAILR_WIDE_Timer2_REG=value&0xFFFF;
	break;
	
	case TIMER2_B_16:
				SET_BIT(GPT_GPTMCTL_Timer2_REG,8);
	GPT_GPTMTBILR_Timer2_REG=value&0xFFFF;
	break;
	case TIMER2_B_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer2_REG,8);
	GPT_GPTMTBILR_WIDE_Timer2_REG=value&0xFFFF;
	break;
		case TIMER3_A_16:
		SET_BIT(GPT_GPTMCTL_Timer3_REG,0);
	GPT_GPTMTAILR_Timer3_REG=value&0xFFFF;
	break;
	
	case TIMER3_A_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer3_REG,0);
	GPT_GPTMTAILR_WIDE_Timer3_REG=value&0xFFFF;
	break;
	
	case TIMER3_B_16:
				SET_BIT(GPT_GPTMCTL_Timer3_REG,8);
	GPT_GPTMTBILR_Timer3_REG=value&0xFFFF;
	break;
	case TIMER3_B_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer3_REG,8);
	GPT_GPTMTBILR_WIDE_Timer3_REG=value&0xFFFF;
	break;
		case TIMER4_A_16:
		SET_BIT(GPT_GPTMCTL_Timer4_REG,0);
	GPT_GPTMTAILR_Timer4_REG=value&0xFFFF;
	break;
	
	case TIMER4_A_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer4_REG,0);
	GPT_GPTMTAILR_WIDE_Timer4_REG=value&0xFFFF;
	break;
	
	case TIMER4_B_16:
				SET_BIT(GPT_GPTMCTL_Timer4_REG,8);
	GPT_GPTMTBILR_Timer4_REG=value&0xFFFF;
	break;
	case TIMER4_B_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer4_REG,8);
	GPT_GPTMTBILR_WIDE_Timer4_REG=value&0xFFFF;
	break;
		case TIMER5_A_16:
		SET_BIT(GPT_GPTMCTL_Timer5_REG,0);
	GPT_GPTMTAILR_Timer5_REG=value&0xFFFF;
	break;
	
	case TIMER5_A_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer5_REG,0);
	GPT_GPTMTAILR_WIDE_Timer5_REG=value&0xFFFF;
	break;
	
	case TIMER5_B_16:
				SET_BIT(GPT_GPTMCTL_Timer5_REG,8);
	GPT_GPTMTBILR_Timer5_REG=value&0xFFFF;
	break;
	case TIMER5_B_32:
				SET_BIT(GPT_GPTMCTL_WIDE_Timer5_REG,8);
	GPT_GPTMTBILR_WIDE_Timer5_REG=value&0xFFFF;
	break;
}
}

void Gpt_Timer_Stop(timer_type type)
{
switch (type)
{
	case TIMER0_A_16:
		CLEAR_BIT(GPT_GPTMCTL_Timer0_REG,0);
	
	break;
	
	case TIMER0_A_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer0_REG,0);
	break;
	
	case TIMER0_B_16:
				CLEAR_BIT(GPT_GPTMCTL_Timer0_REG,8);
	break;
	case TIMER0_B_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer0_REG,8);
	break;
		case TIMER1_A_16:
		CLEAR_BIT(GPT_GPTMCTL_Timer1_REG,0);
	break;
	
	case TIMER1_A_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer1_REG,0);
	break;
	
	case TIMER1_B_16:
				CLEAR_BIT(GPT_GPTMCTL_Timer1_REG,8);
	break;
	case TIMER1_B_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer1_REG,8);
	break;
		case TIMER2_A_16:
		CLEAR_BIT(GPT_GPTMCTL_Timer2_REG,0);
	break;
	
	case TIMER2_A_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer2_REG,0);
	break;
	
	case TIMER2_B_16:
				CLEAR_BIT(GPT_GPTMCTL_Timer2_REG,8);
	break;
	case TIMER2_B_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer2_REG,8);
	break;
		case TIMER3_A_16:
		CLEAR_BIT(GPT_GPTMCTL_Timer3_REG,0);
	break;
	
	case TIMER3_A_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer3_REG,0);
	break;
	
	case TIMER3_B_16:
				CLEAR_BIT(GPT_GPTMCTL_Timer3_REG,8);
	break;
	case TIMER3_B_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer3_REG,8);
	break;
		case TIMER4_A_16:
		CLEAR_BIT(GPT_GPTMCTL_Timer4_REG,0);
	break;
	
	case TIMER4_A_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer4_REG,0);
	break;
	
	case TIMER4_B_16:
				CLEAR_BIT(GPT_GPTMCTL_Timer4_REG,8);
	break;
	case TIMER4_B_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer4_REG,8);
	break;
		case TIMER5_A_16:
		CLEAR_BIT(GPT_GPTMCTL_Timer5_REG,0);
	break;
	
	case TIMER5_A_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer5_REG,0);
	break;
	
	case TIMER5_B_16:
				CLEAR_BIT(GPT_GPTMCTL_Timer5_REG,8);
	break;
	case TIMER5_B_32:
				CLEAR_BIT(GPT_GPTMCTL_WIDE_Timer5_REG,8);
	break;
}
}



