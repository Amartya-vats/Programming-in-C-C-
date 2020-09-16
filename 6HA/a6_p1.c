/*
CH-230-A
a6 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

//defining a macro with three arguments (third one is a auxiliary arguement - using type)
#define SWAP(x,y,t) {t AUX=x;x=y;y=AUX;} 

int main() {
	int a,b;
    double x,y;
	
    //scaning inputs
	scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lf",&x);
    scanf("%lf",&y);

    //calling swap funiton twice as each set of input has a different type
	SWAP(a,b,int);
    SWAP(x,y,double);

    //printing after the macro swap is done
	printf("After swapping:\n%d\n%d\n%lf\n%lf\n",a,b,x,y);
	return 0;
}