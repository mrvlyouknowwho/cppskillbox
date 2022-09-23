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

std::string decrypt(std::string l, bool reg)
{
   for (int x = 0; x != l.length(); x++)
   {
      if (reg) // If True - must be decrypted in lowercase letters
      {
         if (l[x] > 'a' && l[x] <= 'z')    l[x] = l[x]--;
         else if (l[x] == 'a' || l[x] == 'A')   l[x] = 'z';
      }
      else // If False - must be decrypted in capital letters
      {
         if (l[x] > 'a' && l[x] <= 'z')    l[x] = l[x]-33; 
         else if (l[x] == 'a' || l[x] == 'A')   l[x] = 'Z';
      }
   }
   return l;
}

int main()
{
   bool reg;
   std::string line;
   std::cout << "Enter you word, tap enter and choice parametrs for decrypter\n";
   std::cout << "0 = capital letter | 1 = lowercase letter\n";
   std::cin >> line >> reg;

   std::cout << "\n-----------------------------------------------------------------------\n";
   std::cout << "Your encrypted string: " << encrypt(line) << "\n";
   std::cout << "-----------------------------------------------------------------------\n";
   std::cout << "Your decrypted string: " << decrypt(encrypt(line), reg);
   std::cout << "\n-----------------------------------------------------------------------\n\n";
}
