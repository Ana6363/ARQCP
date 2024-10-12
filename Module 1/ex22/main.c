#include <stdio.h>
#include "ex22.h"

int main(void){

int data1[5] = {1, 2, 3, 4, 5};
int data2[5] = {10, 20, 30, 40, 50};
int *bigger = data1;
int *smaller = data2;
swap_pointers(&bigger, &smaller, 5);

for(int i = 0; i < 5; i++){
    printf("%d ", *(bigger + i));
}

printf("\n");

for(int i = 0; i < 5; i++){
    printf("%d ", *(smaller + i));
}

printf("\n");

return 0;
}