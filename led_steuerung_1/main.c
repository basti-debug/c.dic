/*
 * led_steuerung_1.c
 *
 * Created: 17/11/2021 10:32:13
 * Author : basti
 */ 

//#define F_CPU 12000000UL //Systemtakt 12MHz (Information für Delayfunktionen)
#include <avr/io.h> 
#include <util/delay.h>

int main(void)
{
    
	DDRC=0xFF; // LED-Port: Ausgang
	PORTC=0x0A; // LEDs 0,2,4,6 einschalten
	
	while (1) 
    {
		PORTC = ~PORTC; //alle Leds umschalten
		_delay_ms(200); //200ms warten
    }
} // Ende Arbeitsschleife

