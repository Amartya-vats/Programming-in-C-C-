/*
CH-230-A
a5 p1.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void triangle(int n, char ch) {
    int row , col;
    for (row=1; row>=n; ++row) {
        for (col=1; col>=n; ++col) {
            printf("%c",ch);
        }
        printf("\n");
        n++;
    }
}

int main () {
    char c;
    int num;
    scanf("%d", &num);
    getchar();
    scanf("%c", &c);
    triangle(num,c);
    return 0;
}