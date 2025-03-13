// cos() function in c
#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main() {

    double a = 30.0, res;

    //Convert the angle from degrees to radians
    a = (a * PI)/180;
    res = cos(a);

    printf("cosine of 30.0 degrees(Converted to %lf radians) = %lf", a, res);

    return 0;
}
