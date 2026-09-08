/*
	This program takes the input from the user of a full telephone
	number, in the form (+1-555-123-4567), then outputs it in the form
	- Country code
	- Area code
	- Telephone Prefix
	- Line number

	by Griffin Rzewnicki
*/

#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main () {
	// define the digits in each section of the number.
	constexpr int AREA_CODE_LENGTH = 3;
	constexpr int TELEPHONE_PREFIX_LENGTH = 3;
	constexpr int LINE_NUMBER_LENGTH = 4;

	// define variables to hold each section of the number.
	int countryCode;
	int areaCode;
	int telephonePrefix;
	int lineNumber;

	// prompt the user for one phone number
	cout << "--- Telephone Number Reader ---" << endl << endl;
	cout << "Enter a telephone number (e.g., +1-555-123-4567): ";

	// dissect the phone number into its constituent parts
	cin >> countryCode;
	cin.ignore();
	cin >> areaCode;
	cin.ignore();
	cin >> telephonePrefix;
	cin.ignore();
	cin >> lineNumber;
	cin.ignore(INT_MAX, '\n');
	cout << endl;

	// fill all blank spaces with 0. this is terrible practice
	cout << setfill('0');

	// finally, output the phone number's parts.
	cout << "    Country Code: " << countryCode << endl;
	cout << "       Area Code: " << setw(AREA_CODE_LENGTH)
		<< areaCode << endl;
	cout << "Telephone Prefix: " << setw(TELEPHONE_PREFIX_LENGTH)
		<< telephonePrefix << endl;
	cout << "     Line Number: " << setw(LINE_NUMBER_LENGTH)
		<< lineNumber << endl;

	return 0;
}