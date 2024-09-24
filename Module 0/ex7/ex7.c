#include <stdio.h>

int get_ascii_code(char c) {
    return (int)c;
}

int main(void) {
    printf("Enter the number:\n");
    char c;
    scanf("%c", &c);
    int result = get_ascii_code(c);

    printf("The ASCII code of the character '%c' is %d\n", c, result);
    return 0;
}