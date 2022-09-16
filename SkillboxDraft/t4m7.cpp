#include <iostream>
#include <string>

int main() 
{
	int w, h; //w - width, h - height
	std::string s; //symbol

	std::cout << "Enter the width and height of the frame: ";
	std::cin >> w >> h;

	for (int x = 1; x <= h; x++)
	{
		std::cout << "|";
		for (int y = 3; y <= w; y++)
		{
			if (x == 1 || x == h) s = "-";
			else s = " ";
			std::cout << s;
		}
		std::cout << "|\n";
	}
}