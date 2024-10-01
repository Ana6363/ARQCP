prog: ex17.o main.o	
	gcc ex17.o main.o -o prog
ex12.o: ex17.c ex17.h
	gcc -g -Wall -Wextra -fanalyzer -c ex17.c -o ex17.o
main.o: main.c ex17.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog