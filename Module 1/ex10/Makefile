prog: main.o ex10.o
	gcc main.o ex10.o -o prog

main.o: main.c ex10.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex10.c ex10.h
	gcc -g -Wall -Wextra -fanalyzer -c ex10.c -o ex10.o

clean:
	rm -f *.o prog

run: prog
	./prog