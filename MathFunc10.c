//tanh() function in c
#include<stdio.h>
#include<math.h>

int main() {

    double a = 2.5, res;

    res = tanh(a);

    printf("tanh %lf = %lf",a, res);
    return 0;
}