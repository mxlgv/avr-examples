
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "lcd/lcd-library.h"

const char stringOne[] PROGMEM = "Hello world";
const char stringTwo[] PROGMEM = "2 + 3 = 5";
	
int main(void)
{
	char i = 1;
	char dir = LCD_SCROLL_LEFT;
	
	lcdInit();
	lcdGotoXY(0,2);
	lcdPutsf(stringOne);	
	lcdGotoXY(1,3);	
	lcdPutsf(stringTwo);

}