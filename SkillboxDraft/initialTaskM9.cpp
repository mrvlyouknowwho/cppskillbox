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
         char c = l[x];
         if (c == alphabetU[i] || c == alphabetL[i])
         {
            x++;
         }
      }
   }
   return x; //Shift for correct indexing
}
// Returns the correct number needed to set the counter as an index 
//----------------------------------------------------------------------//

char split(std::string l, int x) //Splitting into characters
{
   return l[x];
}
// Splits a specific number into a separate character, for further work
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
   char x = ' ';
   int counter = 0;
   if (reg(c))
   {
      for (int i = 0; c != x; i++)
      {
         x = alphabetU[i];
         counter++;
         if (counter == 26) counter = 0; // 25 - length of alphabet
      }
      c = alphabetL[counter];
   }
   else
   {
      for (int i = 0; c != x; i++)
      {
         x = alphabetL[i];
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
   int x = counter(l);
   char temp;
   std::string result;
   
   for (int i = 0; i != x; i++)
   {
      temp = split(l, i);
      temp = shift(temp);
      l[i] = temp;
      result = l;
   }




   return result;
}
// Finished string assembly
//----------------------------------------------------------------------//

int main()
{

   std::string line;
   std::cin >> line;

   std::cout << assembly(line);

}
