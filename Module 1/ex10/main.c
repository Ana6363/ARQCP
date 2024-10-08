#include <stdio.h>
#include "ex10.h"

int main(void){
    char str[] = "Hello World!";
    char c = 'W';
    char *ptr = where_is(str, c);
    printf("Result: %p\n", (void*)ptr);

    return 0;
}