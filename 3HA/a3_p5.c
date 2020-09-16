/*
CH-230-A
a3 p5.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
int main(){
    char c;
    int n = 0;
    scanf("%c", &c);
    scanf("%d", &n);
    double arry1[n];
    double sum = 0.0;

    //input the values into the array
    for(int i=1; i<=n; i++) {
        scanf("%lf", &arry1[i]);
    }

    //swtich cases to do comparsion
    switch (c) {
    
        //first case for sum
        case 's':
            for(int i=0; i<=n; i++) {
                sum += arry1[i];
            }
            printf("%lf\n", sum);
            break;
        
        //second case for list
        case 'p':
            printf("list of temp in Celsius\n");
            for (int i=1; i<=n; i++){
                printf("%lf\n",arry1[i]);
            }
            break;
        
        //third case for list in Fahrenheit
        case 't':
            printf("list of temp in Fahrenheit\n");
            for (int i=1; i<=n; i++){
                printf("%lf\n",(((9/5)*(arry1[i]))+32));
            }
            break;
        
        //default for all other inputs
        default:
            for(int i=1; i<=n; i++) {
                sum += arry1[i];
            }
            double avg = sum / n;
            printf("The average of Temp : %lf\n", avg);
    }
    return 0;
}