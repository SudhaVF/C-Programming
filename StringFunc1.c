//strcmp() function in c
#include<stdio.h>
#include<string.h>

int main() {

    char str1[10] = "Hello";
    char str2[10];

    int result = strcmp(str1, str2);
    if(result == 0){
        printf("str1 and str2 are equal");
    }else {
        printf("Both are not equal");
    }
    return 0;
}