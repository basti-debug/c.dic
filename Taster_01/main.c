/*
 * Taster_01.c
 *
 * Created: 26.11.2021 10:23:38
 * Author : joelr
 * Hardware: MEGACARD
 * Einstellungen: Jumper X9 geschlossen
 * Funktion: LED0 einschalten, falls S0 gedrückt (S0 gschlossen)
 * LED0 ausschalten, falls S1 gedrückt (S1 gschlossen)
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA=0x00;	//Taster-Port = Eingang
    PORTA=0x03; //Pullups aktiveren
	DDRC=0x01;  //
	PORTC=0x00;
    while (1) 
    {
		if (!(PINA&0x01)) //Wenn Taster S0 gedrückt
		{ PORTC=0x01;	  //LED0 einschalten
		}
		if (!(PINA&0x02)) //Wenn Taster S1 gedrückt
		{ PORTC=0x00;	  //LED0 ausschalten
		}
    }
}

