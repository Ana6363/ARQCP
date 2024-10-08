#include <stdio.h>
#include "ex6.h"

int main(void){
    
    int vec[] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = sum_even(vec, n);
    printf("%d\n", sum);

    return 0;
}