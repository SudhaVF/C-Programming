// Create and call a function in c(Seperating definition and declartion)
#include<stdio.h>

//function declaration 
void demoFunction();

int main() {
    //function call
    demoFunction();

    return 0;
}

//function definition
void demoFunction() {
    printf("This is a demo function");

}
