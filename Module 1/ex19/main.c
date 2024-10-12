#include <stdio.h>
#include "ex19.h"

int main(void){
    short vec1[5] = {1, 2, 3, 4, 5};
    short vec2[5] = {6, 7, 8, 9, 10};
    swap(vec1, vec2, 5);
    for(int i = 0; i < 5; i++){
        printf("%d ", vec1[i]);
    }
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", vec2[i]);
    }
    printf("\n");

    return 0;
}