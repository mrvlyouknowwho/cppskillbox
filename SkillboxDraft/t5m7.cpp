#include <iostream>

int main() {
   for (int x = 0; x <= 20; x++) 
   {
      for (int y = 0; y <= 50; y++) 
      {
         if (y == 24 && x == 0) std::cout << "^";
         else if (x == 10 && y == 24) std::cout << "+";
         else if (x == 10) std::cout << "-";
         else if (y == 24 && x != 0) std::cout << "|";
         else std::cout << " ";
      }
      if (x == 10)
      std::cout << ">";
      std::cout << "\n";
   }
}