#include <iostream>

int main()
{
   int b, a; //b - bacteria, a - antibiotic

   std::cout << "Enter the number of bacteria: ";
   std::cin >> b;
   std::cout << "Enter the amount of antibiotic: ";
   std::cin >> a;

   for (int i = 1; true; i++)
   {
      b *= 2;
      b -= (11 - i) * a;
      if (b <= 0 || a <= 0) break;
      std::cout << "After " << i << " hour bacteria remained " << b << "\n";
   }
}
