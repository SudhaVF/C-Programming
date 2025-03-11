// Arrays in c
#include<stdio.h>
int main() {

    int marks[3] = {90, 75, 80};
    int i, j;

    //display the elements
    for(i = 0; i < 3; i++){
        printf("Marks[%d] = %d\n", i,  marks[i]);
    }

    printf("\nMarks of the 1st student = %d", marks[0]);
    printf("\nMarks of the 2nd student = %d", marks[1]);
    printf("\nMarks of the 3rd student = %d", marks[2]);

    return 0;
}