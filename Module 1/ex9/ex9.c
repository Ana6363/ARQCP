#include <stdio.h>


void get_array_statistics(int* vec, int n, int* min, int* max, float* avg){
    *min = vec[0];
    *max = vec[0];
    *avg = 0;

    for(int i = 0; i < n; i++){
        
        if(vec[i] < *min){
            *min = vec[i];
        }
        if(vec[i] > *max){
            *max = vec[i];
        }

        *avg += vec[i];
    }

    *avg = *avg / n;
}