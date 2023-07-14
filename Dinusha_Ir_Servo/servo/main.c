/*
 * servo.c
 *
 * Created: 6/6/2022 9:02:45 PM
 * Author : dinusha
 */ 

#include <avr/io.h>
#include "util/delay.h"
void vacum(short angle){
	switch(angle){
		case -90:
		PORTC=0b00001000;
		_delay_us(1000);
		PORTC=0x00;
		_delay_us(19000);
		break;
		case 0:
		PORTC=0b00001000;
		_delay_us(1500);
		PORTC=0x00;
		_delay_us(18500);
		break;
		case 90:
		PORTC=0b00001000;
		_delay_us(2000);
		PORTC=0x00;
		_delay_us(18000);
		break;
		case 180:
		PORTC=0b00001000;
		_delay_us(2500);
		PORTC=0x00;
		_delay_us(17500);
		break;
		default:
		break;
	}
}

int main(void)
{
   DDRC=0b00011111; 
    while (1) 
    {
		vacum(90);
		_delay_ms(1000);
		vacum(0);
		_delay_ms(1000);
		
    }
}

