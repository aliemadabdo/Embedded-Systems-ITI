/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: aliemad
 */

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"

/* SEVEN SEGMENT TABLE */
#define ZERO 	0xC0  // 11000000
#define ONE 	0xF9  // 11111001
#define TWO 	0xA4  // 10100100
#define THREE 	0xB0  // 10110000
#define FOUR 	0x99  // 10011001
#define FIVE 	0x92  // 10010010
#define SIX 	0x82  // 10000010
#define SEVEN 	0xF8  // 11111000
#define EIGHT 	0x80  // 10000000
#define NINE 	0x90  // 10010000

int main(void){

	uint8_t seg[] = { ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE } ;

	while(1){
		DDRA |= 0b00000111;

		DDRC  = 0xff;
		PORTC = 0xff;

		DDRD  = 0xff;
		PORTD = 0xff;

		SET_BIT(PORTA, PA0);


		for (int i = 9; i>3; i--){
			PORTC = seg[i];
			_delay_ms(1000);
		}

		PORTC = seg[3];
		SET_BIT(PORTA, PA1);

		_delay_ms(500);
		CLR_BIT(PORTA, PA1);
		_delay_ms(500);

		PORTC = seg[2];
		SET_BIT(PORTA, PA1);

		_delay_ms(500);
		CLR_BIT(PORTA, PA1);
		_delay_ms(500);

		PORTC = seg[1];
		SET_BIT(PORTA, PA1);
		_delay_ms(1000);

		PORTC = seg[0];

		PORTC = 0xff;
		CLR_BIT(PORTA, PA0);
		CLR_BIT(PORTA, PA1);

		SET_BIT(PORTA, PA2);
		for (int i = 9; i>0; i--){
			PORTD = seg[i];
			_delay_ms(1000);
		}

		CLR_BIT(PORTA, PA2);
	}

	return 0;
}
