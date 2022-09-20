#include <iostream>

int main()
{
	float amplitude, amplitudeStop;

	do
	{
		std::cout << "Enter the initial amplitude: ";
		std::cin >> amplitude;

		std::cout << "Enter the stop amplitude: ";
		std::cin >> amplitudeStop;
		if (amplitude < 0 || amplitudeStop < 0 || amplitudeStop > amplitude) std::cout << "Try again.\n";
	} while (amplitude < 0 || amplitudeStop < 0 || amplitudeStop > amplitude);

	int counter = 0;
	while (amplitude > amplitudeStop)
	{
		amplitude *= 1 - 8.4 / 100;
		counter++;
	}

	std::cout << "The pendulum will reach the desired amplitude after " << counter << " oscillations";
}
