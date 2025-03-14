// Logical Operators in c
#include<stdio.h>
int main(){

    int a, b, c;
    a = 30;
    b = 75;
    c = 0;

    if(a && b){
        printf("True: Logical AND Operator\n");
    }
    if(a || b){
        printf("True: Logical OR Operator\n");
    }
    if(!(c && b)){
        printf("True: Logical NOT Opeartor\n");
    }

    return 0;
}