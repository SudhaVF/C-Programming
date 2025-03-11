// Break Statement in c
#include<stdio.h>
int main() {

    int i = 5;

    while(i < 10) {
        printf("i = %d\n", i);
        i++;

        if(i > 7) {
            break;
        }
    }
    return 0;

}