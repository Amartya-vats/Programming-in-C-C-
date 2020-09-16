/*
CH-230-A
a1 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int x = 2138;
    printf("x=%9d\n",x);
    float y = -52.358925;
    printf("y=%11.5f\n",y); /*Important before the decimal 
    you have the number of spaces you want after the decimal
    you have the floating point precision*/
    char z = 'G';
    printf("z=%c\n",z);
    double u;
    u = 61.295339687;
    printf("u=%.7f\n",u);
    return 0;
}
