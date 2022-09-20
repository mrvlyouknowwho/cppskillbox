#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	float d; //d - degrees
	std::cout << "Enter the pitch angle in degrees: ";
	std::cin >> d;

	float r; //r - radian

	r = (d * M_PI) / 180.f;
	
	if (r <= 0.28f && r >= -0.28f) std::cout << "The corner is safe.";
	else std::cout << "The corner is not safe!";
}