// Arithmetic Assignment Operator in c
#include<stdio.h>
int main() {
    int a, b, c, d, e; 
    a = 5;
    b = 10;
    c = 15;
    d = 20;
    e = 30;

    a+=5;
    printf("Value of a = %d\n", a);

    b-=5;
    printf("Value of b = %d\n", b);

    c*=5;
    printf("Value of c = %d\n", c);

    d/=10;
    printf("Value of d = %d\n", d);

    e%=9;
    printf("Value of a = %d\n", e);

    return 0;

}