prog: ex15.o main.o	
	gcc ex15.o main.o -o prog
ex12.o: ex15.c ex15.h
	gcc -g -Wall -Wextra -fanalyzer -c ex15.c -o ex15.o
main.o: main.c ex15.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog