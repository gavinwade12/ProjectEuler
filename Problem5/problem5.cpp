#include <iostream>

int main() {
	int numbers[10] = {11, 12, 13, 14 ,15, 16, 17, 18, 19, 20};
	int tooHigh = 0;
	bool divisible = false;
	std::cout << "Finding smallest number evenly divisible by numbers 1-20..." << std::endl;
	for (int i = 0; i < sizeof(numbers); i++)
		tooHigh += numbers[i];
	for (int i = 2520; i < tooHigh; i++) {
		divisible = true;
		for (int j = 0; j < 10; j++) {
			if (i % numbers[j] != 0) {
				divisible = false;
				break;
			}
		}
		if (divisible) {
			std::cout << "Number: " << i << std::endl;
			break;
		}
	}
	return 0;
}