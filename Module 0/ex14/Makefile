prog: ex14.o main.o	
	gcc ex14.o main.o -o prog
ex12.o: ex14.c ex14.h
	gcc -g -Wall -Wextra -fanalyzer -c ex14.c -o ex14.o
main.o: main.c ex14.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog