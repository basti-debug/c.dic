/*
* Schleifentest_01.c
* Created: 17.12.2021
* Hardware: MEGACARD
* Zweck: Verwendung und Untersuchung einer Zählschleife
*/
#define F_CPU 12000000UL // verwendeter Systemtakt: 12MHz
#include <util/delay.h> // Delay-Funktionen einbinden (Systembibliothek)
#include <avr/io.h> // I/O Definitionen einbinden (Systembibliothek)
int main(void)
{
	//PORTKONFIGURATION:
	DDRC=0xFF; //				LED-Port: Ausgang
	PORTC=0x00; //alle LEDs ausschalten (default)
	for(;;) //Arbeitsschleife
	{
		for (unsigned char i=0; i<=8; i++) //lokale Deklaration der Laufvariablen i
		{
			PORTC=i; //Ausgabe der Laufvariablen auf die LEDs (Dualcode)
			_delay_ms(500); //0,5sec warten
		}
	}
}