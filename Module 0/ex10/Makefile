prog: size.o main.o	
		gcc size.o main.o -o prog
size.o: size.c size.h
	gcc -g -Wall -Wextra -fanalyzer -c size.c -o size.o
main.o: main.c size.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o
clean:
	rm -f *.o prog
run: prog
	./prog