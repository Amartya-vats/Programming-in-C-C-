/*
CH-230-A
a4 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include<math.h>

int main() {
    //gets values
    float x;
    float low, upp;
    float step_size;
    scanf("%f", &low);
    scanf("%f", &upp);
    scanf("%f", &step_size);

    //prints value area and perimeter
    for (x = low; x<=upp; x+= step_size){
        printf("%f %f %f\n", x, (x * x * M_PI), (2 * M_PI * x));
    }
    
    return 0;
}