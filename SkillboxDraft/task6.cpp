#include <iostream>
using namespace std;

int main()
{
	int x, p, y;

	cout << "Enter the deposit amount: ";
	cin >> x;
	cout << "Enter interest rate: ";
	cin >> p;
	cout << "Enter the desired amount: ";
	cin >> y;

	int i = 0;

	while (x <= y)
	{
		int piece = x * p / 100;
		x += piece;
		i++;
	}

	cout << i;
}