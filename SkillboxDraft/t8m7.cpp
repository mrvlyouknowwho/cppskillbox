#include <iostream>

int main()
{
   int h; //h - height

   std::cout << "Enter the height of the Christmas tree: ";
   std::cin >> h;

   for (int i = 1; i <= h; i++)
   {
      for (int j = 1; j <= (h + i); j++)
      {
         if (j <= (h - i + 1)) std::cout << " ";
         else std::cout << "#";
      }
      std::cout << "\n";
   }
}
