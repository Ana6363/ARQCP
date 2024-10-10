prog: main.o ex11.o
	gcc main.o ex11.o -o prog

main.o: main.c ex11.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

ex3.o: ex11.c ex11.h
	gcc -g -Wall -Wextra -fanalyzer -c ex11.c -o ex11.o

clean:
	rm -f *.o prog

run: prog
	./prog