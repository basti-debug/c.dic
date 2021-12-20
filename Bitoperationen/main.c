/*
* Bitoperationen.c
* Created: 26.9.2017
* Zweck: Verwendung des Simulators zur Programmanalyse
* Einstellungen: Projekt-Properties: Optimization "None (-O0)"
* Solution Explorer: "Set as StartUp Project"
*/
#include <avr/io.h> //I/O-Systembibliothek einbinden
volatile unsigned char x,y; //globale Variablen; Speicherklasse "volatile"
volatile signed char z=-10; //...(in SRAM angelegt ; nicht wegoptimierbar)
volatile unsigned int neu = 1000;

int main(void) {
// Vorbelegung der Variablenwerte (Defaultwerte=0)
	DDRA = 0xF0; //Datenrichtungs-Register für PortA (SFR)	
	x=0xAB; //SRAM Speicherzelle
	y=0x01;
	
	while(1) //Arbeitsschleife
	{
	DDRA ^= 0xff; // 1-komplement (Alle Datenrichtungen von PortA umkehren)
	x ^= 0xff; // 1-komplement (bitweises invertieren)
	y <<= 1; // 1 bit logisch nach links schieben
	z >>= 1; // 1 bit arithmetisch nach rechts schieben
	neu += 2;
	}
}