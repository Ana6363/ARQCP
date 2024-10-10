#include <stdio.h>
#include "ex14.h"


int main (void){
    char str[] = "       This       is a test string ";
    int words = count_words(str);
    printf("Number of words: %d\n", words);

    return 0;
}