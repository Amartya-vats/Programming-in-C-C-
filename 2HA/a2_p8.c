/*
CH-230-A
a2 p8.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
int main() 
{
    int num;
    scanf ("%d",&num);

    //checks is number is divisible by 2 & 7
    if (num%7==0 && num%2==0) {
        printf("The number is divisible by 2 and 7\n");
    } 

    //otherwise the following is  printeds
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}