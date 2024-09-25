#include <stdio.h>
#include "ex11.h"


int main(void){
    printf("Enter the string:%s\n");
    char str[];
    fgets("%s", &str);

    int result = string_to_int(str);
    printf("The result is:%d\n", result);

    return 0;
}