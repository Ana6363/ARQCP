prog: main.o ex13.o
	gcc main.o ex13.o -o prog

main.o: main.c ex13.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex13.c ex13.h
	gcc -g -Wall -Wextra -fanalyzer -c ex13.c -o ex13.o

clean:
	rm -f *.o prog

run: prog
	./prog