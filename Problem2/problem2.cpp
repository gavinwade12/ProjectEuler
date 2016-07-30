#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
	std::vector<int> fibs;
	fibs.push_back(1);
	fibs.push_back(2);
	int i = 2;
	int sum = 2;
	std::cout << "Finding sum of even fibonacci numbers below 4,000,000...." << std::endl;
	while (fibs[i-2] + fibs[i-1] < 4000000) {
		fibs.push_back(fibs[i-2] + fibs[i-1]);
		if (fibs[i] % 2 == 0)
			sum += fibs[i];
		i++;
	}
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}