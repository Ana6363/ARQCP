#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {

    printf("Enter the first value:\n");
    int a;
    scanf("%d", &a);
    printf("Enter the second value:\n");
    int b;
    scanf("%d", &b);
    int c = sum(a, b);
    printf("Sum of both digits is %d\n", c);

    return 0;
}

