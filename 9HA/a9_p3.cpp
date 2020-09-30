/*
CH-230-A
a9 p1.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
using namespace std;

int abs (int x) {
    if (x<0) {
        return -x;
    }
    else {
        return x;
    }
}

int main () {

    //declaring
    int num;

    //scaning or reading the string (without spaces)
    cin >> num;

    //printing the string
    cout << abs(num) << endl;
    return 0;
}