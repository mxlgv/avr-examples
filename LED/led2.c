#include <avr/io.h>
#include <util/delay.h>

typedef unsigned char byte;
#define  MAX_NUMBER_LEDS 7 // Максимальное количество светодиодов 

void main ()
{
	char led_num[MAX_NUMBER_LEDS] ={1, 6, 3, 4, 7, 5, 1}; // Порядок зажигания светодиодов 
    DDRD=0xFF;  /* настройка порта D на вывод */
	while(1) 
    {
        {
			PORTD=0x00;
			for(byte i=0; i<MAX_NUMBER_LEDS; i++)
			{
				PORTD |= (1 << led_num[i]-1);  // или использовать PORTD |= _BV(led_num[i]-1) Включение диодов.
			    _delay_ms(100);
			} 
			
			for(byte i=0; i<MAX_NUMBER_LEDS; i++)
			{
				PORTD &= ~(1<<led_num[i]-1);  // Выключение светодиодов в том же порядке.
				_delay_ms(100);
			}
       }   
    }
}
