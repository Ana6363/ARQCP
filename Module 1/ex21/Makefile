prog: main.o ex21.o
	gcc main.o ex21.o -o prog

main.o: main.c ex21.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex21.o: ex21.c ex21.h
	gcc -g -Wall -Wextra -fanalyzer -c ex21.c -o ex21.o

clean:
	rm -f *.o prog

run: prog
	./prog