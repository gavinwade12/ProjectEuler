#include "primes.h"
#include <iostream>

std::vector<int> GeneratePrimes(int num) {
	bool prime;
	std::vector<int> primes;
	std::cout << "ints";
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
	std::cout << "generating primes...";
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
		if (i == num / 4)
			std::cout << " quarter";
		else if (i == num / 2)
			std::cout << " half";
		else if (i == num * 3 / 4)
			std::cout << " three quarters";
	}
	std::cout << " done" << std::endl;
	return primes;
}