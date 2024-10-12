prog: main.o ex19.o
	gcc main.o ex19.o -o prog

main.o: main.c ex19.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex19.o: ex19.c ex19.h
	gcc -g -Wall -Wextra -fanalyzer -c ex19.c -o ex19.o

clean:
	rm -f *.o prog

run: prog
	./prog