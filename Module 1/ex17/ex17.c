#include <stdio.h>

 void frequencies(float *grades, int n, int *freq){

    for(int i = 0; i < 21; i++){
        *(freq + i) = 0;
    }

    for(int i = 0; i < n; i++){
        int grade = (int) *(grades + i);

        if(grade >= 0 && grade <= 20){
            (*(freq + grade)) ++;
        }
    }
 }