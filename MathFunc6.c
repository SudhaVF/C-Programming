//asin() function in c
#include<stdio.h>
#include<math.h>

#define PI 3.14159265
int main() {

    double a = -0.30, res;

    //Calculate arcsine of a and convert from radians to degree
    res = asin(a)*180/PI;
    printf("Arcsine %lf = %lf degrees", a, res);
    return 0;

}