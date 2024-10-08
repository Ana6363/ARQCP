prog: main.o ex9.o
	gcc main.o ex9.o -o prog

main.o: main.c ex9.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex9.c ex9.h
	gcc -g -Wall -Wextra -fanalyzer -c ex9.c -o ex9.o

clean:
	rm -f *.o prog

run: prog
	./prog