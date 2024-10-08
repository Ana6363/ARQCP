prog: main.o ex4.o
	gcc main.o ex4.o -o prog

main.o: main.c ex4.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex4.c ex4.h
	gcc -g -Wall -Wextra -fanalyzer -c ex4.c -o ex4.o

clean:
	rm -f *.o prog

run: prog
	./prog