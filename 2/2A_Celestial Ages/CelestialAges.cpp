/*
	This program calculates the user's age on other planets
	by comparing the ratio of the length of Earth's years to the length of the
	years of other planets. The program then outputs the user's age
	on each of the other planets.

	by GYRzewnicki
*/
#include <iostream>

using namespace std;

// Define constants: the earth days in a year on each planet
constexpr double MERCURY_RATIO = 87.968;
constexpr double VENUS_RATIO   = 224.695;
constexpr double EARTH_RATIO   = 365.242;
constexpr double MARS_RATIO    = 686.973;
constexpr double JUPITER_RATIO = 4330.60;
constexpr double SATURN_RATIO  = 10746.9;
constexpr double URANUS_RATIO  = 30588.7;
constexpr double NEPTUNE_RATIO = 59799.9;

int main () { 
	// define user's age
	double earthAge = 0;

	// UI
	cout << "--- Celestial Age Calculator ---" << endl;
	cout << "Find out how old you would be on different planets based" 
		<< " on their orbital periods." << endl;
	cout << endl;

	cout << "Please enter your age on Earth (in years): ";

	// let the user input age
	cin >> earthAge;

	// new line for formatting the output properly.
	cout << endl;

	/* 
	Output the user's age on each planet.
	Each planet multiplies the user's age by the ratio of the length of an
	earth year to the length of the year of the target planet.
	*/
	cout << "Your age on each planet:" << endl;
	cout << earthAge * (EARTH_RATIO / MERCURY_RATIO)
		<< " Mercury-years old" << endl;
	cout << earthAge * (EARTH_RATIO / VENUS_RATIO)  
		<< " Venus-years old"   << endl;
	cout << earthAge * (EARTH_RATIO / EARTH_RATIO)
		<< " Earth-years old"   << endl;
	cout << earthAge * (EARTH_RATIO / MARS_RATIO)
		<< " Mars-years old"    << endl;
	cout << earthAge * (EARTH_RATIO / JUPITER_RATIO)
		<< " Jupiter-years old" << endl;
	cout << earthAge * (EARTH_RATIO / SATURN_RATIO)
		<< " Saturn-years old"  << endl;
	cout << earthAge * (EARTH_RATIO / URANUS_RATIO)
		<< " Uranus-years old"  << endl;
	cout << earthAge * (EARTH_RATIO / NEPTUNE_RATIO)
		<< " Neptune-years old" << endl;
	
	return 0;
}
