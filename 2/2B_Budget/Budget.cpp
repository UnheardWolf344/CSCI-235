/*
	This program takes in your hours worked and wage,
	then outputs your budget.

	by GYRzewnicki
*/

#include <iostream>

using namespace std;

int main () {
	// define important constants
	constexpr double TAX = 0.16;
	constexpr double CLOTHES = 0.12;
	constexpr double SCHOOL_SUPPLIES = 0.01;
	constexpr double SAVINGS_BONDS = 0.3;
	constexpr double PARENT_BOND_PERCENT = 0.5;

	// Money gained per hour worked.
	double hourlyWage = 0;
	
	// the hours worked in each week.
	double hoursWeek1 = 0;
	double hoursWeek2 = 0;
	double hoursWeek3 = 0;
	double hoursWeek4 = 0;
	double hoursWeek5 = 0;
	
	// variables used later to create the output.
	double totalIncome = 0;
	double taxedIncome = 0;
	double remainingMoneyAfterExpenses = 0;
	double bondsPurchaseAmount = 0;
	double parentBondContribution = 0;

	// get the user's hourly wage
	cout << "Hourly pay rate: $";
	cin >> hourlyWage;
	cout << endl;

	// get the user's hours worked in each week
	cout << "Hours worked in week 1: ";
	cin >> hoursWeek1;
	cout << endl;

	cout << "Hours worked in week 2: ";
	cin >> hoursWeek2;
	cout << endl;

	cout << "Hours worked in week 3: ";
	cin >> hoursWeek3;
	cout << endl;

	cout << "Hours worked in week 4: ";
	cin >> hoursWeek4;
	cout << endl;

	cout << "Hours worked in week 5: ";
	cin >> hoursWeek5;
	cout << endl;

	// sum all of the hours worked to create the total hours worked.
	totalIncome = hoursWeek1 + hoursWeek2 + hoursWeek3 + hoursWeek4
		+ hoursWeek5;

	// then, multiply totalIncome, which is currently the total
	// hours worked, by the hourly wage.
	totalIncome *= hourlyWage;

	// define the rest of the variables regarding income and spending
	taxedIncome = totalIncome * (1 - TAX);
	remainingMoneyAfterExpenses =
		taxedIncome * (1 - (CLOTHES + SCHOOL_SUPPLIES));
	bondsPurchaseAmount =
		remainingMoneyAfterExpenses * SAVINGS_BONDS;
		
	/*
	static_cast<int> rounds the double down to the nearest int.
	As such, it functions like Math.floor() here.
	*/
	parentBondContribution =
		static_cast<int>(bondsPurchaseAmount)
		* PARENT_BOND_PERCENT;

	// create the final output
	cout << "--- Income ---" << endl;

	cout << "Before tax: $" << totalIncome << endl;
	cout << "After taxes (16% tax rate): $" << taxedIncome << endl << endl;

	cout << "--- Expenses ---" << endl;
	cout << "Clothes and other accessories: $" << taxedIncome * CLOTHES << endl;
	cout << "School supplies: $" << taxedIncome * SCHOOL_SUPPLIES << endl;
	cout << "Savings bonds: $" << bondsPurchaseAmount << endl;
	cout << "Parents contribution to savings bonds: $"
		<< parentBondContribution << endl << endl;

	cout << "Remaining income after expenses and investments: $"
		<< remainingMoneyAfterExpenses - bondsPurchaseAmount << endl;

	return 0;
}