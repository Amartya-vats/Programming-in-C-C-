/*
CH-230-A
a3 p9.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

double v[20];

double sum25(double v[20], int n) {
    double s;
    if (v[2] != 0 || v[5] != 0) {
        s = v[2] + v[5];
        return s;
    }
    else {
        return -111;
    }
}

int main () {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%lf", &v[i]);
    }

    sum25(v,n);
    if(v[2] != 0 || v[5] != 0){
        printf("sum=%lf\n", sum25(v,n));
    }
    if (v[2] == 0 || v[5] == 0){
        printf("One or both positions are invalid\n");
    }
    return 0;
}