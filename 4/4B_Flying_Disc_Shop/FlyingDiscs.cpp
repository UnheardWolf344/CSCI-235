/*
	This program calculates the price for an order of a type of flying disc
	inputted by the user, as well as an order quantity specified by the user.

	by Griffin Rzewnicki
*/

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main () {
	// define formatting constants
	constexpr int COLUMN_1_WIDTH = 16;
	constexpr int COLUMN_2_WIDTH = 10;

	// define the retail prices of each type of disc.
	constexpr double DISC_GOLF_RETAIL = 15.80;
	constexpr double ULTIMATE_RETAIL = 12.96;
	constexpr double COLLECTOR_RETAIL = 29.75;

	// define the percentages of price per disc after taking off discount.
	constexpr double FIVE_TO_NINE_DISCOUNT = 0.92;
	constexpr double TEN_TO_NINETEEN_DISCOUNT = 0.84;
	constexpr double TWENTY_TO_TWENTYNINE_DISCOUNT = 0.76;
	constexpr double THIRTY_PLUS_DISCOUNT = 0.68;

	// instance variables: change based on user input.
	string chosenDisc;
	double chosenDiscPrice;

	// direct user input variables
	char inputDiscType;
	int inputDiscNumber;

	// calculated based on user selections.
	double pricePerDisc;
	double totalSavings;
	double total;

	// greet & prompt the user to select the style of disc they would like.
	cout << "Welcome to the Flying-Disc Shop!" << endl << endl;

	cout << "Type 'u' for ultimate, 'g' for disc golf,"
		<< " or 'c' for collector discs." << endl;
	cout << "Enter disc type: ";

	cin >> inputDiscType;

	cout << endl;

	// if the disc is a style we have, set the instance variables accordingly.
	// otherwise, say that it is invalid, then end the program;
	switch (inputDiscType) {
		case 'u':
		case 'U': {
			chosenDisc = "Ultimate Disc";
			chosenDiscPrice = ULTIMATE_RETAIL;
			break;
		}
		case 'g':
		case 'G': {
			chosenDisc = "Disc-Golf Disc";
			chosenDiscPrice = DISC_GOLF_RETAIL;
			break;
		} 
		case 'c':
		case 'C': {
			chosenDisc = "Collector Disc";
			chosenDiscPrice = COLLECTOR_RETAIL;
			break;
		}
		default: {
			cout << "Invalid disc type." << endl;

			// end the program here
			return 0;
		}
	}

	// prompt the user for the number of discs they want.
	cout << "Enter the number of " << chosenDisc << "(s): ";
	cin >> inputDiscNumber;
	cout << endl;

	// if the input disc number is a real number of discs that you can buy
	if (inputDiscNumber > 0) {

		// check to see if any discounts apply
		if (inputDiscNumber >= 5 && inputDiscNumber <= 9) {
			pricePerDisc = chosenDiscPrice * FIVE_TO_NINE_DISCOUNT;
		} else if (inputDiscNumber >= 10 && inputDiscNumber <= 19) {
			pricePerDisc = chosenDiscPrice * TEN_TO_NINETEEN_DISCOUNT;
		} else if (inputDiscNumber >= 20 && inputDiscNumber <= 29) {
			pricePerDisc = chosenDiscPrice * TWENTY_TO_TWENTYNINE_DISCOUNT;
		} else if (inputDiscNumber >= 30) {
			pricePerDisc = chosenDiscPrice * THIRTY_PLUS_DISCOUNT;
		} else {
			pricePerDisc = chosenDiscPrice;
		}

		// calculate the total purchase price and the amount saved via discounts
		total = pricePerDisc * inputDiscNumber;

		// here, instead of simply doing total - discount, we thereby are 
		// obligated to partake in the completion of the task known heretofore 
		// as taking the negative of the inverse of that.
		// this way, if there is no discount, it comes out to negative
		// zero instead of zero. 
		totalSavings = -((chosenDiscPrice * inputDiscNumber) - total);

		// finally, output the user's receipt.
		cout << "------------Receipt------------" << endl;
		cout << setprecision(2) << fixed << right;

		cout << setw(COLUMN_1_WIDTH) << "Disc Type: " << chosenDisc << endl;
		cout << setw(COLUMN_1_WIDTH) << "Quantity: " << inputDiscNumber
			<< endl;
		cout << setw(COLUMN_1_WIDTH) << "Price per Disc: "
			<< "$" << setw(COLUMN_2_WIDTH)
			<< pricePerDisc << endl;
		cout << setw(COLUMN_1_WIDTH) << "Total Savings: " << "$"
			<< setw(COLUMN_2_WIDTH) << totalSavings << endl;
		cout << setw(COLUMN_1_WIDTH) << "Total: " << "$"
			<< setw(COLUMN_2_WIDTH) << total << endl;
	} else {
		// otherwise, say that it is invalid and exit the program.
		cout << inputDiscNumber << " is an invalid number of discs." << endl;
	}

	return 0;
}