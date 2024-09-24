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

int get_greater_digit(int n){

    int digit=0;

    while(n!=0){
        int digit2 = n%10;

        if(cmp(digit, digit2) == -1){
            digit = digit2;
        }

        n = n/10;
    }

    return digit;
}

int main(void){

    printf("Enter the value:\n");
    int a;
    scanf("%d", &a);

    int result = get_greater_digit(a);
    printf("The greatest digit is %d\n", result);

    return 0;

}