#include <stdio.h>


void compress(int* vec_ints, int n, long* vec_longs){

    for(int i = 0; i < n; i += 2){

        long compressed = 0.0;
        compressed += *(vec_ints + i);
        compressed = compressed * 10 + *(vec_ints + i + 1);
        vec_longs[i/2] = compressed;      
    }
}