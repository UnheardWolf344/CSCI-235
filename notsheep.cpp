/*
	Takes a number of starting people and grows each suceeding generation by
	1.5 * the the population of the previous generation.

	by whoever
*/

#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

const float GROWTH_FACTOR {1.5};

// does the calculations for the growth of generations.
static float calc (int startingPeople, int generations) {
	return startingPeople * pow(GROWTH_FACTOR, generations);
}

int main() {
	assert(calc(10,0) == 10);
	assert(calc(10,1) == 15);
	assert(calc(10,2) == 22.5);

	cout << "tests passed" << endl;

	return 0;
}
