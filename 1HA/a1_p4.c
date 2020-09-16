/*
CH-230-A
a1 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int x = 17;
    int y = 4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", x+y);
    printf("product=%d\n",x*y);
    printf("difference=%d\n", x-y);
    printf("division=%lf\n", (double) x/y);
    printf("remainder of division=%d\n", x%y); /*This is a modulus operator which gives out the remainder*/
    return 0;
}