#include <iostream>

int main()
{
   int number = 0;
   std::cout << "Enter number: ";
   std::cin >> number;

   int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
   a = number % 10;
   b = (number / 10) % 10;
   c = (number / 100) % 10;
   d = (number / 1000) % 10;
   e = (number / 10000) % 10;
   f = (number / 100000) % 10;
   if (a + b + c == e + d + f) std::cout << "Yes";
   else std::cout << "No";
}