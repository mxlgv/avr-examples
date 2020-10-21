# ATtiny2313 examples

### Compilation:
**Requires "avr-gcc" and avr-libc.**

    make

### Debugging:
**You will need the "avr-gcc" and "simavr" packages:**
    
    simavr -g -m attiny2313 led1.elf
    avr-gdb -q led1.elf
    (gdb) target remote localhost:1234


   
