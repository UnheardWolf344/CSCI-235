/*
 * Checks whether or not a number is between two other numbers (exclusive)
 * @note: you may assume that low will always be lower than high

    by Griffin Rzewnicki
 */

#include <iostream>
using namespace std;

int main() {
    int low; // the low end of the range
    int high; // the high end of the range
    int testValue; // the number to check

    // Get the range from the user
    cout << "Enter the low end of the range: ";
    cin >> low;
    cout << endl;

    cout << "Enter the high end of the range: ";
    cin >> high;
    cout << endl;

    // Get the number to test from the user.
    cout << "Enter the number to check: ";
    cin >> testValue;
    cout << endl;

    // Check if the number is between the low and high.
    if (testValue > low && testValue < high) {
        cout << testValue << " is between ";
    } else {
        cout << testValue << " is NOT between ";
    }

    // Display the range at the end of the sentence.
    cout << low << " and " << high << "." << endl;

    return 0;
}