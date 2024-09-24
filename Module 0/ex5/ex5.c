#include <stdio.h>


int cmp(int a, int b){
    if(a > b){
        return 1;
    }else if(a < b){
        return -1;
    }else{
        return 0;
    }
}

int main(void){
    printf("Enter the first value:\n");
    int a;
    scanf("%d", &a);

    printf("Enter the second value:\n");
    int b;
    scanf("%d", &b);

    int result = cmp(a, b);
    return result;

    return 0;
}