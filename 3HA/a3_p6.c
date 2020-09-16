/*
CH-230-A
a3 p6.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
float to_pounds(int kg, int g){
    float pounds;
    pounds = kg * 2.2 + g * 0.0022;
    return pounds;
}

int main(){
    int kg,g;
    scanf("%d", &kg);
    scanf("%d", &g);
    to_pounds(kg,g);
    printf("Result of conversion: %f\n", to_pounds(kg,g));

    return 0;
}