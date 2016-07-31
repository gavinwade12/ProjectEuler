#include <iostream>
#include <sstream>

bool CheckForPalindrome(int num) {
	std::string original;
	std::string reverse;
	std::stringstream strstream;
	strstream << num;
	strstream >> original;
	int arrSize = original.length();
	char* charReverse = new char[arrSize];
	for (int i = 0; i < original.length(); i++)
		charReverse[arrSize - 1 - i] = original[i];
	reverse = charReverse;
	delete [] charReverse;
	if (reverse == original)
		return true;
	return false;
}

int main() {
	int largest = 0;
	int one = 0;
	int two = 0;
	std::cout << "Finding largest palindrome created by multiplying two three-digit numbers..."
		<< std::endl;
	for (int i = 999; i > 99; i--) {
		for (int j = 999; j > 99; j--) {
			if (CheckForPalindrome(i*j)) {
				if (i*j > largest) {
					largest = i*j;
					one = i;
					two = j;
				}
			}
		}
	}
	std::cout << "Largest palindrome: " << largest << std::endl;
	std::cout << "Numbers that create palindrome: " << one << " and "
		<< two << std::endl;
	return 0;
}