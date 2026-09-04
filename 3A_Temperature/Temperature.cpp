/*
	Takes the user's input as degrees fahrenheit,
	then converts it into celsius and Kelvin.
	The program then displays all three temperature values, formatted
	according to precision requirements.

	by Griffin Rzewnicki
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	// Define conversion constants
	constexpr int FAHRENHEIT_PRECISION = 4;
	constexpr int FAHRENHEIT_FREEZING = 32;
	constexpr double FAHRENHEIT_TO_CELSIUS_RATIO = 1.8;
	constexpr double CELSIUS_TO_KELVIN = 273.15;
	
	// Define the temperature variables used later.
	double temperatureFahrenheit = 0.0;
	double temperatureCelsius = 0.0;
	double temperatureKelvin = 0.0;

	// Prompt the user for input
	cout << "--- Temperature Converter ---" << endl << endl;
	cout << "Enter the temperature in degrees Fahrenheit: ";

	cin >> temperatureFahrenheit;
	cout << endl;

	// Convert Fahrenheit to Celsius and Kelvin
	temperatureCelsius = (temperatureFahrenheit - FAHRENHEIT_FREEZING) 
		/ FAHRENHEIT_TO_CELSIUS_RATIO;
	temperatureKelvin = temperatureCelsius + CELSIUS_TO_KELVIN;

	// Finally, output the temperature values.
	cout << "The temperature is:" << endl;

	cout << "    " << left << setprecision(4) << temperatureFahrenheit
		<< " degrees Fahrenheit," << endl;
	cout << "    " << fixed << setprecision(2) << temperatureCelsius
		<< " degrees Celsius, and" << endl;
	cout << "    " << scientific << setprecision(3) << temperatureKelvin
		<< " Kelvin." << endl;

	return 0;
}