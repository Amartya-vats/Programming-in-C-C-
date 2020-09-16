/*
CH-230-A
a4 p4.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_consonants(char str[]){
    int count = 0;
    int num_consonants = 0;
    for(int i=0; i < strlen(str) - 1; i++) {
        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || (str[i]>=' ' && str[i]<='@') || (str[i]>='[' && str[i]<='`') || (str[i]>='{' && str[i]<='~')){
            count++;
        }
        else{
            num_consonants++;
        }
    }
    return num_consonants;
}

int main(){
    char string[100];
    int i = 0;
    while (i < 20){
        fgets(string, sizeof(string), stdin);
        if (string[0] != '\n'){
            printf("Number of consonants=%d\n", count_consonants(string));
        }
        else if (string[0] == '\n' || string[1] == '\0'){
            break;
        }
    }
    return 0;
}