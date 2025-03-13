//acos() function in c
#include<stdio.h>
#include<math.h>

#define PI 3.14159265
int main() {

    double a = -0.30, res;

    //Calculate arcosine of a and convert from radians to degree
    res = acos(a)*180/PI;
    printf("Arccosine %lf = %lf degrees", a, res);
    return 0;

}
