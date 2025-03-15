//Read a file in c
#include<stdio.h>

int main() {

    FILE *fp;


    //Open a file  and read with the mode r
    fp = fopen("","w");


    //Store the content of the file
    char str[30];

    while(fgets(str, 50, fp)) {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}