prog: main.o ex7.o
	gcc main.o ex7.o -o prog

main.o: main.c ex7.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex7.c ex7.h
	gcc -g -Wall -Wextra -fanalyzer -c ex7.c -o ex7.o

clean:
	rm -f *.o prog

run: prog
	./prog