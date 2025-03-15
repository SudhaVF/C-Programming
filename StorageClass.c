// Storage class in c
#include<stdio.h>

//Default storage class for global variables is extern
int globalVar = 0;

void demoFunction() {
    auto int localVar = 0;
    register int regVar = 1;
    static int staticVar = 2;

    printf("\nlocalVar = %d\n", localVar);
    printf("regVar = %d\n", regVar);
    printf("staticVar = %d\n", staticVar);
    printf("globalVar = %d\n", globalVar);


    localVar++;
    regVar++;
    staticVar++;
    globalVar++;
}


int main() {
    for(int i = 0; i < 3; i++) {
        demoFunction();
    }
    return 0;
}