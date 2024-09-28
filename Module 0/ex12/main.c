#include <stdio.h>
#include "ex12.h"

int main(void){
    
    char str[] = "123.456";

    int result = integer_part(str);
    printf("The integer part is:%d\n", result);

    int result2 = fractional_part(str);
    printf("The fractional part is:%d\n", result2);

    return 0;
}