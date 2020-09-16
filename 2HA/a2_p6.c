/*
CH-230-A
a2 p6.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);

    // declaring the pointers 
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;

    // output the address for ptr_one & pyr_two
    printf ("the address of ptr_one is %p\n",ptr_one);
    printf ("the address of ptr_two is %p\n",ptr_two);
    printf ("From the above you can tell both address are equal\n");

    // output the address for ptr_three
    printf ("the address of ptr_three is %p\n",ptr_three);
    printf ("the address of ptr_three is different from both the above addresses\n");
    
    return 0;
}
