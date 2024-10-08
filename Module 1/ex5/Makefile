prog: main.o ex5.o
	gcc main.o ex5.o -o prog

main.o: main.c ex5.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex5.c ex5.h
	gcc -g -Wall -Wextra -fanalyzer -c ex5.c -o ex5.o

clean:
	rm -f *.o prog

run: prog
	./prog