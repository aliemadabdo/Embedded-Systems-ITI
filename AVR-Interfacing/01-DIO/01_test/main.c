/*
 * main.c
 *	LAB 1
 *  Created on: Aug 14, 2023
 *      Author: Ali Emad
 */

#include <avr\io.h>
#include "BIT_MATH.h"
#include <util/delay.h>

int main(void){
	SET_BIT(DDRA, PA0);  //DDRD |= (1<<PA0);

	SET_BIT(PORTA, PA0); //PORTA |= (1<<PA0);
	_delay_ms(1000);
	CLR_BIT(PORTA, PA0); //PORTA &= ~(1<<PA0);

	while(1);

	return 0;
}
