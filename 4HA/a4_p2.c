/*
CH-230-A
a4 p2.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    fgets (str, sizeof(str), stdin);
    int idx = 0;
    while (idx < strlen(str) - 1)
    {
        if (idx%2 == 1){
            printf(" %c\n", str[idx]);
        }
        if (idx%2 == 0){
            printf("%c\n", str[idx]);
        }
        idx ++;
    }
    return 0;
}