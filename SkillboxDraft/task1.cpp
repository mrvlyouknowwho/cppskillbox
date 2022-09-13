#include <iostream>

int main()
{
	int time;
	std::cout << "Enter the current time\n";
	std::cin >> time;

	int count = 1; 
	if (time >= 1 && time < 13) {						//twelve hour time format
		do {
			std::cout << "Ky-Ky " << count<< "\n";
			count++;
		} while (count <= time);
	}
	else std::cout << "Off system\n";
};