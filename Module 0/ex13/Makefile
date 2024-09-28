prog: ex13.o main.o	
	gcc ex13.o main.o -o prog
ex12.o: ex13.c ex13.h
	gcc -g -Wall -Wextra -fanalyzer -c ex13.c -o ex13.o
main.o: main.c ex13.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog