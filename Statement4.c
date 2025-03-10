// if-else if-else  Statement in c
#include<stdio.h>
int main(){

    int a = 20;

    if(a > 100){
        printf("The value is more than 100");
    }else if(a > 75){
        printf("The value is more than 75");
    }else if(a > 50){
        printf("The value is more than 50");
    }else{
        printf("The value is less than 50");
    }

    return 0;

}