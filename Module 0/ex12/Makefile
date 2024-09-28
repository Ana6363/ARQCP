prog: ex12.o main.o	
	gcc ex12.o main.o -o prog
ex12.o: ex12.c ex12.h
	gcc -g -Wall -Wextra -fanalyzer -c ex12.c -o ex12.o
main.o: main.c ex12.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog