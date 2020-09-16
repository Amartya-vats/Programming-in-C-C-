/*
CH-230-A
a6 p5.c
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

    //binary representation (including for loop)
    printf("The backwards binary representation is: ");

    //for loop using a mask and bitwise operators to print the output
    for (int i=0; i <= 7; i++) {

        //checks and removes any zeros at the end of binanry code
        if ((ch>>i) == 0){
            break;
        }
        else {
            printf("%d", (ch >> i)&1 ? 1 : 0);
        }
    }
    printf("\n");
	return 0;
}