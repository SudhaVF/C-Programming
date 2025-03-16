#include<stdio.h>
struct Student {
    char name[100];
    int roll;
    int marks;
};
int main() {
    struct Student s[10];
    int i;
    printf("Enter the details name,roll,marks");
    for(i=0;i<=9;i++){
        scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
    }
    return 0;
}