/*
CH-230-A
a2 p10.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
int main() 
{
    int n;
    int i = 1;
    scanf("%d",&n);

    // checks if number enetered is valid
    while (i > n){
        printf ("an invalid integer n was entered \n");
        scanf("%d",&n);
    }

    // provides the output
    while (i <= n){
        printf("%d days = %d hours\n",i,i*24);
        i++;
    }
    return 0;
}