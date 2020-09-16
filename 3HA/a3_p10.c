/*
CH-230-A
a3 p10.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

//function to multiply
float product(float a, float b){
    return a*b;
}

//function for multiplication by ref
void productbyref(float a, float b, float *p){
    float result;
    result = *p * b;
    printf("Result of second function: %f\n", result);
}

//function for modifying and return by ref
void modifybyref(float *a, float *b){
    float result2;
    result2 = (*a + 3) * (*b + 11);
    printf("Result of third function: %f\n", result2);
}

int main (){
    float f1,f2;
    scanf("%f", &f1);
    scanf("%f", &f2);

    //call product and print output
    product(f1,f2);
    printf("Result of first function: %f\n",product(f1,f2));

    //call productbyref and print output
    productbyref(f1,f2,&f1);

    printf("The call from the two above functions is the same as shown by the output\n");

    //call modifybyref and print output
    modifybyref(&f1,&f2);

    return 0;
}