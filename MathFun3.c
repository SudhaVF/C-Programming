//sin() function in c
#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main() {

    double a = 60.0, res;

    //Convert the angle from degrees to radians
    a = (a * PI)/180;
    res = sin(a);

    printf("sine of 60.0 degrees(Converted to %lf radians) = %lf", a, res);

    return 0;
}