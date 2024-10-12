prog: main.o ex20.o
	gcc main.o ex20.o -o prog

main.o: main.c ex20.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex20.o: ex20.c ex20.h
	gcc -g -Wall -Wextra -fanalyzer -c ex20.c -o ex20.o

clean:
	rm -f *.o prog

run: prog
	./prog