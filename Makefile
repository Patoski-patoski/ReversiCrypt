encrypt.o: encrypt.c header.h
	gcc -c encrypt.c

decrypt.o: decrypt.c header.h
	gcc -c decrypt.c

revstr.o: revstr.c header.h
	gcc -c revstr.c

main.o: main.c header.h
	gcc -c main.c

launch: revstr.o encrypt.o decrypt.o main.o
	gcc revstr.o encrypt.o decrypt.o main.o -o launch && ./launch