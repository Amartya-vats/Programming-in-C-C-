/*
CH-230-A
a8 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//defined a max size for buffer
#define SIZE 1024

int main () {

    //creating files to read from
    FILE * filein1 = fopen("text1.txt", "r");
    FILE * filein2 = fopen("text2.txt", "r");

    //file to write in
    FILE * fileout = fopen("merge12.txt", "w");
    
    //buffer declaration
    char buff1[SIZE];
    char buff2[SIZE];

    //while loop goes till the end of file is reached
    while (!feof(filein1) || !feof(filein2)) {

        //if statement checks for mistaching size of fles
        if (!feof(filein1)) {
            fputs(fgets(buff1,SIZE,filein1),fileout);
        }
        if (!feof(filein2)) {
            fputs(fgets(buff2,SIZE,filein2),fileout);
        }
    }

    //closing all the files
    fclose (filein1);
    fclose (filein2);
    fclose (fileout);
    return 0;
}