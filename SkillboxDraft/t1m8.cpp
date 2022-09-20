#include <iostream>
#include <math.h>

int main()
{
	float F, m, t;
	std::cout << "Enter F - thrust force newtons, m - weighing kilograms, t - seconds: ";
	std::cin >> F >> m >> t;
		
	float a = F / m;
	float result = std::pow(a * t, 2) / 2;

	std::cout << result;
}
