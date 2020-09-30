/*
CH-230-A
a9 p8.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
using namespace std;

//funtion for swapping two integers by real call by reference
void swapping (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//funtion for swapping two floats by real call by reference
void swapping (float &x, float &y) {
    float var = x;
    x=y;
    y=var;
} // swap floats

//funtion for swapping two strings by real call by reference
void swapping (const char *&str1, const char *&str2) {
    const char *tmp = str1;
    str1 = str2;
    str2 = tmp; 
} // swap char pointers


int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping (a, b);
    swapping (x, y);
    swapping (str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}