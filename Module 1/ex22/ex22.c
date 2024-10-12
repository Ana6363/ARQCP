#include <stdio.h>

void swap_pointers(int **b, int **s, int n){
    int sum_b = 0;
    int sum_s = 0;

    for(int i = 0; i < n; i++){
        sum_b += *(*b + i);
        sum_s += *(*s + i);
    }

    if(sum_b < sum_s){
        int *temp = *b;
        *b = *s;
        *s = temp;
    }

}