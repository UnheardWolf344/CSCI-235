/*
 * Determines if a number is even or odd.

    by Griffin Rzewnicki
 */

#include <iostream>

using namespace std;

int main() {
    int num;

    // Get a number from the user
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    // Tell the user if the number is even or odd.
    cout << num << " is ";

    // if the number divided by 2 has a remainder of positive or negative one,
    // it is odd. Otherwise, it's even.
    if (abs(num) % 2 == 1) {
        cout << "odd.";
    } else {
        cout << "even.";
    }

    cout << endl;
    return 0;
}