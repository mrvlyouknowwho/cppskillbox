#include <iostream>
#include <string>

std::string encrypt(std::string l)
{
   for (int x = 0; x != l.length(); x++)
   {
      if (l[x] >= 'A' && l[x] < 'Z')         l[x] = l[x] + 33; // If with a capital letter, then convert to lowercase and shift by +1, according to ASCII
      else if (l[x] >= 'a' && l[x] < 'z')    l[x] = l[x]++; // If with a lowercase letter, then shift by +1, according to ASCII
      else if (l[x] == 'z' || l[x] == 'Z')   l[x] = 'a'; // If it is the last letter of the alphabet, make it the first letter
   }
   return l;
}

int main()
{
   std::string line;
   std::getline(std::cin, line);

   std::cout << encrypt(line);
}
