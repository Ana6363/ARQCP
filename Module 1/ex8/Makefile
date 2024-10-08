prog: main.o ex8.o
	gcc main.o ex8.o -o prog

main.o: main.c ex8.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex8.c ex8.h
	gcc -g -Wall -Wextra -fanalyzer -c ex8.c -o ex8.o

clean:
	rm -f *.o prog

run: prog
	./prog