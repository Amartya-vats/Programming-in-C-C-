/*
CH-230-A
a2 p9.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
int main() 
{
    char chr;
    scanf ("%c",&chr);

    // ASCII for letters
    if (65<=chr && chr<=90) {
        printf("%c is a letter\n",chr);
    }

    // ASCII for lower case letters
    else if (97<=chr && chr<=122) {
        printf("%c is a letter\n",chr);
    }

    // ASCII for digits(numbers)
    else if(48<=chr && chr<=57){
        printf("%c is a digit\n",chr);
    }

    // All other symbols
    else{
        printf("%c is some other symbol\n",chr);
    }

    return 0;
}