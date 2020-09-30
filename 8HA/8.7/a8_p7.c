/*
CH-230-A
a8 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


int main () {

    //declaring two strings and reading them from keyboard
    //the strings are the name of the file
    char strf1[50];
    char strf2[50];
    double input1 = 0.0, input2 = 0.0;

    scanf ("%s", strf1);
    scanf ("%s", strf2);

    //opening the two files with the inputted name
    FILE * filein1 = fopen(strf1, "r");
    FILE * filein2 = fopen(strf2, "r");

    //scaning the two file for input
    fscanf(filein1,"%lf",&input1);
    fscanf(filein2,"%lf",&input2);

    //opening an third file with the desired outputs
    FILE * output = fopen ("results.txt", "w");
    fprintf(output, "%lf ", input1+input2);
    fprintf(output, "%lf ", input1-input2);
    fprintf(output, "%lf ", (input1) * (input2));
    fprintf(output, "%lf ", (input1)/(input2));

    //closing all files
    fclose (filein1);
    fclose (filein2);
    fclose (output);
    return 0;
}