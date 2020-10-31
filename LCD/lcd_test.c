
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "lcd/lcd-library.h"

const char heart[] PROGMEM = { 
	0b00000,
	0b01010,
	0b11111,
  	0b11111,
    0b11111,
  	0b01110,
  	0b00100,
 	0b00000
};

const char rus_p[] PROGMEM ={
	0b11111,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b00000,
};

const char rus_i[] PROGMEM = {
	0b10001,
	0b10001,
	0b10011,
	0b10101,
	0b11001,
	0b10001,
	0b10001,
	0b00000,
};


const char stringOne[] PROGMEM = "I \11 AVR";
const char stringTwo[] PROGMEM = "\12P\3BET M\13P!";

int main(void)
{
	lcdInit();
	lcdLoadCharacterf(1, heart);
	lcdLoadCharacterf(2, rus_p);
	lcdLoadCharacterf(3, rus_i);
	lcdGotoXY(0,2);
	lcdPutsf(stringOne);	
	lcdGotoXY(1,2);	
	lcdPutsf(stringTwo);
}