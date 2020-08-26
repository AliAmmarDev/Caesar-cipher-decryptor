decypt: main.o decrypt.o printhex.o
	gcc -g -std=c99 -Wall -Wpedantic -o decrypt main.o decrypt.o printhex.o
	
main.o: main.c decrypt.h 
	gcc -g -std=c99 -Wall -Wpedantic -c -o main.o main.c 
	
decrypt.o: decrypt.c decrypt.h
	gcc -g -std=c99 -Wall -Wpedantic -c -o decrypt.o decrypt.c
printhex.o : printhex.c decrypt.h
	gcc -g -std=c99 -Wall -Wpedantic -c -o printhex.o printhex.c
clean:
	rm -f al decrypt.o
