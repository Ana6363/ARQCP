#include <stdio.h>


void array_sort(int *vec, int n){

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int veci = *(vec + i);
            int vecj = *(vec + j);
            if(veci > vecj){
                int temp = *(vec + i);
                *(vec + i) = *(vec + j);
                *(vec + j) = temp;
            }
        }
    }
}