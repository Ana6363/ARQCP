#include <stdio.h>
#include "ex3.h"

int op1, op2;
int main(void) {
printf("Valor op1:");
scanf("%d",&op1);
printf("Valor op2:");
scanf("%d",&op2);
int res = sum();
printf("sum = %d:0x%x\n", res,res);
int res2 = another_sum();
printf("another_sum = %ld:0x%lx\n", res2,res2);
return 0;
}