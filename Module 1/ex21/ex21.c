#include <stdio.h>
#include <stdlib.h>

void init_data(int *data, int n){
    for(int i = 0; i < n; i++){
        *(data + i) = rand() % 100;
    }
}

void print_data(int *data, int n){
    for(int i = 0; i < n; i++){
        printf("%x ", *(data + i));
    }
    printf("\n");
}

void init_data_ptrs(int *data, int n, int** ptrs){
    for(int i = 0; i < n; i++){
        *(ptrs + i) = (data + i);
    }
}

void print_data_ptrs(int** ptrs, int n){
    for(int i = 0; i < n; i++){
        printf("%d\n ", **(ptrs + i));
        printf("%p\n ", *(ptrs + i));
    }
    printf("\n");
}

int * find_max_data_ptrs(int** ptrs, int n){
    int *max = *ptrs;
    for(int i = 0; i < n; i++){
        if(**(ptrs + i) > *max){
            max = *(ptrs + i);
        }
    }
    return max;
}

void sort_data_ptrs(int** ptrs, int n){

    for(int i = 0; i < n -1; i++){
        for(int j = i + 1; j < n; j++){
            if(**(ptrs + i) < **(ptrs + j)){
                int *temp = *(ptrs + i);
                *(ptrs + i) = *(ptrs + j);
                *(ptrs + j) = temp;
            }
        }
    }
}