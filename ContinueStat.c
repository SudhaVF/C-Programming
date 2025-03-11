// Continue Statement in c
#include<stdio.h>
int main() {

    int i = 100;

    do {
        if(i == 110) {
            i = i + 1;
            continue;
        }
        printf("%d\n",i);
        i++;
    }while(i < 115);
    return 0;
}