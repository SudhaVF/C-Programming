//strcpy() function in c
#include<stdio.h>
#include<string.h>

int main() {

    char str1[10] = "Hello";
    char str2[10];

    strcpy(str2,str1);
    printf("str2 after copying = %s", str2);

    return 0;

    
}