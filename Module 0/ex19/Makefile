prog: ex19.o main.o	
	gcc ex19.o main.o -o prog
ex12.o: ex19.c ex19.h
	gcc -g -Wall -Wextra -fanalyzer -c ex19.c -o ex19.o
main.o: main.c ex19.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog