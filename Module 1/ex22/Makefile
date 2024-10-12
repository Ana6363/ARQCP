prog: main.o ex22.o
	gcc main.o ex22.o -o prog

main.o: main.c ex22.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex22.o: ex22.c ex22.h
	gcc -g -Wall -Wextra -fanalyzer -c ex22.c -o ex22.o

clean:
	rm -f *.o prog

run: prog
	./prog