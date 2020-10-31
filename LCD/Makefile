all: library
	avr-gcc -g -Os -mmcu=attiny2313 lcd_test.c -L. -lLCD -o lcd_test.elf 	
	avr-objcopy -j .text -j .data -O ihex lcd_test.elf lcd_test.hex

library:
	avr-gcc -c -Os -mmcu=attiny2313 lcd/lcd-library.c -o lcd-library.o
	avr-ar csr libLCD.a lcd-library.o
clean:
	rm -f *.o *.elf *.hex *.a
