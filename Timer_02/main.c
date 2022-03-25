/*
 * main.c
 *
 * Created: 3/24/2022 7:45:58 PM
 *  Author: basti
 */ 

#define COUNT_MAX 23437                //TIMER0 Hardware-Vorteiler einstellen kh=1
#include <avr/io.h>                    // IO Pin Library
#include <avr/interrupt.h>            //Library für ISR (Interrupts)

static unsigned int count = 0;        //16 Bit variable statisch


int main(void)
{
	DDRC = 0xFF;                    //Alle LED pins auf ausgang
	PORTC = 0x00;                    //LED Ports konfigurieren und alle LEDs aus

	TCCR0 |= (1<<CS00);                //Hardware Vorteiler wird auf 1 gestellt
	TIMSK |= (1<<TOIE0);            //ISR wird ausgeführt bei Überlauf


	while (1)
	{
		while(!(TIFR&(1<<TOV0)))		//Interrupt-Flag abfragen
		{;}								//In Schleife bleiben
		TIFR|=0x01;
		count++;
		if(count>=23437)				//Software-Teiler
		{
			count=0;
			PORTC=~PORTC;				//LEDs umschalten
		}
	}
}