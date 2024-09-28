#include <stdio.h>
#include "ex14.h"

int main(void){
    int vec[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int value = 5;

    printf("The value %d appears %d times in the vector\n", value, count_value(vec, n, value));

    return 0;
}