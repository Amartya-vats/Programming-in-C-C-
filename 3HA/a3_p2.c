/*
CH-230-A
a3 p2.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
int main(){
    char ch;
    int n;

    scanf ("%c",&ch);
    scanf ("%d",&n);
    
    //creates the patterned output
    for (int i =0 ; i<=n; i++){
        
        // for the first ch
        if (i==0){
            printf ("%c,",ch);
        }
        // others in the loop
        else if (i<<n && i!=n){
            printf ("%c - %d,",ch,i);
        }
        // last one without the ','
        else if (i==n){
            printf ("%c - %d",ch,n);
        }
    }

    // just to go in a new row
    printf ("\n");

    return 0;
}