#include <stdio.h>


void copy_vec(int *vec1, int n, int *vec2){

    while(sizeof(vec2) != n && *vec1 != '\0'){
        *vec2 = *vec1;
         vec1++;
         vec2++;
    }
}