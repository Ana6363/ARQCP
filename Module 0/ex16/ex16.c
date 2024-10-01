#include <stdio.h>


int sum(int a, int b) {
    return a + b;
}

int get_ascii_code(char c) {
    return (int)c;
}


int fake_hash(char str[]){
    int hash = 0;
    for(int i = 0; i<sizeof(str); i++){
        hash = sum(hash,get_ascii_code(str[i]));
    }
    return hash;
}