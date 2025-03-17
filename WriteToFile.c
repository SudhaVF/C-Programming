// Write to a file in c
#include<stdio.h>

int main() {

    FILE *fp;

    
    fp = fopen("","w");

    fprintf(fp, "This is a demo text");

    //Close the file
    fclose(fp);

    return 0;

}