/*
CH-230-A
a4 p12.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void replaceAll(char *str, char c, char e) {

    //Using pointer instead of array
    for(int i = 0; *(str + i)!= '\0'; i++){
        if (*(str + i) == c){
            *(str + i) = e;
        }
    }
}


int main() {
    char str[50],c,e;

    //beginning an indefinate loop
    while(1){
        fgets(str, sizeof(str), stdin);

        //goes trhough string an removes keystrokes
        for(int i = 0; str[i]!= '\0'; i++) {
            if (str[i] == '\n') {
                str[i] = '\0';
            }
        }

        if(strcmp (str,"stop") == 0) {
           break;
        }
        
        scanf("%c",&c);
        getchar();
        scanf("%c",&e);
        
        printf("Original String: %s\n", str);

        //calling the function
        replaceAll(str,c,e);
        printf("New String: %s\n", str);
    }
    return 0;
}