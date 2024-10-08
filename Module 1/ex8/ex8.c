#include <stdio.h>

int sum_integer_bytes(unsigned int *p){
    int sum = 0;
    unsigned char *ptr = (unsigned char *)p;

    for(int i = 0; i < sizeof(unsigned int); i++){
        sum += *ptr;
        ptr++;
    }

    return sum;
}