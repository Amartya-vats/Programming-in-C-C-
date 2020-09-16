/*
CH-230-A
a6 p2.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
//defination of least significant checking using a mask of 00000001
#define leastsig(M) (M&1)

int main() {
    //declaration of character and scaning
    unsigned char ch;
    scanf("%c",&ch);

    //printing after the macro swap is done
	printf("The decimal representation is: %u\n", ch);

    //calling funtion and printing the output
    printf("The least significant bit is: %d\n", leastsig(ch));
	return 0;
}