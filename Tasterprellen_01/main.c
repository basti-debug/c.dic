/*
 * Tasterprellen_01.c
 * Created: 10.12.2021
 * Author: Harry
 * Hardware: MEGACARD
 * Zweck: Detektion von Tasterereignissen
 *        OHNE Tasterentprellung
 */ 

#include <avr/io.h>
#define TASTER PA3  // PA0 = Taster S0
                   
int main(void)
{
  DDRA=0x00;  // Led Port konfigurieren  
  PORTA=0x0F; // Taster Port konfigurieren - pullup aktiviert
  DDRC=0xFF;  // Led Port konfigurieren
  PORTC=1<<PC0; // erste LED an alle anderen aus
  
 	while(1) 
	{ 
		if (!(PINA & (1<<TASTER))) 					// Abfrage ob Taster gedrückt wird
		{ 
			PORTC = (PORTC<<1) | (PORTC>>7);       // rotiert damit nächste LED leuchtet
			while(!(PINA & (1<<TASTER))) {;}	   // wenn nicht gedrückt bleibt das Programm hier hängen
		} 
	} 
} 