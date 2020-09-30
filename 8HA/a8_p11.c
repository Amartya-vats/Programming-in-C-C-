/*
CH-230-A
a8 p9.c
Amartya Vats
a.vats@jacobs-university.de
*/

//incomplete

#include <stdio.h>
#include <stdlib.h>

int main () {
    int Num_file;
    scanf("%d", &Num_file);
    char str[30];

    FILE * file1;
    char buff1[512];
    if(file1 == NULL) {
        printf("error occured in opening file\n");
        exit(0);
    }

    FILE * fileout = fopen("output.txt", "w");

    for (int i=0; i<Num_file; i++) {
        fgets(str,512,stdin);
        file1 = fopen(str, "r");
        fputs(fgets(buff1,512,file1),fileout);
        fprintf(file1,"%s", fgets(buff1,512,file1),fileout);
    }
    return 0;
}