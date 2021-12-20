/*
 * Tasterprellen_02.c
 *
 * Created: 15/12/2021 10:48:34
 * Author : basti
 * Hardware: MEGACARD
 * Zweck: Detektion von Tasterereignissen 
 *		  MIT softwarem‰ﬂiger Tastenprellung 
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 12000000UL
#define TASTER PA0  // PA0 = Taster S0

int main(void)
{
	DDRA=0x00;  // Led Port konfigurieren
	PORTA=0x0F; // Taster Port konfigurieren - pullup aktiviert
	DDRC=0xFF;  // Led Port konfigurieren
	PORTC=1<<PC0; // erste LED an alle anderen aus
	
	while(1)
	{
		if (!(PINA & (1<<TASTER))) 					// Abfrage ob Taster gedr¸ckt wird
		{
			PORTC = (PORTC<<1) | (PORTC>>7);       // rotiert damit n‰chste LED leuchtet
			while(!(PINA & (1<<TASTER))) {;};	   // wenn nicht gedr¸ckt bleibt das Programm hier h‰ngen
			_delay_ms(10);
		}
	}
}