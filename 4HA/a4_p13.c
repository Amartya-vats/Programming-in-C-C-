/*
CH-230-A
a4 p13.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//function for upper case
void uppcase(char *str) {

    //Using pointer instead of array
    for(int i = 0; *(str + i)!= '\0'; i++) {

        //checks for a lower case and replaces it 
        if (islower(*(str + i))){
            *(str+i) = (char)toupper((int)*(str +i)); 
        }
    }
}

//similarly function for lower case
void lowcase(char *str) {
    for(int i = 0; *(str + i)!= '\0'; i++){
        if (isupper(*(str + i))){
            *(str+i) = (char)tolower((int)*(str +i)); 
        }   
    }
}

int main(){
    char str[50];
    
    //thi is an indefinate loop
    while(1){

        //input numbers
        fgets(str,sizeof(str),stdin);

        //goes trhough string an removes keystrokes
        for(int i = 0; str[i]!= '\0'; i++) {
            if (str[i] == '\n'){
                str[i] = '\0';
            }
        }

        if(strcmp (str,"exit") == 0) {
            break;
        }

        //calling functions
        uppcase(str);
        printf("uppcase=%s\n",str);
        lowcase(str);
        printf("lowcase=%s\n",str);       
    }
    return 0;
}