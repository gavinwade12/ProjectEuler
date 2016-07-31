#include <iostream>

int main() {
	int sumOfSqaures = 0;
	int squareOfSum = 0;
	std::cout << "Finding difference between sum of squares of first 100 natural numbers and square of sum..."
		<< std::endl;
	for (int i = 1; i <= 100; i++) {
		sumOfSqaures += (i * i);
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;
	std::cout << "Difference: " << squareOfSum - sumOfSqaures << std::endl;
	return 0;
}