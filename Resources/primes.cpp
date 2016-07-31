#include "primes.h"
#include <iostream>
#include <math.h>

std::vector<int> GeneratePrimes(int num) {
	bool prime;
	std::vector<int> primes;
	std::cout << "generating prime numbers..." << std::endl;
	for (int i = 2; i <= num; i++) {
		prime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime)
			primes.push_back(i);
	}
	return primes;
}

std::vector<long> GeneratePrimes(long num) {
	bool prime;
	std::vector<long> primes;
	std::cout << "generating prime numbers..." << std::endl;
	for (long i = 2; i <= num; i++) {
		prime = true;
		for (long j = 2; j < i; i++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime)
			primes.push_back(i);
	}
	std::cout << " done" << std::endl;
	return primes;
}

bool CheckIfPrime(int num) {
	int halfway = ceil(num / 2);
	for (int i = 3; i < halfway; i += 2) {
		if (num % i == 0)
			return false;
	}
	return true;
}

bool CheckIfPrime(long num) {
		int halfway = ceil(num / 2);
	for (long i = 3; i < halfway; i += 2) {
		if (num % i == 0)
			return false;
	}
	return true;
}