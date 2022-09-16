#include <iostream>
#include <string>

int main() 
{
	int x = 7, y = 10;

	while (true)
	{
		std::string p;
		std::cout << "The rover is at position "<< x << ", " << y << " enter the command : ";
		std::cin >> p;

		if (p == "w") y++;
		else if (p == "s") y--;
		else if (p == "a") x--;
		else if (p == "d") x++;
		else std::cout << "Error\n";

		if (x == 16) x--;
		if (x < 0) x++;
		if (y == 21) y--;
		if (y < 0) y++;
	}
};	