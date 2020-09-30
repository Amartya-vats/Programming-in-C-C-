/*
CH-230-A
a9 p9.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
#include <new>
using namespace std;

//funtion for subtract
//does not return anything as void but it modifies the array due to the way it is called
void subtract_max (int * &arr, int num) {
    int max = arr[0];
    int i =0;
    int k=0;
    //loop to find maximum
    while (i < num) {
        if (max < arr[i]) {
            max = arr[i];
        }
        i++;
    }

    //loop to subtract each element by the maximum
    while (k < num) {
        arr[k] -= max;
        k++;
    }
} 

//deallocation function does not work
void deallocate (int * &array) {
    delete[] array;
}

int main() {
    int n;
    cout << "Enter a positive interger" << endl;
    cin >> n;

    //memory allocation
    int *a = new int[n];
    if (a == nullptr) {
        cout << "Allocation of mem unsuccessful" << endl;
    }

    //entering into array
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    //printing the array
    cout << "You have entered: ";
    for (int j=0; j<n; j++) {
        if (j == n-1) {
            cout << a[j];
        }
        else {
            cout << a[j] << ", ";
        }
    }
    cout << endl;

    //calling the funtion subtract by real call refence and modifying the array
    //leand to an modification in array 'a'
    subtract_max(a,n);

    //for loop to print the array
    cout << "The result of subtraction (new array) is: " << endl;
    for (int i=0; i<n; i++) {
        if (i == n-1) {
            cout << a[i];
        }
        else {
            cout << a[i] << ", ";
        }
    }
    cout << endl;

    //callign deallcation funtion
    deallocate(a);
    return 0;
}