// Function with multiple parameter
#include<stdio.h>

//Function declaration
void detailsFunc(char player[],int rank,int points){
    printf("Player Name = %s\n",player);
    printf("Rank = %d\n",rank);
    printf("Points = %d\n",points);
}

int main() {
    
    // call the function
    detailsFunc("Sudha",1,100);

    return 0;
}