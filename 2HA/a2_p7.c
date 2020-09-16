/*
CH-230-A
a2 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int i = 8;

    // prints the output in between 4 & 8
    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    } 
    printf("That’s it.\n");
    
    return 0;
}