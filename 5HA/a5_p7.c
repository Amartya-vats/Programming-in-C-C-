/*
CH-230-A
a5 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    //declaring string and other variables
    char string1[100],string2[100];
    char* string3;
    int len1,len2;
    int i;

    //scaning strings
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    //memory allocation for a third string using length of other two strings
    len1 = strlen(string1);
    len2 = strlen(string2);
    string3 = (char*) malloc(sizeof(char) * (len1+len2+1));

    //inputting the strings into a third string (concatenation step)
    for(i=0; string1[i]!='\n'; i++) {
        string3[i]= string1[i];
    }
    for(int j=0; string2[j]!='\n'; j++,i++) {
        string3[i]= string2[j];
    }

    //printing output
    printf("Result of concatenation: %s\n", string3);
    free(string3);
    return 0;
}