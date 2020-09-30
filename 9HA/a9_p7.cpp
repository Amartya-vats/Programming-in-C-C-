/*
CH-230-A
a9 p1.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
#include <cmath>
using namespace std;

//funtion for integer inputs
int myfirst (int arr[], int n) {
    int b;
    int count = 0;

    //loop to gothrough the array
    for(int i=0; i<n; i++) {

        //if to check if the condition in question is satisfied
        if (arr[i] >=0 && arr[i] % 2 == 0) {
            b=arr[i];
            break;
        }
        count++;
    }

    //statement to check for any modifications and return accordingly 
    if (count<n) {
        return b;
    }
    else {
        return -1;
    }
    
}

double myfirst (double arr[], int n) {
    int b;
    double x;
    int count = 0;

   //loop to gothrough the array
    for(int i=0; i<n; i++) {

        //if to check if the condition in question is satisfied
        b=arr[i];
        x=arr[i]-b;
        if (arr[i]<0 && x == 0) {
            break;
        }
        count++;
    }

    //statement to check for any modifications and return accordingly
    if(count < n) {
        return b;
    }
    else {
        return -1.1;
    }
}

char myfirst (char arr[], int n) {
    int count = 0;
    int val = 0;
    char b;

    //array of all the consonents easier to check
    char consonents[] = {'B','b','C','c','D','d','F','f','G','g','H','h','J','j','K','k',
    'L','l','M','m','N','n','P','p','Q','q','R','r','S','s','T','t','V','v',
    'W','w','X','x','Y','y','Z','z'};

    //loop to gothrough the array
    for(int i=0; i<n; i++) {

        //loop for all the consonents that exist
        for (int j=0; j<42; j++) {

            //checks if the char in array is equal to any of the consonents
            if (arr[i] == consonents[j]) {
                b=arr[i];
                val++;
                break;
            }
        }
        if(val == 1) {
            break;
        }
        count++;
    }

    //statement to check for any modifications and return accordingly
    if (count<n) {
        return b;
    }
    else {
        return '0';
    }
}
 
int main () {

    //declaring for an array of integers using initialised variables
    int array[5] = {-3,-8,4,0,4};
    int temp = myfirst(array,5);

    //if check for the returned value by function and prints accordingly
    if (temp == -1) {
        cout << "No element exist which is positive and even" << endl;
    }
    else if(temp > 0) {
        cout << "The first positive and even number is " << temp << endl;
    }

    //declaring for an array of doubles using initialised variables
    double array_dou[5] = {1.5,3.4,2.0,-8.0,3.3};

    //if check for the returned value by function and prints accordingly
    if (myfirst(array_dou,5) == -1.1) {
        cout << "No number exists that has a negative sign and a non frational part" << endl;
    }
    else {
        cout<< "The first negative element with no fractional part is " << myfirst(array_dou,5) << endl;
    }

    //declaring for an array of chars using initialised variables
    char arr_char[5] = {'a','e','d','i','o'};
    int x = myfirst(arr_char,5);

    //if check for the returned value by function and prints accordingly
    if (x > 0) {
        cout << "The first consonent occurs at " << x << endl; 
    }
    else if(x == 0) {
        cout << "There is no consonent in array" << endl;
    }
    return 0;
}