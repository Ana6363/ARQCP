#include <stdio.h>


int main(void){
    int n = 3;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    copy_vec(a, n, b);
    for (int i = 0; i<n; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}