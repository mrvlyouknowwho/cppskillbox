#include <iostream>

int main() 
{
	int b = 100; //Buckwheat

	for (int m = 1; b != 0; m++) //m - month
	{
		b -= 4;
		std::cout << "After " << m << " you have " << b << " kg buckwheat\n";
	}
};