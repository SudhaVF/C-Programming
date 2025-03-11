#include<stdio.h>
int main(){
    int a, b, c;
    int res;

    printf("Enter the 1st number =");
    scanf("%d", &a);
    printf("Enter the 2nd number =");
    scanf("%d", &b);
    printf("Enter the 3rd number =");
    scanf("%d", &c);

    res = a*b*c;
    printf("Multiplication Result = %d",res);

    return 0;
}