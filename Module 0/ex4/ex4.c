#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sum_digits(int n){
    int sum1 = 0;
    int sum2 = 0;
    while (n != 0) { 
        sum2 = n % 10;
        n = n/ 10;
        sum1 = sum(sum1, sum2);
    }
    return sum1;
}

int main(void) {

    printf("Enter the value:\n");
    int a = 0;
    scanf("%d", &a);
    int dig = 0;
    dig = sum_digits(a);
    printf("Sum of the digits is %d\n", dig);

    return 0;
}