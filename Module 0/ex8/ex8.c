#include <stdio.h>

char get_ascii_code(int c) {
    return (char) c;
}

int main(void) {
    printf("Enter the number:\n");
    int c;
    scanf("%d", &c);
    char result = get_ascii_code(c);

    printf("The character of the ASCII code %d is '%c'\n", c, result);
    return 0;
}