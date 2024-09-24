prog: ex11.o main.o	
	gcc ex11.o main.o -o prog
ex11.o: ex11.c ex11.h
	gcc -g -Wall -Wextra -fanalyzer -c ex11.c -o ex11.o
main.o: main.c ex11.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog