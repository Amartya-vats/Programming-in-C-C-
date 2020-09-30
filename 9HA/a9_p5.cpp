/*
CH-230-A
a9 p1.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;

int main () {

    //declaring
    string str;
    string str_concat;
    int Bool = 0;

    //scaning or reading the string (without spaces)
    while (Bool == 0) {
        cin >> str;
        if (str == "quit") {
            Bool = 1;
        }
        else {
            str_concat.append(str);
        }
    }
    
    //printing the string
    cout << str_concat << endl;
    return 0;
}