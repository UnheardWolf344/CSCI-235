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
constexpr double MERCURY_RATIO {87.968};
constexpr double VENUS_RATIO   {224.695};
constexpr double EARTH_RATIO   {365.242};
constexpr double MARS_RATIO    {686.973};
constexpr double JUPITER_RATIO {4330.60};
constexpr double SATURN_RATIO  {10746.9};
constexpr double URANUS_RATIO  {30588.7};
constexpr double NEPTUNE_RATIO {59799.9};

// Pass in the age in years on earth and the earth-days in a year on the planet
// you want to find the age on.
static double earthToPlanet (double earthAge, double planetRatio);

int main () {
	// UI
	cout << "--- Celestial Age Calculator ---" << "\n";
	cout << "Find out how old you would be on different planets based" 
		<< " on their orbital periods." << "\n";
	cout << "\n";

	// flush instead of endl for no new line
	cout << "Please enter your age on Earth (in years): " << flush;

	// define user's age & let them input it
	double earthAge {0};
	cin >> earthAge;

	cout << endl;

	// Output the user's age on each planet.
	cout << "Your age on each planet:" << "\n";
	cout << earthToPlanet(earthAge, MERCURY_RATIO) 
		<< " Mercury-years old" << "\n";
	cout << earthToPlanet(earthAge, VENUS_RATIO)   
		<< " Venus-years old"   << "\n";
	cout << earthToPlanet(earthAge, EARTH_RATIO)   
		<< " Earth-years old"   << "\n";
	cout << earthToPlanet(earthAge, MARS_RATIO)    
		<< " Mars-years old"    << "\n";
	cout << earthToPlanet(earthAge, JUPITER_RATIO) 
		<< " Jupiter-years old" << "\n";
	cout << earthToPlanet(earthAge, SATURN_RATIO)  
		<< " Saturn-years old"  << "\n";
	cout << earthToPlanet(earthAge, URANUS_RATIO)  
		<< " Uranus-years old"  << "\n";
	cout << earthToPlanet(earthAge, NEPTUNE_RATIO) 
		<< " Neptune-years old" << endl;
	
	return 0;
}

// Pass in the age in years on earth and the earth-days in a year on the planet
// you want to find the age on.
static double earthToPlanet (double earthAge, double planetRatio) {
	return earthAge * (EARTH_RATIO / planetRatio);
}