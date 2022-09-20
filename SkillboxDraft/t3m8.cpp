#include <iostream>
#include <math.h>

int main()
{
	float h, d, w; //height x width x depth
	int c1 = 0, c2 = 0, c3 = 0; //counters for check cube
	float x = 0.f; //arbitrary x, for counting sets


	do
	{
		std::cout << "Enter the dimensions of the bar:";

		std::cout << "\nX: ";
		std::cin >> w;

		std::cout << "\nY: ";
		std::cin >> d;
	
		std::cout << "\nZ: ";
		std::cin >> h;
		if (w < 5 || d < 5 || h < 5) std::cout << "The minimum size of the bar is 5x5x5 cm. Try Again.\n";
	} while (w < 5 || d < 5 || h < 5);



	while (w >= 5)
	{
		w -= 5;
		c1++;
	}

	while (d >= 5)
	{
		d -= 5;
		c2++;
	}

	while (h >= 5)
	{
		h -= 5;
		c3++;
	}

	int totalCube = c1 * c2 * c3;

	for (int i = 0; x <= totalCube; i++)
	{
		x = 2.f;
		x = std::pow(x + i, 3.f);
	}

	x = std::pow(x, 1.f / 3.f);
	x--;
	x = std::pow(x, 3.f);

	std::cout << "Conclusion:\n";
	std::cout << totalCube << " cubes can be made from this bar.\n";
	std::cout << "Of these, you can make a set of " << x << " cubes.\n";
}