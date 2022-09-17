#include <iostream>

int main()
{
   int h; //h - height

   std::cout << "Enter the height of the Christmas tree: ";
   std::cin >> h;

   for (int x = 1; x <= h; x++)
   {
      for (int y = 1; y <= (h + x); y++)
      {
         if (y <= (h - x + 1)) std::cout << " ";
         else std::cout << "#";
      }
      std::cout << "\n";
   }
}
