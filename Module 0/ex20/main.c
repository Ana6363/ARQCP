#include <stdio.h>
#include "ex20.h"


int main(void){
    int mat[5][5] = {
        {1, 0, 0, 0, 0},
        {2, 3, 0, 0, 0},
        {4, 5, 6, 0, 0},
        {7, 8, 9, 10, 0},
        {11, 12, 13, 14, 15}
    };

    
    int is_lower_triangular = check_lower_triangular_matrix(mat, 5, 5);
    if (is_lower_triangular) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }


    int sum = sum_lower_triangular_matrix(mat, 5);
    if (sum != -1) {
        printf("A soma dos elementos da matriz triangular inferior é: %d\n", sum);
    } else {
        printf("A matriz não é triangular inferior, não é possível calcular a soma.\n");
    }

    return 0;
}