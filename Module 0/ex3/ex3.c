#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    int mult ;

    for(int i = 0; i < b; i++) {
        mult = sum(mult,a);
    }

    return mult;
}

int main() {

    printf("Enter the first value:\n");
    int a;
    scanf("%d", &a);
    printf("Enter the second value:\n");
    int b;
    scanf("%d", &b);
    int c = multiply(a, b);
    printf("Multiplication of both digits is %d\n", c);

    return 0;
}

