all: main.o functions.o
	gcc -o program main.o functions.o

functions.o: functions.c headers.h
	gcc -c functions.c

main.o: main.c headers.h
	gcc -c main.c

run:
	./program

clean:
	rm *.o
	rm *~
