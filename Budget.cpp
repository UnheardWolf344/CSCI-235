/*
	This program takes in your hours worked and wage,
	then outputs your budget.

	by GYRzewnicki
*/

#include <iostream>
#include <cmath> 

using namespace std;

// define important constants
constexpr double TAX {0.16};
constexpr double CLOTHES {0.12};
constexpr double SCHOOL_SUPPLIES {0.01};
constexpr double SAVINGS_BONDS {0.3};
constexpr double PARENTS_BOND_CONTRIBUTION {0.5};

int main () {
	double hourlyWage {0};
	double hoursWorkedInWeek[5] { 0 };
	double totalIncome {0};

	// get the user's hourly wage
	cout << "Hourly pay rate: $" << flush;
	cin >> hourlyWage;
	cout << endl;

	// populate hoursWorkedInWeek with hours
	for (int week = 0; week < 5; week++) {
		cout << "Hours worked in week " << week + 1 << ": " << flush;
		cin >> hoursWorkedInWeek[week];
		cout << "\n";
	}

	cout << endl;

	// sum hoursWorkedInWeek to compute totalIncome
	for (double hoursWorked: hoursWorkedInWeek) {
		totalIncome += hoursWorked * hourlyWage;
	}

	// define the rest of the constants regarding income and spending
	const double taxedIncome { totalIncome * (1 - TAX) };
	const double remainingMoneyAfterExpenses 
		{ taxedIncome * (1 - (CLOTHES + SCHOOL_SUPPLIES)) };
	const double bondsPurchaseAmount 
		{ remainingMoneyAfterExpenses * SAVINGS_BONDS };
	const double parentBondContribution 
		{ floor(bondsPurchaseAmount) * PARENTS_BOND_CONTRIBUTION };

	// create the final output
	cout << "--- Income ---" << "\n";

	cout << "Before tax: $" << totalIncome << "\n";
	cout << "After taxes (16% tax rate): $" << taxedIncome << "\n" << "\n";

	cout << "--- Expenses ---" << endl;
	cout << "Clothes and other accesories: $" << taxedIncome * CLOTHES << "\n";
	cout << "School Supplies: $" << taxedIncome * SCHOOL_SUPPLIES << "\n";
	cout << "Savings bonds: $" << bondsPurchaseAmount << "\n";
	cout << "Parents contribution to savings bonds: $" << parentBondContribution << "\n" << "\n";

	cout << "Remaining income after expenses and investments: $" << remainingMoneyAfterExpenses - bondsPurchaseAmount << endl;

	return 0;
}