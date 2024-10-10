#include <stdio.h>
#include "ex11.h"


int main(void){
    int arr[] = {5, 1, 2, 3, 4, 5};
    int *p = arr;
    int sum = sum_odd(p);
    printf("Sum of odd numbers: %d\n", sum);
    return 0;
}