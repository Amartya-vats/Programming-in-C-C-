/*
CH-230-A
a6 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

//funtion to change the places inputted to a
int set3bits(unsigned char x,int n1,int n2,int n3){
    //this uses a mask and checks compares the value at the place enter by user
    x |=1 << n1;
    x |=1 << n2;
    x |=1 << n3;
    return x;
}

int main() {
    //scaning and declaring an character ch
    unsigned char ch;
    scanf("%c", &ch);

    //scaning the bits
    int bit1,bit2,bit3;
    scanf("%d", &bit1);
    scanf("%d", &bit2);
    scanf("%d", &bit3);

    //printing ASCII number
    printf("The decimal representation is: %d\n", ch);

    //binary representation
    printf("The binary representation is: ");

    //for loop using a mask and bitwise operators
    for (int i=7; i >= 0; i--) {
        printf("%d", (ch >> i)&1 ? 1 : 0);
    }
    printf("\n");
    printf("After setting the bits: ");
    
    //printing binary fo the decimal number returned
    for (int i=7; i >= 0; i--) {
        printf("%d", (set3bits(ch,bit1,bit2,bit3) >> i)&1 ? 1 : 0);
    }
    printf("\n");
	return 0;
}