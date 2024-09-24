#include <stdio.h>


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
