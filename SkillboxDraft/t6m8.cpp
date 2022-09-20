#include <iostream>

int main()
{
	float amplitude, amplitudeStop;

	std::cout << "Enter the initial amplitude: ";
	std::cin >> amplitude;

	std::cout << "Enter the stop amplitude: ";
	std::cin >> amplitudeStop;

	int counter = 0;
	while (amplitude > amplitudeStop)
	{
		amplitude *= 1 - 8.4 / 100;
		counter++;
	}

	std::cout << counter;
}
