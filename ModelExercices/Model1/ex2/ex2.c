#include <stdio.h>


void fn2(int *x){
    unsigned char *in = (unsigned char *)x;
    unsigned char *en = in + sizeof(int) - 1;

    while (in < en){
        unsigned char tmp = *in;
        *in = *en;
        *en = tmp;
        in++;
        en--;
    }
    
}