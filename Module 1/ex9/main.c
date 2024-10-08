#include <stdio.h>
#include "ex9.h"

int main(void){
    const int n = 5;
    int vec[] = {1, 2, 3, 4, 5};
    int min, max;
    float avg;

    get_array_statistics(vec, n, &min, &max, &avg);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Avg: %.2f\n", avg);
    
    return 0;
}