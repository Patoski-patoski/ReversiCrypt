encrypt.o: encrypt.c header.h
	gcc -c encrypt.c

decrypt.o: decrypt.c header.h
	gcc -c decrypt.c

main.o: main.c header.h
	gcc -c main.c

launch: encrypt.o decrypt.o main.o
	gcc encrypt.o decrypt.o main.o -o launch