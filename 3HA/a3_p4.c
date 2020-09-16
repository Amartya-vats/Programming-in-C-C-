/*
CH-230-A
a3 p4.c
Amartya Vats
myemail@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c){
    int idx;
    
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; idx++)
    {} /* it prints zero as the for loop was not executed */
    
    /* do nothing */
    return idx;
}

int main() {
    //no while loop as we need to break out. we are not looping
    char line[80];
    printf("Enter string:\n");
    fgets(line, sizeof(line), stdin);
    printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
    return 0;
}

