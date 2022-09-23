#include <iostream>
#include <string>

std::string encrypt(std::string l, int step)
{
   for (int x = 0; x != l.length(); x++)
   {
      if (l[x] >= 'A' && l[x] <= 'Z')         l[x] = l[x] + 32 + step;
      else if (l[x] >= 'a' && l[x] <= 'z')    l[x] = l[x] - 32 - step;
   }
   return l;
}

std::string decrypt(std::string l, int step)
{
   for (int x = 0; x != l.length(); x++)
   {
      if (l[x] >= 'A' + step && l[x] <= 'Z' + step)         l[x] = l[x] + 32 + step;
      else if (l[x] >= 'a' + step && l[x] <= 'z' + step)    l[x] = l[x] - 32 - step;
   }
   return l;
}

int main()
{
   int step;
   std::string line;
   std::cout << "Enter a word without spaces, press Enter and enter the number of steps forward, then also press Enter\n";
   std::cin >> line >> step;

   line = encrypt(line, step);
   std::cout << "\n-----------------------------------------------------------------------\n";
   std::cout << "Your encrypted string: " << line << "\n";

   std::cout << "-----------------------------------------------------------------------\n";
   
   line = decrypt(line, step);
   std::cout << "Your decrypted string: " << line;
   std::cout << "\n-----------------------------------------------------------------------\n\n";
}
