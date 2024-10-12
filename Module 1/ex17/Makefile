prog: main.o ex17.o
	gcc main.o ex17.o -o prog

main.o: main.c ex17.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex17.o: ex17.c ex17.h
	gcc -g -Wall -Wextra -fanalyzer -c ex17.c -o ex17.o

clean:
	rm -f *.o prog

run: prog
	./prog