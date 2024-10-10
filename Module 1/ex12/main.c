#include <stdio.h>
#include "ex12.h"


int main(void){
    int vec[] = {5, 3, 2, 4, 1};
    int n = 5;
    array_sort(vec, n);
    
    for(int i = 0; i < n; i++){
        printf("%d ", vec[i]);
    }

    return 0;
}