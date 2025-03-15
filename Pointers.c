// Display the addresses of variables in c
#include<stdio.h>
int main() {

    int a;
    float b;
    char c;

    printf("Address of variable a = %p\n", &a);
    printf("Address of variable b = %p\n", &b);
    printf("Address of variable c = %p\n", &c);

    return 0;
}