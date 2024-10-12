#include <stdio.h>
#include "ex20.h"


int main(void){
    int vec_ints[6] = {1, 2, 3, 4, 5, 6};
    long vec_longs[3];
    compress(vec_ints, 6 , vec_longs);
    for(int i = 0; i < 3; i++){
        printf("%ld ", vec_longs[i]);
    }
    return 0;
}