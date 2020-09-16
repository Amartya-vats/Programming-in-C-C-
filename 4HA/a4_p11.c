/*
CH-230-A
a4 p11.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int count_insensitive(char *str, char c){
    int count;

    //Using pointer
    for(int i = 0; *(str + i)!= '\0'; i++){
        if (*(str + i) == c){
            count = count + 1;
        }
    }
    return count;
}

int main () {
    char string_char[30], *str, c;

    //scaning memory
    printf("Please enter a string\n");
    fgets(string_char, sizeof(string_char), stdin);
    int n = strlen(string_char);
    
    //allocating memory
    str = (char*) malloc(sizeof(char)*(n));
    if (str== NULL) {
        exit(1);
    }
    strcpy(str,string_char);
    
    //scaning char
    printf("Please enter a char\n");
    scanf("%c", &c);

    //changing c into lower case
    if (c>='A'&& c<='Z') {
       c = (char) tolower((int)c);
    }

    //changing string to lower case
    for(int i = 0; i <= n; i++){
        if(str[i]>='A'&&str[i]<= 'Z'){
            str[i] = (char)tolower((int)str[i]);
        }
    }

    //calling function
    printf("The character ’%c’ occurs %d times.\n",c,count_insensitive(str,c));
    return 0;
}