// Libraries
#include <iostream>

// Declaring namespaces
using namespace std;

// Variables
int userAge;
const int oldThreshold = 70;


// Function for asking the user their age
int getUserAge() {

    cout << "Enter your age: ";
    cin >> userAge;

    return userAge;

}


// Main function
int main() {

    int age = getUserAge();

    if (age > oldThreshold) {

        cout << "You are old";

    } else {

        cout << "You are not old";

    }

    return 0;

}