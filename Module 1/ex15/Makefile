prog: main.o ex15.o
	gcc main.o ex15.o -o prog

main.o: main.c ex15.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex15.o: ex15.c ex15.h
	gcc -g -Wall -Wextra -fanalyzer -c ex15.c -o ex15.o

clean:
	rm -f *.o prog

run: prog
	./prog