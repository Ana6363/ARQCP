#include <stdio.h>
#include "ex19.h"

int main(void){
    int mat[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}
    };
    int x = sum_matrix_values(mat);
    printf("%d\n", x);
    return 0;
}
