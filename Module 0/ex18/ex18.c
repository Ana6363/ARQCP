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

int find_pattern(char str[], char patt[]) {
    int str_len = strlen(str);
    int patt_len = strlen(patt);
    int count = 0;

    for (int i = 0; i <= str_len - patt_len; i++) {
        int match = 1; 

        for (int j = 0; j < patt_len; j++) {
            if (cmp(str[i + j], patt[j]) != 0) {
                match = 0;
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    return count;
}