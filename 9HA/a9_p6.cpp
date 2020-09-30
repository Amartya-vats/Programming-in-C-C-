/*
CH-230-A
a9 p1.cpp
Amartya Vats
a.vats@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {

    //declaring
    string user_name;
    cout << "Please enter you name :";

    //scaning or reading the string (without spaces)
    cin >> user_name;

    //integers declarations for the randomly generated number
    //and the input from the user
    //along with the tries interger
    int comp_rand, user_guess;
    int tries = 0;

    //initialization for the rand number generator
    srand(static_cast<unsigned int>(time (0)));

    //setting the variable equal to a ranodmly generated number
    comp_rand = rand() % 100 + 1;

    //users first output to help guide the user
    cout << "Please enter a number between 1 and 100" << endl;

    //a do while loop to continuously check and update the number inputted
    do {
        //intake a number and check if that is equal to the reandomly generated number
        //if not then the related output is printed
        cin >> user_guess;
        if (comp_rand < user_guess) {
            cout << "too high guess lower" << endl;
        }
        else if (comp_rand > user_guess){
            cout << "too low guess higher" << endl;
        }

        //increment the number of tries
        tries ++;
    } while (comp_rand != user_guess);

    //printing the last string
    cout << "Congratulations " << user_name << "!" << endl;
    cout << "You took " << tries << " tries" << endl;
    return 0;
}