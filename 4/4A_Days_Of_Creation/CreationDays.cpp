/*
	Determines what happened on the inputted day of creation
	and also outputs the bible verse related to it.

	by Griffin Rzewnicki
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Define variables
	int day;

	// define the description of each day of creation
	string creation1 = "light, resulting in night and day";
	string creation2 = "an expanse dividing the water on and above the earth";
	string creation3 = "dry land and vegetation";
	string creation4 = "visible the sun, moon, and stars";
	string creation5 = "aquatic and flying creatures";
	string creation6 = "land animals and humans";
	string creation7 = "nothing. He rested";

	// define the reference for the description of each day of creation
	string reference1 = "Genesis 1:3-5";
	string reference2 = "Genesis 1:6-8";
	string reference3 = "Genesis 1:9-13";
	string reference4 = "Genesis 1:14-19";
	string reference5 = "Genesis 1:20-23";
	string reference6 = "Genesis 1:24-31";
	string reference7 = "Genesis 2:2-3";

	// Get input letter.
	cout << "Enter a day number from the first week of creation: ";
	cin >> day;
	cout << endl;

	// for each day, output the creation made on the day along with the
	// reference verse.
	switch (day) {
		case 1: {
			cout << "On day " << day << ", God made " << creation1 << ".\n";
			cout << "- " << reference1 << endl;
			break;
		}

		case 2: {
			cout << "On day " << day << ", God made " << creation2 << ".\n";
			cout << "- " << reference2 << endl;
			break;
		}

		case 3: {
			cout << "On day " << day << ", God made " << creation3 << ".\n";
			cout << "- " << reference3 << endl;
			break;
		}

		case 4: {
			cout << "On day " << day << ", God made " << creation4 << ".\n";
			cout << "- " << reference4 << endl;
			break;
		}

		case 5: {
			cout << "On day " << day << ", God made " << creation5 << ".\n";
			cout << "- " << reference5 << endl;
			break;
		}

		case 6: {
			cout << "On day " << day << ", God made " << creation6 << ".\n";
			cout << "- " << reference6 << endl;
			break;
		}

		case 7: {
			cout << "On day " << day << ", God made " << creation7 << ".\n";
			cout << "- " << reference7 << endl;
			break;
		}

		default: {
			cout << "Invalid day. Enter a value between 1 and 7." << endl;
		}
	}

	return 0; // successfully finished program
}
