/*
CH-230-A
a9 p1.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
#include <cstring>
using namespace std;

//function to check from both sides of the string if it is the same
bool isPalindrome(string s) {
    if (s == string(s.rbegin() , s.rend())) {
        return true;
    }
    else return false;
}

int main () {

    //declaring and scanning a string inside while loop
    string input;
    while (input != "quit") {
        cin >> input;

        //call the function and checks for the reult and prints accordingly
        if (input == "quit") {
            break;
        }
        else if (isPalindrome(input) == 1) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
    }
    return 0;
}