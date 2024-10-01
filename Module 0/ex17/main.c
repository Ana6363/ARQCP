#include <stdio.h>
#include "ex17.h"


int main(void){
    char str[100] = "aa";
    int result = check_string(str, fake_hash(str));
    printf("The result is %d\n", result);
    return 0;
}