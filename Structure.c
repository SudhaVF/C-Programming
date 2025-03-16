// Structures example in c
#include<stdio.h>

struct Emp {
    char name[15];
    int age;
    char zone[10];
    float salary;
};

int main() {
    struct Emp e1 = {"Sudha", 22,"East",40000.5};

    printf("Employee Name = %s\n", e1.name);
    printf("Employee Age = %d\n", e1.age);
    printf("Employee Zone = %s\n", e1.zone);
    printf("Employee Salary = %.2f\n", e1.salary);

    return 0;
}