/*
CH-230-A
a2 p5.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int a;
    scanf ("%d",&a);
    int *ptr_a;
    ptr_a = &a;

    //prints the address
    printf("the address of a: %p\n", ptr_a);

    //increses the content of ptr_a by 5
    *ptr_a = *ptr_a + 5;

    //prints the new content(value of a)
    printf("the new value of a is %d\n",*ptr_a);

    //address still remains the same
    printf("the address of a is %p\n",ptr_a);
    
    return 0;
}