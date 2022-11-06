make:
	gcc -c mman/mman.c -I ./  -o objects/mman.o
	gcc -c main.c -I ./ -o objects/main.o
	gcc objects/main.o objects/mman.o -o build/main.exe

run:
	build/main.exe
	
	