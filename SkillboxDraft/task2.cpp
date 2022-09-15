#include <iostream>

int main()
{
	int answer = 0;
	int number;
	std::cout << "Enter the number: ";
	std::cin >> number;

	while (number != 0) 
	{
		number /= 10;
		answer++;
	}

	std::cout << "Digit in number: " << answer;

};
