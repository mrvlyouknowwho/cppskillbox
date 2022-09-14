#include <iostream>

int main()
{
	int indebtedness;
	int sum;
	int draft = 0;
	int balance = 0;
	std::string name;

	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "indebtedness: ";
	std::cin >> indebtedness;

	if (indebtedness >= 0) {
		do {
			std::cout << name << " Enter your sum: ";
			std::cin >> sum;
			draft += sum;
			if (draft > indebtedness) balance = draft - indebtedness;
		} while (draft < indebtedness);

		if (balance > 0) std::cout << "The debt is repaid, the balance on the balance sheet: " << balance;
		else std::cout << "The debt is repaid.";
	}	else std::cout << "Negative debt amount";
};