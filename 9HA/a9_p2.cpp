/*
CH-230-A
a9 p2.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main () {
    
    //declaration of variables
    int n;
    double x;
    string s;

    //scaning variables
    cin >> n >> x >> s;

    //for loop in which it prints the desired output the number of times
    for (int i=0; i<n; i++) {
        cout << s << ':' << x << endl;
    }
    return 0;
}