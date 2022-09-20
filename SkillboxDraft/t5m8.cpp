#include <iostream>

int main()
{
	float km, averagePace = 0;
	std::cout << "Hey, Sam! How many kilometers did you run today? ";
	std::cin >> km;

	float sum = 0;
	for (int i = 1; i - 1 < km; i++)
	{
		int pace;
		std::cout << "\nWhat was your pace at kilometer " << i << "? ";
		std::cin >> pace;

		sum += pace;

		averagePace = sum / i;
	}
	
	averagePace = std::round(averagePace);
	int minute = 0, second = 0;

	minute = averagePace / 60;
	second = averagePace - (minute * 60);

	std::cout << "Your average pace per workout: " << minute << " minutes " << second << " seconds.";
}
