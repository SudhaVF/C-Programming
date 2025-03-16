//strlen() function in c
#include<stdio.h>
#include<string.h>

int main() {

    char str[15] = "Sudha";

    int len = strlen(str);

    printf("Length of the string = %d",len);
    return 0;
}