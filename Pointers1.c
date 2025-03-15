// Create a pointer in c
#include<stdio.h>

int main() {

    int a = 10;

    //pointer variable b is storing the address of the variable
    int* b = &a;

    printf("Integer Value = %d\n", a);
    printf("Address of a(using &a) = %p\n", &a);
    printf("\nAddress of a (using pointer b) = %p", b);

    return 0;
}