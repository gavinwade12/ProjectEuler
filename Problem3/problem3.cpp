/* This could definitely be improved. I've never actually let it finish running.
It also has unexpected results and shows 8462696833 as prime (assuming it's not since it's
not the answer) */

#include <iostream>
#include <math.h>
#include "../Resources/primes.h"

int main() {
	long uglyNum = 600851475143;
	long halfway = ceil(uglyNum / 2);
	long largest = 0;
	std::cout << halfway << std::endl;
	std::vector<long> primes = GeneratePrimes(halfway);
	std::cout << "Finding largest prime factor of " << uglyNum << "...." << std::endl;
	for (long i = 2; i < halfway; i++) {
		if (uglyNum % i == 0) {
			std::cout << "Checking: " << i;
			for (int j = 0; j < primes.size(); j++) {
				if (primes[j] == i) {
					largest = i;
					break;
				}
				else if (primes[j] > i)
					break;

			}
			std::cout << " done		Largest: " << largest << std::endl;
		}
	}
	std::cout << "Largest prime: " << largest << std::endl;
	return 0;
}