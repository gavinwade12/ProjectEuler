#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
	std::vector<int> multiples;
	int sum = 0;
	std::cout << "Finding sum of all multiples of 3 and 5 below 1000..." << std::endl;
	for (int i = 3; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			multiples.push_back(i);
	}
	for (int i = 0; i < multiples.size(); i++)
		sum += multiples[i];
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}