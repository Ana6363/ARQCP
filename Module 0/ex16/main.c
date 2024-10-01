#include <stdio.h>
#include "ex16.h"


int main(void){
    char str[100] = "aa";
    int result = fake_hash(str);
    printf("The hash value of the string '%s' is %d\n", str, result);
    return 0;
}
