/*
CH-230-A
a4 p5.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_consonants(char str[]){
    int num_consonants = 0;
    for(int i=0; i < strlen(str); i++) {
        if (*(str + i)=='a' || *(str + i)=='e' || *(str + i)=='i' || *(str + i)=='o' ||
        *(str + i)=='u' || *(str + i)=='A' || *(str + i)=='E' || 
        *(str + i)=='I' || *(str + i)=='O' || *(str + i)=='U') {
        }

        else if ((*(str + i)>='a' && *(str + i) <= 'z') || (*(str + i)>='A' && *(str + i) <= 'Z')) {
            num_consonants += 1;
        }
    }
 return num_consonants;
}

int main() {
    int num[100];
    char string[100];

    //input into string and break when '\n' entered
    //also calls dunction and prints desiered output
    for (int i = 0; i < 100; i++)
    {
        fgets(string,sizeof(string),stdin);
        if (string[0] == '\n'){
            break;
        }
        num[i] =count_consonants(string);
        printf("Number of consonants=%d\n",num[i]);
    }
    return 0;
}