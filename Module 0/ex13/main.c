#include <stdio.h>
#include "ex13.h"


int main(void){
    char str[] = "aaannnAAA";
    int c = 97;

    printf("The character %d appears %d times in the string %s\n", c, count_char(str, c), str);

    return 0;

}