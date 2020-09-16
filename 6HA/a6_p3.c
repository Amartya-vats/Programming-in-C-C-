/*
CH-230-A
a6 p3.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

//declaring definations
#define MAX1(a,b) ((a)>(b) ? (a) : (b))
#define MIN1(b,c) ((b)<(c) ? (b) : (c))
#define MAX2(a,b,c) (MAX1(MAX1((a),(b)),c))
#define MIN2(a,b,c) (MIN1(MIN1((a),(b)),c))

//the (float) is used to set the returned value as a float which is desired)
#define MID_RANGE(x,y,z) ((float)(MIN2(x,y,z) + MAX2(x,y,z))/2)

int main() {
    //declaration of character and scaning
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    //calling funtion and printing the output
    printf("The mid-range is: %.6f\n", MID_RANGE(a,b,c));
	return 0;
}