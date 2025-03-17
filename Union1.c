//Access Union Member in c
#include<stdio.h>
#include<string.h>

union Demo {
    int a;
    float b;
    double c;
    char d[20];
};

int main() {

    union Demo demo;

    demo.a = 5;
    printf("First = %d\n",demo.a);

    demo.b = 15.6;
    printf("Second = %f\n",demo.b);

    demo.c = 34.657;
    printf("Third = %.3lf\n",demo.c);

    strcpy(demo.d,"The demo text!!");   
    printf("Fourth = %s\n",demo.d);

    printf("Size of Union = %d",sizeof(union Demo));
    return 0;
}