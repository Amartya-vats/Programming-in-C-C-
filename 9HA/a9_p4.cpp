/*
CH-230-A
a9 p1.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
using namespace std;

//function for two integers
int mycount (int a, int b) {
    return b-a;
}

//function for character and a string
int mycount (char c, string s) {
    int charcount = 0;
    for (int i=0; i<s.size(); i++) {
        if (s.at(i) == c) {
            ++ charcount;
        }
    }
    return charcount;
}

int main () {

    //declaring
    int ifirst, isecond;
    char ch;
    string str;

    //scaning or reading the string (without spaces)
    cin >> ifirst >> isecond;
    cin >> ch;
    getchar();
    getline (cin,str);

    //printing the string
    cout << mycount(ifirst,isecond) << endl;
    cout << mycount(ch,str) << endl;
    return 0;
}