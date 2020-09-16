/*
CH-230-A
a2 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
int main()
{
    double var1 , var2;
    scanf("%lf" , &var1);
    scanf("%lf" , &var2);

    int a,b;
    scanf("%d" , &a);
    scanf("%d" , &b);

    char line1 ,line2;
    getchar();
    scanf("%c" , &line1);
    getchar();
    scanf("%c" , &line2);

    double sum = var1 + var2;
    printf("sum of doubles=%lf\n",sum);
    double diff = var1 - var2;
    printf("difference of doubles=%lf\n",diff);
    double squr = var1 * var1;
    printf("square=%lf\n",squr);

    int add = a+b;
    printf("sum of integers=%d\n",add);
    int prod = a * b;
    printf("product of integers=%d\n",prod);

    char s = line1 + line2;
    printf("sum of chars=%d\n",line1 + line2);
    //char p = line1 * line2; 
    printf("product of chars=%d\n",line1 * line2);
    printf("sum of chars=%c\n",s);
    printf("product of chars=%c\n",line1 * line2);
    return 0;
}