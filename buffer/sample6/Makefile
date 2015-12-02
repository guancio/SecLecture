all: main shell

main: main.c
	gcc -fno-stack-protector -z execstack -O0 -o main main.c

shell: shell.asm
	nasm -f elf64 -o shell.o shell.asm 
	objcopy -O binary shell.o shell.bin
