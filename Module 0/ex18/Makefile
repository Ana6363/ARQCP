prog: ex18.o main.o	
	gcc ex18.o main.o -o prog
ex12.o: ex18.c ex18.h
	gcc -g -Wall -Wextra -fanalyzer -c ex18.c -o ex18.o
main.o: main.c ex18.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog