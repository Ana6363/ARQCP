prog: ex20.o main.o	
	gcc ex20.o main.o -o prog
ex12.o: ex20.c ex20.h
	gcc -g -Wall -Wextra -fanalyzer -c ex20.c -o ex20.o
main.o: main.c ex20.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog