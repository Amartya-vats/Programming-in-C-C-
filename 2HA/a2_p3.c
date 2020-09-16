/*
CH-230-A
a2 p3.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int weeks =0 , days =0  , hours =0;
    printf("please enter the weeks :");
    scanf("%d" , &weeks);
    int hrw = weeks * 168;
    printf("please enter the days :");
    scanf("%d" ,&days);
    int hrd = days * 24;
    printf("please enter the hours :");
    scanf("%d" ,&hours);
    int total = hrw + hrd + hours;
    printf("The total number of hours = %d\n",total);
    
    return 0;
}