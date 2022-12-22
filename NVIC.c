#include "NVIC_Interface.h"

const NVIC_CfgType NVIC_Configrations ={NVIC_16_32_TIMER_0_A,0,0};

NVIC_Cfg * Nvic_Interrupts =NULL;

void NVIC_Int(NVIC_CfgType *CfgPtr)
{
Nvic_Interrupts = CfgPtr->intrrupts;
	nvic_num intNum;
	u8 locGroup,locSubGroup,i,locGroupingField;
	u32 enRegOffset,enBitOffset,priRegOffset,priBitShifting;
	
	
	/*TODO COnfigure MODE for Grouping\SubGrouping System in APINT register in SCB*/
	
	APINT_REG = (VECTKEY_APPINT<<APINT_VECTKEY_SHIFTING) |
	        (NVIC_GROUPING_MODE<<PRIGROUP_SHIFTING);

	for(i=0;i< NVIC_ACTIVATED_INT_SIZE;i++)
	{
		intNum = Nvic_Interrupts[i].NVIC_Number;
		locGroup = Nvic_Interrupts[i].Group_Pri;
		locSubGroup = Nvic_Interrupts[i].Sub_Group_Pri;
		
		/*TODO : Enable\Disable based on user configurations in ENx Nvic Registers */
	
        /*NVIC_ENx Register*/
    enRegOffset = (intNum/WORD_LENGTH_BITS)*WORD_LENGTH_BYTES;
		enBitOffset = intNum%WORD_LENGTH_BITS;
		SET_BIT(GET_HWREG(Peripheral_BASE,enRegOffset),enBitOffset);
		
		/* Create Grouping Field */
#if (NVIC_GROUPING_MODE == MODE_XXX)
	      locGroupingField = locGroup;
#elif (NVIC_GROUPING_MODE == MODE_XXY) 
        locGroupingField = ((locGroup<<1)&0x6) | (locSubGroup&0x1);
#elif (NVIC_GROUPING_MODE == MODE_XYY) 
        locGroupingField = ((locGroup<<2)&0x4) | (locSubGroup&0x3);
#elif (NVIC_GROUPING_MODE == MODE_YYY) 
        locGroupingField = locSubGroup;
#else
     #error INVALID GROUPING SELECTION
#endif 	/*NVIC_GROUPING_MODE*/
		
		/*TODO : Assign Group\Subgroup priority in PRIx Nvic Registers*/
		
	    priRegOffset = (intNum / NVIC_REG_NUM_OF_PRI_FIELDS)*WORD_LENGTH_BYTES;
	   	priBitShifting = 5+((intNum % NVIC_REG_NUM_OF_PRI_FIELDS) * WORD_LENGTH_BYTES*2 );
			GET_HWREG(NVIC_PRI_BASE_ADDRESS,priRegOffset) |= (locGroupingField << priBitShifting);	
		
	}	
}