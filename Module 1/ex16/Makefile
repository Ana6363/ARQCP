prog: main.o ex16.o
	gcc main.o ex16.o -o prog

main.o: main.c ex16.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex16.o: ex16.c ex16.h
	gcc -g -Wall -Wextra -fanalyzer -c ex16.c -o ex16.o

clean:
	rm -f *.o prog

run: prog
	./prog