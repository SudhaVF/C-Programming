// Enum in c
#include<stdio.h>

enum Directions {
    NORTH,
    SOUTH,
    EAST,
    WEST
};

int main() {

    //Create enum variables
    enum Directions d1, d2;

    //Assign Value
    d1 = NORTH;
    printf("%d\n",d1);

    d2 = SOUTH;
    printf("%d\n", d2);

    return 0;


}