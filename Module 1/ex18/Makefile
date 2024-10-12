prog: main.o ex18.o
	gcc main.o ex18.o -o prog

main.o: main.c ex18.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex18.o: ex18.c ex18.h
	gcc -g -Wall -Wextra -fanalyzer -c ex18.c -o ex18.o

clean:
	rm -f *.o prog

run: prog
	./prog