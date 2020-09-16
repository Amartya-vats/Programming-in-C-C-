/*
CH-230-A
a1 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/
#include <stdio.h>
int main() {
double result; /* The result of our calculation */
result = (double)(3 + 1) / 5; /* the problem inicially was 
both numerator and denominator are natural numbers
however the result was an Integer containing decimals places*/
printf("The value of 4/5 is %lf\n", result);
return 0;
}