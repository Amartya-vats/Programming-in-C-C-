/*
CH-230-A
a1 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/
#include <stdio.h>
int main() {
int result; /* The result of our calculation */
result = (2 + 7) * 9 / 3;
printf("The result is %d\n", result); /* the variable was not mentioned 
so the program did not know what to print*/
return 0;
}