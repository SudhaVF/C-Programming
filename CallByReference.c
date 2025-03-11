// Call By Reference in c
#include<stdio.h>

void changeValue(int *x) {
    *x = 10;// This change will affect the actual parameter
    printf("Value = %d\n", *x);
}

int main() {
    int a = 5;

    printf("Value of a (before) = %d\n", a);
    changeValue(&a); // output is 10 since the original value changed
    printf("Value of a (after) = %d\n", a);

    return 0;
}