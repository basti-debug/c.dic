/*
 * main.c
 *
 * Created: 3/24/2022 7:44:27 PM
 *  Author: basti
 *
 * Funktion: Synchrones Blinken aller LEDs mit Blinkperiode 1sec
 * Verwendung von Timer0 Overflow Interrupt und Software-Vorteiler
 * Interruptgesteuerte Abarbeitung
 * Gewählte Teilungsfaktoren: kH=1 (Hardware Vorteiler)
 * kS=23437 (Software-Vorteiler)
 */ 


#define COUNT_MAX 23437                //TIMER0 Hardware-Vorteiler einstellen kh=1
#include <avr/io.h>                    // IO Pin Library
#include <avr/interrupt.h>            //Library für ISR (Interrupts)

static unsigned int count = 0;        //16 Bit variable statisch

ISR(TIMER0_OVF_vect)                //ISR Unterprogramm
{
	count++;                        // 16Bit variable wird inkrementiert
	if (count >= COUNT_MAX)            // wenn count die Symbolkonstante erreicht wurde.
	{
		count = 0;                    // variable wieder auf 0 falls count == symbolkonstante
		PORTC = ~PORTC;                // Alle LEDs invertieren
	}
}

int main(void)                        //Hauptprogramm
{
	DDRC = 0xFF;                    //Alle LEDs auf ausgang
	PORTC = 0x00;                    //LED Ports konfigurieren und alle LEDs aus

	TCCR0 |= (1<<CS00);                //Hardware Vorteiler wird auf 1 gestellt
	TIMSK |= (1<<TOIE0);            //ISR wird ausgeführt bei Überlauf

	sei(); //Interrupt global freigeben

	while (1) //Arbeitsschleife ohne Aufgabe
	{
	}

}