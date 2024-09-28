#include <stdio.h>
#include "ex15.h"


int main(void){
    char str[] = "A tua mãe é toda boa!";
    int result = count_words(str);

    printf("Result: %d", result);

    return 0;
}