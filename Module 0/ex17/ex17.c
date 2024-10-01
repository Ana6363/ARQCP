#include <stdio.h>

int cmp(int a, int b){
    if(a > b){
        return 1;
    }else if(a < b){
        return -1;
    }else{
        return 0;
    }
}

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

int check_string(char str[], int h){
    int result = fake_hash(str);
    if(result == h){
        return 1;
    }else{
        return 0;
    }
}

