/*
CH-230-A
a1 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/
#include <stdio.h> /*the library is not included without the #*/
int main() 
{
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; /* as b is in decimal it is not an 
    integers (int) therefore the variable must be a float*/
    result = a / b;
    printf("The result is %lf\n", result); /*as b is a float the answer
    printed by the computer will also be a an float hence '%lf or %f'*/
    return 0;
}