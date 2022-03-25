/*
 * main.c
 *
 * Created: 3/24/2022 7:46:47 PM
 *  Author: basti
 */ 

#include <avr/io.h>
#define TEILER 10

ISR(INT1_vect){
	TCNT0++;
}

void start_pulsgenerator(void) //Timer1 als Frequenzgenerator verwenden
{
	DDRD = 1<<PD5; // Signalausgabe auf Pin OC1A(PD5)
	TCCR1B = 1<<CS10; // Normalmode, kH=1 ( => Signalfrequenz=91,554Hz)
	TCCR1A = 1<<COM1A0; // Ausgang OC1A(PD5) bei jeden Zählerüberlauf toggeln
}

int main(void)
{
	DDRD=0xFF;
	PORTD=0x00;
	DDRB=0x00;
	PORTB |= (1<<PB0);
	OCR0 = TEILER -1;
	start_pulsgenerator();
	MCUCR | (1<<ISC00) | (1<<ISC01);		//Interrupt auf steigende Flanke setzen
	TCCR0 |= (1<<CS02) | (1<<CS01)| (1<<COM00);		// Timer auf fallende Flanke setzen und auf CTC stellen
	TCCR0 &= (0<<CS00) & (0<<COM01);				// Timer auf fallende Flanke setzen und auf CTC stellen
	GICR |= (1<<INT0);
	sei(); //INT1 global freigeben
	
	
	/* Replace with your application code */
	while (1)
	{
		
	}
}

