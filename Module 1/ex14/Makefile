prog: main.o ex14.o
	gcc main.o ex14.o -o prog

main.o: main.c ex14.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex14.o: ex14.c ex14.h
	gcc -g -Wall -Wextra -fanalyzer -c ex14.c -o ex14.o

clean:
	rm -f *.o prog

run: prog
	./prog