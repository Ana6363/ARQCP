prog: main.o ex6.o
	gcc main.o ex6.o -o prog

main.o: main.c ex6.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex6.c ex6.h
	gcc -g -Wall -Wextra -fanalyzer -c ex6.c -o ex6.o

clean:
	rm -f *.o prog

run: prog
	./prog