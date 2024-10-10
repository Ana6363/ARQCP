#include <stdio.h>


void trim_string(char *str){

    char d[100];
    char *dest = d;

    while(*str == ' '){
         str++;
    }

    str++;
    
    while(*str != '\0'){
        if(*str != ' '){
            *dest = *str;
            dest++;
        } else if(*(str+1) != ' '&& *(str+1) != '\0'){
            *dest= ' ';
            dest++;
        }
        str++;    
    }

    str = dest;
   
}