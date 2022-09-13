#include <iostream>

int main()
{
	int answer = 0;
	int number;
	std::cout << "Enter the number: ";
	std::cin >> number;

	do {
		number /= 10;
		answer++;
	} while (number != 0);

	std::cout << "Digit in number: " << answer;

};