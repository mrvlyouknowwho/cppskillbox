#include <iostream>

int main()
{
	float size, speed; //size - file size to download, speed - connection speed
	std::cout << "Specify the size of the file to download: ";
	std::cin >> size;

	std::cout << "\nWhat is the speed of your connection? ";
	std::cin >> speed;

	float downloaded = speed;


	for (int i = 1; downloaded < size; i++)
	{

		int percent = (100*downloaded) / size;
		std::cout << i << " second has passed. Downloaded " << downloaded << " out of " << size << " MB ("<< percent<<"%)\n";
		downloaded += speed;
		if (downloaded >= size)
		{	
			percent = 100;
			std::cout << i + 1 << " second has passed. Downloaded " << size << " out of " << size << " MB (" << percent << "%)\n";
		}
	}

}