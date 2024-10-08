#include <stdio.h>
#include "ex8.h"


int main(void){
    unsigned int d = 0xAABBCCDD;
    int r = sum_integer_bytes(&d);
    printf("Result: %d\n", r);

    return 0;
}