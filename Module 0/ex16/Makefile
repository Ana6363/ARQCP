prog: ex16.o main.o	
	gcc ex16.o main.o -o prog
ex12.o: ex16.c ex16.h
	gcc -g -Wall -Wextra -fanalyzer -c ex16.c -o ex16.o
main.o: main.c ex16.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog