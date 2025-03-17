// Unions in c
#include<stdio.h>

union Demo {
    int a;
    float b;
    double c;
    char d[20];
};

int main() {
    printf("Size of Union = %d", sizeof(union Demo));
    return 0;
}