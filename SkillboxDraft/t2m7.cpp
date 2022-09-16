#include <iostream>

int main() 
{
	int w, m; //w - water, m - milk
	int a = 0, l = 0; //a - americano, l - latte
	
	std::cout << "Enter the amount of water in ml: ";
	std::cin >> w;
	
	std::cout << "Enter the amount of milk in ml: ";
	std::cin >> m;

	while ((w >= 30 && m >= 270) || w >= 300)
	{

		std::cout << "Choose a drink (1 - americano, 2 - latte): ";
		int d; //drink
		std::cin >> d;
		
		
		if (d == 1)
		{
			w -= 300;
			a++;
			std::cout << "Your drink is ready.\n";
		}
		else if (d == 2)
		{
			w -= 30;
			m -= 270;
			l++;
			std::cout << "Your drink is ready.\n";
		}
		else std::cout << "Only 1 or 2, try again\n";
	}
	if (w < 0) w = 0;
	if (m < 0) m = 0;
	std::cout << "***Report***\n";
	std::cout << "Ingredients left:\n";
	std::cout << "\t\tWater: " << w << " ml\n";
	std::cout << "\t\tMilk: " << m << " ml\n";
	std::cout << "Americano cups prepared: " << a << "\n";
	std::cout << "Latte cups prepared: " << l << "\n";

};	
