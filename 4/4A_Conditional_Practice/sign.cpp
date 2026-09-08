/*
 * Determines if a number is positive, negative, or zero.

    by Griffin Rzewnicki
 */

#include <iostream>
using namespace std;

int main() {
    double num;

    // Get a number from the user
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    // Output the number.
    cout << num << " is ";

    // if the number is greater than zero, it's positive,
    // if it's less than zero, it's negative.
    // otherwise, it must be zero.
    if (num > 0) {
        cout << "positive";
    } else if (num < 0) {
        cout << "negative";
    } else {
        cout << "zero";
    }

    cout << "." << endl;

    return 0;
}