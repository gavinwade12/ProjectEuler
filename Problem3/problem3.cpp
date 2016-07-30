/* This could definitely be improved. I've never actually let it finish running.
It also has unexpected results and shows 8462696833 as prime (assuming it's not since it's
not the answer) */

#include <iostream>
#include <math.h>

bool CheckPrime(long num) {
	int halfway = ceil(num / 2);
	for (long i = 2; i < halfway; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int main() {
	long uglyNum = 600851475143;
	long halfway = ceil(uglyNum / 2);
	long largest = 0;
	std::cout << "Finding largest prime factor of " << uglyNum << "...." << std::endl;
	for (long i = 1; i < halfway; i += long(2)) {
		if (uglyNum % i == 0) {
			std::cout << "Checking: " << i;
			if (CheckPrime(i)) {
				largest = i;
			}
			std::cout << " done		Largest: " << largest << std::endl;
		}
	}
	std::cout << "Largest prime: " << largest << std::endl;
	return 0;
}