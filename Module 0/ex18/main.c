#include <stdio.h>
#include <string.h>
#include "ex18.h"

int main(void){
    int x = find_pattern("ola Pedro, ola Laura", "la");
    printf("%d\n", x);
    return 0;
}