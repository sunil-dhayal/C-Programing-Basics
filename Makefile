all:
	nasm -f elf add.asm
	nasm -f elf sub.asm
	nasm -f elf multi.asm
	gcc -m32 arith.c add.o sub.o multi.o
