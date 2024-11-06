#include <stdio.h>
#include "ex4.h"

int op1, op2;
int main(void) {
printf("Valor op1:");
scanf("%d",&op1);
printf("Valor op2:");
scanf("%d",&op2);
int res = sum();
printf("sum = %d:0x%x\n", res,res);
long res2 = another_sum();
printf("another_sum = %ld:0x%lx\n", res2,res2);
long res3 = yet_another_sum();
printf("yet_another_sum = %ld:0x%lx\n", res3,res3);

return 0;
}