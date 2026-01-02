## What is it
This file "add-two-numbers" is a simple CPP program, that prints the calculation of 4+5 to screen. 

## How I've built it, and what it outputs
g++ -S -masm=intel add-two-numbers.cpp = ASM file output in Intel (GCC by default does AT&T, weird)

g++ -masm=intel add-two-numbers.cpp -o add-two-numbers = Intel ELF file