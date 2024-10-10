#include <stdio.h>

int sum_odd(int *p){
    int size = p[0];
    int sum = 0;
    p++;

    for(int i = 0; i < size; i++){
        if(*p % 2 != 0){
            sum += *p;
        }
        p++;
    }

    return sum;

}