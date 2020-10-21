#include <avr/io.h>
#include <util/delay.h>

typedef unsigned char byte;
#define  MAX_NUMBER_LEDS 7 // ������������ ���������� ����������� 

void main ()
{
	char led_num[MAX_NUMBER_LEDS] ={1, 6, 3, 4, 7, 5, 1}; // ������� ��������� ����������� 
    DDRD=0xFF;  /* ��������� ����� D �� ����� */
	while(1) 
    {
        {
			PORTD=0x00;
			for(byte i=0; i<MAX_NUMBER_LEDS; i++)
			{
				PORTD |= (1 << led_num[i]-1);  // ��� ������������ PORTD |= _BV(led_num[i]-1) ��������� ������.
			    _delay_ms(100);
			} 
			
			for(byte i=0; i<MAX_NUMBER_LEDS; i++)
			{
				PORTD &= ~(1<<led_num[i]-1);  // ���������� ����������� � ��� �� �������.
				_delay_ms(100);
			}
       }   
    }
}
