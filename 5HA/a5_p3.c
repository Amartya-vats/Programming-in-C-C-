/*
CH-230-A
a5 p3.c
Amartya Vats
a.vats@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

//funtion for counting the number of lower case letters
int count_lower(char* str) {
    int count = 0;

    //loop to check if each element in the string is lowercase or not
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }

        //to come out of each input
        else if (str[0] == '\n') {
            break;
        }
    }
    //printf("%d\n",count);
    return count;
}

int main () {
    //calling function and printing the return
    char string[50];
    
    //loop to enter many  inputs breaks by '\n'
    while (1) {
        if (string[0] == '\n') {
            break;
        }
        fgets (string, 50, stdin);
        printf("Number of lowercase letters: %d\n", count_lower(string));
    }
    return 0;
}