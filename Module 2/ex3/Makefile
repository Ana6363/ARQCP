prog: main.o ex3.o
	gcc main.o ex3.o -o prog

main.o: main.c ex3.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex3.s ex3.h
	gcc -g -Wall -Wextra -fanalyzer -c ex3.s -o ex3.o

clean:
	rm -f *.o prog

run: prog
	./prog