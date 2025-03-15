// Recursion in c
#include<stdio.h>

int factFunc(int n);

int main() {
    int res = factFunc(7);
    printf("Factorial = %d", res);

    return 0;

}
int factFunc(int n){
    if(n >= 1) {
        return n*factFunc(n-1); //Recursive Call
    } else {
        return 1; // Factorial o is 1
    }
}