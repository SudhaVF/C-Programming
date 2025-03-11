// Call By Value in c
#include<stdio.h>

void changeValue(int x) {
    x = 10;
    printf("Value = %d\n", x);
}

int main() {
    int a = 5;

    printf("Value of a (before) = %d\n", a);
    changeValue(a);
    printf("Value of a (after) = %d\n", a);

    return 0;
}