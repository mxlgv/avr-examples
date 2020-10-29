#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <util/delay.h>

typedef unsigned char byte;

byte button_on()
{
	if(!bit_is_clear(PIND, 0))
	{	
		if (PIND==0b00000001)
		{ 
			return 0;
		}
		else
		{	 
			return 1;
		}
	}
	return 0;
}

void leds_blinking()
{
	PORTD=(~PORTD) & 3;
	_delay_ms(100);
}

void main()
{
	DDRB=0xFF;
	PORTD=1;
	while (1)
	{
		if(button_on())
		{
			leds_blinking();
		}				
	}
}

