#include <stdio.h>
#include "ex17.h"


int main(void){
    float grades[] = { 12.5, 14.5, 16.5, 18.5, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0 };
    int freq[21];
    frequencies(grades, 10, freq);

    for(int i = 0; i < 21; i++){
        printf("%d: %d\n", i, freq[i]);
    }

    return 0;
}