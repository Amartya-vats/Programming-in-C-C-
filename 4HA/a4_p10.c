/*
CH-230-A
a4 p10.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//function as defined in question
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
    *prod = (a*b);
    *div = (a/b);
    *pwr = powf(b,a);
    *invb = (1/b);
}

int main () {

    //defining variables and pointers
    float a,b;
    float p,d,pw,inv;
    float *ptr_prod;
    ptr_prod = &p;
    float *ptr_div;
    ptr_div = &d;
    float *ptr_pwr;
    ptr_pwr = &pw;
    float *ptr_invb;
    ptr_invb = &inv;

    //inputting variables
    printf("Please enter two floats\n");
    scanf("%f", &a);
    scanf("%f", &b);

    //calling function
    proddivpowinv(a, b, ptr_prod, ptr_div, ptr_pwr, ptr_invb);

    //printing the output
    printf("%f\n", *ptr_prod);
    printf("%f\n", *ptr_div);
    printf("%f\n", *ptr_pwr);
    printf("%f\n", *ptr_invb);
    return 0;
}