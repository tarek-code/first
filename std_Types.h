/*
 * std_Types.h
 *
 *  Created on: Jun 22, 2022
 *      Author: lione
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

typedef unsigned char 		u8;
typedef signed char 		s8;
typedef short unsigned int 	u16;
typedef signed short int  	s16;
typedef unsigned long int  	u32;
typedef signed  long int	s32;
typedef float 				f32;
typedef double 				f64;


		typedef enum
		{
	FALSE,
	TRUE
		}boolean;
#define NULL          ((void *)0)
	#define WORD_LENGTH_BITS      32u
#define WORD_LENGTH_BYTES     4u
#endif /* STD_TYPES_H_ */
