/*
CH-230-A
a3 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
int main(){
    float x;
    int n=0;
    scanf("%f",&x);
    scanf("%d",&n);

    while (n<=0){
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
    }

    for (int i=1;i<=n;i++){
        printf("%f\n",x);
    }
    return 0;
}