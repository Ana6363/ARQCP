prog: main.o ex12.o
	gcc main.o ex12.o -o prog

main.o: main.c ex12.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex12.c ex12.h
	gcc -g -Wall -Wextra -fanalyzer -c ex12.c -o ex12.o

clean:
	rm -f *.o prog

run: prog
	./prog