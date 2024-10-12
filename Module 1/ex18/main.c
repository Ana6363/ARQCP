#include <stdio.h>
#include "ex18.h"



int main(void){
    unsigned char vec[50];
    populate(vec, 50, 20);
    num_sets(vec, sizeof(vec));
    for(int i = 0; i < sizeof(vec); i++){
        printf("%d ", vec[i]);
    }
    return 0;
}