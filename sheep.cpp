#include <iostream>
using namespace std;

int main() {
	int totalSheep = 0;
	int sheepReturned = 0;

	cout << "Input the total number of sheep in the flock: " << endl;

	cin >> totalSheep;

	cout << "Input the number of sheep that have returned: " << endl;

	cin >> sheepReturned;

	if (sheepReturned < totalSheep) {
		cout << "sheep missing" << endl;
	} else if (sheepReturned > totalSheep) {
		cout << "extra sheep" << endl;
	} else if (sheepReturned == totalSheep) {
		cout << "all sheep accounted for" << endl;
	} else {
		cout << "something bad probably happened" << endl;
	}

	return 0;
}