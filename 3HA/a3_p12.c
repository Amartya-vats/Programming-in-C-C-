/*
CH-230-A
a3 p12.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main () {
    char one[50];
    char two[200];
    char c;

    scanf("%[^\n]%*c", one);
    scanf("%[^\n]%*c", two);
    scanf("%c",&c);
    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));
    
    char concat[500];
    strcat(concat, one);
    strcat(concat, two);
    printf("concatenation=%s\n",concat);
    
    char three[50];
    memcpy(three, two, strlen(two)+1);
    printf("copy=%s\n",three);

    int comp = strcmp (one, two);
    if (comp > 0) {
        printf("one is larger than two\n");
    }
    else if(comp<0) {
        printf("one is smaller than two\n");
    }
    else {
        printf("one is equal to two\n");
    }

    //search for a character
    for(int i=0; i<=strlen(two); i++){
        if(two[i] == c){
            printf("position=%d\n",i);
        }
    }

    if (c <= 100 || c >= 123){
            printf("The character is not in the string\n");
        }
    return 0;
}