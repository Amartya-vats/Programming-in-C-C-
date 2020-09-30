/*
CH-230-A
a7 p4.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//function for toggling
void upplowswap(char *str){
    //I toogled using ASCII codes as it is easier
    for (int i=0;i<strlen(str);i++)
    {
        //if statement to change lower to upper
        if(str[i]>=97 && str[i]<=122){
        printf("%c",toupper(str[i]));
        }
        //to change upper to lower
        else if(str[i]>=65 && str[i]<=90) {
        printf("%c",tolower(str[i]));
        }
        //printing the string again
        else{
            printf("%c",str[i]);
        }
    }
}

//function for creating the list upper
void Allupp(char *str) {
    for(int i = 0; i< strlen(str); i++) {
        printf("%c",toupper(str[i]));
    }
}

//fucntion for all lower
void Alllow(char *str) {
    for(int i = 0; i< strlen(str); i++) {
        printf("%c",tolower(str[i]));
    }
}

//function for quit
void quit (char str[]) {
    exit(0);
}

int main() {
    //function pointer
    void (*use[4])(char *) = {Allupp,Alllow,upplowswap,quit};
    char str[100];
    //scaning for list
    fgets(str,sizeof(str),stdin);
    int input=0;
    //while loop
    while(input != 4) {
        scanf ("%d",&input);
        use[input-1](str);
    }
    return 0;
}