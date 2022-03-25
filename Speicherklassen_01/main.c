/*
 * Speicherklassen_01.c
 *
 * Created: 14.1.2021
 * Author: basti
 *
 * Zweck: Untersuchung von lokalen u. globalen Variablen sowie
 *        unterschiedlicher Speicherklassen mittels Simulator
 * Einstellungen: Project Properties - Optimization "None (-O0)"
 *                Solution Explorer: "Set as StartUp Project"
 */ 

#include <avr/io.h>

unsigned char a_global;    // global, statisch im SRAM angelegt, Startwert=0 (default)
volatile unsigned char x;  // global, statisch im SRAM angelegt, Startwert=0 (default)
                           // ...wird vom Compiler nie wegoptimiert (wegen Attribut 'volatile') 

void test (void) // Deklaration der Funktion "test()"
{ //Beginn Block "test"
  //unsigned char x=0; //Variablenvereinbahrung nicht statisch -> undefinierter Defaultwert
   unsigned char x=0; // Zählvariable, lokal nur in Block "test" gültig; 
                          // ...statisch im SRAM angelegt -> Startwert=0 (default)
                          // ...Inhalt von x bleibt nach Ausstieg aus test() erhalten

  a_global=0xee;   // globale Variable modifizieren und in SRAM ablegen
  PORTB = ++x;       // ...x inkrementieren und in SRAM ablegen (x lokal vereinbart!)
                   // ...neuen Wert von x in Ausgaberegister "PORTB" ablegen
} //Ende Block "test"

int main(void)    // Beginn Block "main" 
{ 
  while(1) // Beginn Block "Arbeitschleife"
  { 
    a_global=1; // globale Variable "a_global" ändern
    
    test();    // Funktionsaufruf ? Block „test“ wird abgearbeitet
            // ...globale Variable "a_global" wird in Funktion verändert (neuer Wert: 0xee); 
            // ...lokale Varible "x" wird modifiziert(inkrement)
            // ...globale Variable "x" bleibt unverändert
    
    x = a_global; // globale Variable "x" ändern: x:=0xee
    
    if (x == 0xee) {PORTD=0x11;}
    else {PORTD = 0xFF;} // SPEICHERTEST für SRAM-Zellen "x" und "a_global"
                         // Ergebnis wird über PORTD signalisiert
                         // 0x11: Speicherzelle ok, 0xFF:Speicherfehler
    
  } // Ende Block "Arbeitschleife"
} // Ende Block "main"