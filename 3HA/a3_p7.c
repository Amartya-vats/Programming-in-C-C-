/*
CH-230-A
a3 p7.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>

//funtions outputs the trapezoid using inputted values
void print_form(int n, int m, char c){
    int row;
    int column;
    
    //counts for the rows
    for (row=1; row<=n; row++){
        
        //counts for the columns
        for (column=1; column<=m; column++){
            printf("%c", c);
        }
        printf("\n");
        m++;
    }
}


int main(){
    int n,m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);

    //call function from above
    print_form(n, m, c);
    return 0;
}