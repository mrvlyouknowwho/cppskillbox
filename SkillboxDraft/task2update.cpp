#include <iostream>

int main()
{
	int answer = 0;
	int number;
	std::cout << "Enter the number: ";
	std::cin >> number;

	if (number == 0)
	{
		answer = 1;
	}
	else 
	{
		while (number != 0)
		{
			number /= 10;
			answer++;
		}
	}


	std::cout << "Digit in number: " << answer;

};