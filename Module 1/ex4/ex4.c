#include <stdio.h>

void capitalize(char *str){
    
    char *ptr = str;

    while(*ptr != '\0'){
        if(*ptr >= 'a' && *ptr <= 'z'){
            *ptr = *ptr - 32;
        }
        ptr++;
    }

    
}