main: main.o copy.o
	gcc -o main main.o copy.o
main.o: main.c copy.h
	gcc -g -c main.c
copy.o: copy.c copy.h
	gcc -g -c copy.c
clean:
	rm *.c *.o main
