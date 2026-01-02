## What is it
This file "if-greater-smaller" is a simple CPP program, that asks the user for integer input between 0 and 20, outputting whether it is larger, smaller or exactly of 10.

Currently, works with numbers but don't get crazy inputting weird things like letters, you'll get weird results?

NB Letters are less than 10.

## How I've built it, and what it outputs
g++ -S -masm=intel if-greater-smaller.cpp = ASM file output

g++ -masm=intel if-greater-smaller.cpp -o add-two-numbers = Intel ELF file