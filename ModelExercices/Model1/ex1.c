#include <stdio.h>

 void fn(int *x, int *y){
 int tmp;
 printf("0x%x, 0x%x\n", *x, *y); //0xa, 0x14
 printf("%p, %p\n", x, y); //0x7ffc44f8aac0, 0x7ffc44f8aac4
 tmp = *x;
 *x = *y;
 *y = tmp;
 printf("0x%x, 0x%x\n", *x, *y); //0x14, 0xa
 printf("%p, %p\n", x, y); //0x7ffc44f8aac0, 0x7ffc44f8aac4
 }

 int main(void){
 int a = 10, b = 20;
 printf("%p, %p\n", &a, &b); //0x7ffc44f8aac0, 0x7ffc44f8aac4
 printf("0x%x, 0x%x\n", a, b); //0xa, 0x14
 fn(&a, &b); 
 printf("0x%x, 0x%x\n", a, b); //0x14, 0xa
 printf("%p, %p\n", &a, &b); //0x7ffc44f8aac0, 0x7ffc44f8aac4
 return 0;
 }