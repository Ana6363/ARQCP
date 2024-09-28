#include <stdio.h>

char get_ascii_code(int c) {
    return (char) c;
}

int count_char(char str[], int c){
    int count = 0;
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == get_ascii_code(c)){
            count++;
        }
        i++;
    }

    return count;
}