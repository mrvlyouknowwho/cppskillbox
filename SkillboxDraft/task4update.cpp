#include <iostream>

int main()
{
   int number, draft;
   int amount = 0, factor = 10;
   int count1 = 0, count2 = 0;
   int sum1 = 0, sum2 = 0;
   std::cout << "Enter number: ";
   std::cin >> number;
   draft = number;

   do {
      number /= 10;
      amount++;
   } while (number != 0);

   if (amount % 2 == 0)
   {
      count1 = amount / 2;
      count2 = count1;
      
      sum1 = draft % 10;
      count1 -= 1;
      
      do {
         count1 -= 1;
         sum1 = sum1 + (draft / factor) % 10;
         factor *= 10;
   
      } while (count1 != 0);


      do {
         count2 -= 1;
         sum2 = sum2 + (draft / factor) % 10;
         factor *= 10;
      } while (count2 != 0);

      if (sum1 == sum2) std::cout << "Yes";
      else std::cout << "No";
   }
   else std::cout << "False";
}