prog_avg: ex9.o main.o	
		gcc ex9.o main.o -o prog_avg
ex9.o: ex9.c ex9.h
	gcc -g -Wall -Wextra -fanalyzer -c ex9.c -o ex9.o
main.o: main.c ex9.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog_avg
run: prog_avg
	./prog_avg