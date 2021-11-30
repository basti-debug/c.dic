/*
 * led_steuerung_2.c
 *
 * Created: 24/11/2021 10:40:13
 * Author : basti
 */ 

#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	
	PORTC = 0x00;
	
	while(1)
	{
	PORTC ++;
	_delay_ms(500);
	}
}

