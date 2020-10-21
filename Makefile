all: led1 led2 led3
led1:
	avr-gcc -g -Os -mmcu=attiny2313 led1.c -DF_CPU=1000000UL -o led1.elf
	avr-objcopy -j .text -j .data -O ihex led1.elf led1.hex
led2:
	avr-gcc -g -Os -mmcu=attiny2313 led2.c -DF_CPU=1000000UL -o led2.elf
	avr-objcopy -j .text -j .data -O ihex led2.elf led2.hex
led3:
	avr-gcc -g -Os -mmcu=attiny2313 led3.c -DF_CPU=1000000UL -o led3.elf
	avr-objcopy -j .text -j .data -O ihex led3.elf led3.hex

clean:
	rm -f *.o *.elf *.hex
