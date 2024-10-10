#include <stdio.h>


int count_words(char *str){
    int count = 0;

    if(str[0] != ' '){
        count++;
    }

    while(*str != '\0'){
        if(*str == ' ' && *(str+1)!= ' '&& *(str+1)!= '\0'){
            count++;
        }
        str++;
    }

    return count;

}