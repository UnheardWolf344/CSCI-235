/*
	This program reads data from the file racerSpeedInfo.txt and outputs data
	to the file racerSpeedUpdated.txt.
	From the input, the program reads in the format
	lastName firstName currentSpeed speedBoostPercentage
	e.g.
	Mouse Mickey 301.2 5.1

	It then takes the current speed and adds the current speed multiplied by the
	speed boost percentage. This new speed is then sent to the output file in
	the format
	lastName firstName newSpeed
	e.g.
	Mouse Mickey 316.56

	by Griffin Rzewnicki
*/

#include <climits>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main () {
	// use a string for the output file. Probably unnecessary, but it makes it
	// easier to change.
	const string OUTPUT_FILE = "racerSpeedUpdated.txt";

	// variables read from the input file.
	string firstName;
	string lastName;
	double currentSpeed;
	double speedBoostPercentage;

	// variables created for the output file.
	double newSpeed;

	// file read / write variables.
	ifstream inData;
	ofstream outData;
	
	// open up the files and set formatting
	inData.open("racerSpeedInfo.txt");
	outData.open(OUTPUT_FILE);	
	outData << fixed << setprecision(2);

	// get the first racer, update speed, then output it
	inData >> lastName >> firstName >> currentSpeed >> speedBoostPercentage;
	inData.ignore(INT_MAX, '\n');
	newSpeed = (currentSpeed + (currentSpeed * (speedBoostPercentage / 100.0)));
	outData << lastName << " " << firstName << " " << newSpeed << endl;

	// get the second racer, update speed, then output it
	inData >> lastName >> firstName >> currentSpeed >> speedBoostPercentage;
	inData.ignore(INT_MAX, '\n');
	newSpeed = (currentSpeed + (currentSpeed * (speedBoostPercentage / 100.0)));
	outData << lastName << " " << firstName << " " << newSpeed << endl;
	
	// get the third racer, update speed, then output it
	inData >> lastName >> firstName >> currentSpeed >> speedBoostPercentage;
	inData.ignore(INT_MAX, '\n');
	newSpeed = (currentSpeed + (currentSpeed * (speedBoostPercentage / 100.0)));
	outData << lastName << " " << firstName << " " << newSpeed << endl;
	
	// close file i/o
	inData.close();
	outData.close();

	return 0;
}