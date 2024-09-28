#include <stdio.h>
#include "ex12.h"


int get_ascii_code(char c) {
    return (int)c;
}

int string_to_int(char str[]){

    int result = 0;
    int i = 0;
    
   while(str[i] != '\0'){
        
        int digit = get_ascii_code(str[i])-48;
        result = result * 10 + digit;
        i++;
   }

   return result;

}

int integer_part(char x[]){
    int i = 0;
    int result = 0;
    char c[100];
    while(x[i] != '.'){
        c[i] = x[i];  
        i++;
    }
    result = string_to_int(c);
    return result;
}

int fractional_part(char x[]){
    int i = 0;
    int result = 0;
    char c[100];
    while(x[i] != '.'){
        i++;
    }
    i++;
    int j = 0;
    while(x[i] != '\0'){
        c[j] = x[i]; 
        i++;
        j++;
    }
    result = string_to_int(c);
    return result;
}
