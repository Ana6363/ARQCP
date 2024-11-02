prog: main.o ex1.o
	gcc main.o ex1.o -o prog

main.o: main.c ex1.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex1.o: ex1.s ex1.h
	gcc -g -Wall -Wextra -fanalyzer -c ex1.s -o ex1.o

clean:
	rm -f *.o prog

run: prog
	./prog