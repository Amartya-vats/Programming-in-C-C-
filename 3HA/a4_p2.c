/*
CH-230-A
a4 p2.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char str[50];
    fgets (str, sizeof(str), stdin);
    printf("%s\n", str)
    return 0;
}