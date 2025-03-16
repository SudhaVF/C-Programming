//strcat() function in c
#include<stdio.h>
#include<string.h>

int main() {

    char str[10] = "Sudha";

    strcat(str, " Fadi");

    printf("%s",str);

    return 0;
}