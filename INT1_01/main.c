/*
 * INT1_01.c
 *
 * Created: 28/01/2022 09:32:05
 * Author : basti
 */ 

#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
	PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
	DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
	PORTC=0x00;        //Alle LEDs ausschalten
	
	DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
	PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
	
	MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
	GICR |= (1<<INT1);     //INT1 individuell freigeben
	sei(); //INT1 global freigeben
	
	while (1)
	{
	}
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}h your application code */
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
#include <avr/io.h>                //Systembibliothek: IO-Deklarationen
#include <avr/interrupt.h>        //Sstembibliothek: Interrupt Deklaration

ISR(INT1_vect)
{
    PORTC++;  //LED-Status inkrementieren
}

int main(void)        //Hauptprogramm
{
    DDRC=0xFF;        //LED-Port: Alle Pins auf Ausgang
    PORTC=0x00;        //Alle LEDs ausschalten
    
    DDRD &= ~(1<<PD3);        //INT1-PIN auf Eingang (default)
    PORTD |= (1<<PD3);        //Pullup für INT1-Pin einschalten (für Tasteranbindung notwendig)
    
    MCUCR |= (1<<ISC11); //INT1 konfigurieren: fallende Flanke
    GICR |= (1<<INT1);     //INT1 individuell freigeben
    sei(); //INT1 global freigeben
    
    while (1) 
    {
    }
}
