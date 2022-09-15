#include <iostream>

int main()
{
	int n; //number
	int a = 0;
	int b = 1;
	int c = 0;


	std::cout << "Enter number: ";
	std::cin >> n;

	int i = 0;
	while (i != n)
	{
		a = b;
		b = c;
		c = a + b;
		i++;
	}

	std::cout << c << "\n";
}