#include <iostream>
#include <string>

std::string alphabetU = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //0-25
std::string alphabetL = "abcdefghijklmnopqrstuvwxyz";


int counter(std::string l) // How many letters in a word, filters out other characters
{
   int x = 0; // counter
   for (int i = 0; i != l.length(); i++) // check each line
   {
      for (int i = 0; i != 26; i++) // 25 - length of alphabet
      {
         if (l[x] == alphabetU[i] || l[x] == alphabetL[i])  x++;
      }
   }
   return x; //Shift for correct indexing
}
// Returns the correct number needed to set the counter as an index 
//----------------------------------------------------------------------//

bool reg(char c) // check registor
{
   bool capital;

   for (int i = 0; i != 26; i++) // 25 - length of alphabet
   {
      if (c == alphabetU[i]) capital = true;
   }
   for (int i = 0; i != 26; i++) // 25 - length of alphabet
   {
      if (c == alphabetL[i]) capital = false;
   }
   return capital;
}
// Case input check, works in tandem with shift function
//----------------------------------------------------------------------//

char shift(char c) // shift by one
{
   int counter = 1;
   if (reg(c))
   {
      for (int i = 0; c != alphabetU[i]; i++)
      {
         counter++;
         if (counter == 26) counter = 0; // 25 - length of alphabet
      }
      c = alphabetL[counter];
   }
   else
   {
      for (int i = 0; c != alphabetL[i]; i++)
      {
         counter++;
         if (counter == 26) counter = 0; // 25 - length of alphabet
      }
      c = alphabetL[counter];
   }
   return c;
}
// Shift by one depends on the execution of the reg function
//----------------------------------------------------------------------//


std::string assembly(std::string l)
{
   //char temp;
   
   for (int i = 0; i != counter(l); i++)  l[i] = shift(l[i]);
   return l;
}
// Finished string assembly
//----------------------------------------------------------------------//

int main()
{
   std::string line;
   std::cin >> line;

   std::cout << assembly(line);
}
