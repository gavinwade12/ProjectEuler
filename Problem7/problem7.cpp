#include <iostream>

int main() {
	int count = 0;
	bool prime;
	std::cout << "Finding 10,001st prime number..." << std::endl;
	for (int i = 2; i < INT_MAX; i++) {
		prime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime)
			count++;
		if (count == 10001) {
			std::cout << "Number: " << i << std::endl;
			break;
		}
	}
	return 0;
}