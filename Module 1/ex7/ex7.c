#include <stdio.h>

void capitalize2(char *str){
    char *ptr = str;

    while(*ptr != '\0'){
        if(*ptr >= 'A' && *ptr <= 'Z'){
            *ptr = *ptr + 32;
        }
        ptr++;
    }
}