#include <iostream>
#include <vector>
#include <chrono>
#include <cmath>

using namespace std;

// takes about 0.376 seconds to find all primes to 1 million.
static void getPrimesBasic (int maxVal, vector<int>& primes);

// takes about 0.168 seconds to find all primes to 1 million.
static void getPrimesEratosthenes (int maxVal, vector<int>& primes);

int main () {
	// define the value to find primes up to.
	constexpr int MAX_VAL = 1e6;

	// create the vector array to hold the final primes.
	vector<int> primes{};

	// timer for profiling
	auto startTime = chrono::high_resolution_clock::now();

	// call the prime function (see above)
	getPrimesEratosthenes(MAX_VAL, primes);

	// end timer for profiling
	auto endTime = chrono::high_resolution_clock::now();

	// output all of the primes separated by ','
	for (int prime : primes) {
		cout << prime << ",";
	}

	cout << endl << endl;
	
	// display time taken
	cout << "The program took " << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << "ms to run."  << endl; 
	
	return 0;
}

// this function iterates through each number and divides it by
// the preceding numbers up to the sqrt of the number
// to find if it is divisible by anything except 1 and itself.
static void getPrimesBasic (int maxVal, vector<int>& primes) {
	bool isPrime = true;

	// goes through each number, 2 to maxval, and finds
	// if it is divisible by any smaller number.
	for (int currentNumber = 2; currentNumber <= maxVal; currentNumber++) {
		isPrime = true;

		for (int divisor = 2; divisor <= sqrt(currentNumber); divisor++) {
			if (currentNumber % divisor == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			primes.push_back(currentNumber);
		} else {
			continue;
		}
	}
}

// this function iterates through each number starting at 2.
// If the number has not been marked as not prime, it 
// adds the number to itself until the result is the max value or more,
// then marks each one of these results as nonprime.
// finally, it adds all the nonmarked numbers to primes.
static void getPrimesEratosthenes (int maxVal, vector<int>& primes) {
	// since the vector starts at 2, we have to shift the
	// access to the correct spot so that arr[1] == 1
	constexpr short VECTOR_ACCESS_SHIFT = 2;

	// default all values to true
	std::vector<bool> isPrime(maxVal - 1, true);

	// loop through each number
	for (int i = 2; i < sqrt(maxVal); i++) {
		// if the number has been found as a multiple of another
		// prime, skip it
		if (!isPrime[i - VECTOR_ACCESS_SHIFT]) continue;

		// add the number to itself a lot until it reaches
		// the max val. Each sum is a composite number, 
		// and thus nonprime.
		for (int j = i + i; j <= maxVal; j += i) {
			isPrime[j - VECTOR_ACCESS_SHIFT] = false;
		}
	}

	// go through the array of marked numbers.
	// for each one not marked as nonprime (thus, prime),
	// add it to the primes array
	for (int i = 0; i < isPrime.size(); i++) {
		if (isPrime[i]) primes.push_back(i + VECTOR_ACCESS_SHIFT);
	}
}



