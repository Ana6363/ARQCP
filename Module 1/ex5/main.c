#include <stdio.h>
#include "ex5.h"

int main(void){
    int vec1[] = {1, 2, 3, 4, 5};
    int n = 5;
    int vec2[n];
    copy_vec(vec1, n, vec2);
    
    int i = 0;
    for(i = 0; i < n; i++){
        printf("%d\n", vec2[i]);
    }

    return 0;
}