/*
CH-230-A
a9 p10.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

//function to replace all the vowels with '_'
//question does not mention about capital letters - I included them
//double spaces look like on long space
string replace (string the_word) {
    int len = the_word.length();
    for(int i = 0; i < len; i++) {
        if(the_word[i] == 'a' || the_word[i] == 'e' || the_word[i] == 'i' || the_word[i] == 'o' || the_word[i] == 'u' || 
        the_word[i] == 'A' || the_word[i] == 'E' || the_word[i] == 'I'  || the_word[i] == 'O' || the_word[i] == 'U') {
            the_word[i] = '_';
        }
    }
    return the_word;
}

int main () {

    //initializing random number generator
    srand(static_cast<unsigned int>(time (0)));
    
    //initializing the string
    //uses 17 already chosen words
    const string words [17] = {"computer", "television", "keyboard", "laptop", "mouse", "Arduino", "Micro-controllers", 
    "Motors", "USB", "hello", "Apple", "Windows", "Linux", "Operating System", "Goodbye", "Computers" ,"CPU"};
    
    //this step pics a word at random
    string word = words[rand() % 17];

    //calling function and printing result
    cout << replace (word) << endl;

    //users input using a do while loop
    //loop ends when the user inputs the correct word
    int player_count = 1;
    string player_input;
    do {
        cin >> player_input;
        //if the input is correct a congratulations message is printed with number of tries
        if (player_input == word) {
            cout << "Congratulations!" << endl;
            cout << "You took " << player_count << " tries" << endl;
        }
        else if (player_input == "quit"){
            exit(0);
        }
        player_count ++;
    }while (player_input != word);
    return 0;
}