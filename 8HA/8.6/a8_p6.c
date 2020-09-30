/*
CH-230-A
a8 p6.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


int main () {
    //initialization and declaration
    char a = '\0',b = '\0';

    //creating a file to read from
    FILE * filein = fopen("chars.txt", "r");

    //creating a file for printing the result of addition
    FILE * fileout = fopen("codesum.txt", "w");

    if (filein == NULL || fileout == NULL) {
        printf("Can't open file");
        exit(0);
    }
    //scaning the first two characters only
    fscanf(filein,"%c%c",&a,&b);

    //print the reault of addition in a file
    fprintf(fileout, "%d\n", a + b);

    //closing the files
    fclose (filein);
    fclose (fileout);
    return 0;
}
