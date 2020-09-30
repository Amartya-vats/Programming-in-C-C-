/*
CH-230-A
a8 p9.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    //declaring two strings and reading them from keyboard
    //the strings are the name of the file
    char strf1[50];
    char ch;
    int wordcount = 0;
    int Bool = 0;

    scanf ("%s", strf1);
    
    //opening the two files with the inputted name
    FILE * filein1 = fopen(strf1, "r");

    if(filein1 == NULL) {
        printf("Error in opening file");
    }

    if(filein1) {
        //while loop to check if the end of file is not reached
        while ((ch = fgetc(filein1)) != EOF) {
            //if statement to check for the caracters and change bool
            if (ch == ' ' || ch == '\n' || ch == '\t') { 
                Bool = 0;
            }
            //else we increment the word count
            else if(Bool == 0) {
                Bool = 1;
                ++wordcount;
            }
        }
    }

    //printing final word count
    printf("The file contains %d words\n", wordcount);

    getchar();

    //closing file
    fclose (filein1);
    return 0;
}