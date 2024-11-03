prog: main.o ex2.o
	gcc main.o ex2.o -o prog

main.o: main.c ex2.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex2.o: ex2.s ex2.h
	gcc -g -Wall -Wextra -fanalyzer -c ex2.s -o ex2.o

clean:
	rm -f *.o prog

run: prog
	./prog