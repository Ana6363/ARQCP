#include <stdio.h>

int main(void){
    int x = 100;
    double y = 20.0;
    char z = "A";

    int* ptr_x = &x;
    double* ptr_y = &y;
    char* ptr_z = &z;

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %c\n", z);

    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Address of z: %p\n", &z);

    printf("Address of ptr_x: %p\n", &ptr_x);
    printf("Address of ptr_y: %p\n", &ptr_y);
    printf("Address of ptr_z: %p\n", &ptr_z);

    printf("ptr_x = %p\n", *ptr_x);
    printf("ptr_y = %f\n", *ptr_y);
    printf("ptr_z = %c\n", *ptr_z);
    printf("ptr_x = %p\n", ptr_x);
    printf("ptr_y = %p\n", ptr_y);
    printf("ptr_z = %p\n", ptr_z);

    printf("Memory size: %ld\n", sizeof(x));
    printf("Memory size: %ld\n", sizeof(y));
    printf("Memory size: %ld\n", sizeof(z));
    printf("Memory size: %ld\n", sizeof(ptr_x));
    printf("Memory size: %ld\n", sizeof(ptr_y));
    printf("Memory size: %ld\n", sizeof(ptr_z));


    return 0;
}