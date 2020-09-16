/*
CH-230-A
a6 p6.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

int main() {
    //scaning and declaring an character ch
    unsigned char ch;
    scanf("%c", &ch);

    //printing ASCII number
    printf("The decimal representation is: %d\n", ch);

    //binary representation
    printf("The binary representation is: ");

    //for loop using a mask and bitwise operators
    for (int i=7; i >= 0; i--) {
        printf("%d", (ch >> i)&1 ? 1 : 0);
    }
    printf("\n");
	return 0;
}