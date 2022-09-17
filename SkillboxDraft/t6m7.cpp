#include <iostream>

int main()
{
   int f, e; //f - footer, e - exclamation mark

   std::cout << "Enter the total length of the footer: ";
   std::cin >> f;
   std::cout << "Enter the number of exclamation marks: ";
   std::cin >> e;

   if ((((f - e) / 2) + ((f - e) / 2)) + e < f)std::cout << "~";

   for (int i = 0; i != (f - e) / 2; i++) std::cout << "~";
      for (int i = 0; i != e; i++) std::cout << "!";
         for (int i = 0; i != (f - e) / 2; i++)  std::cout << "~";   

}
