#include <iostream>
#include <string>

int key() // Something more difficult needs to be added
{
   srand(time(0)); 
   return rand() % ((9) - (-9)) + (-9);
}

std::string encrypt(std::string l, int step)
{
   for (int x = 0; x != l.length(); x++)
      if (l[x] >= 0 && l[x] <= 256)                       l[x] = l[x] + step *-1;
   return l;
}

std::string decrypt(std::string l, int step)
{
   for (int x = 0; x != l.length(); x++)
      if (l[x] >= 0 + step && l[x] <= 256 + step)         l[x] = l[x] - step *-1;
   return l;
}

int answer(int a)
{
   while (true)
   {

      if (a == 2)
      {
         int step;
         std::cout << "\n#########################################################\n";
         std::cout << "#                Enter your secret code                 #";
         std::cout << "\n#########################################################\n";

         std::cout << "\n*********************************************************\n";
         std::cin >> step;
         std::cout << "\n*********************************************************\n";

         std::string line;
         std::cout << "\n#########################################################\n";
         std::cout << "#            Enter your encrypted phrase                #";
         std::cout << "\n#########################################################\n";
         std::cin.ignore(32767, '\n');

         std::cout << "\n*********************************************************\n";
         std::getline(std::cin, line);
         std::cout << "\n*********************************************************\n";

         std::cout << "\n#########################################################\n";
         std::cout << "#                  Your decrypted phrase                #";
         std::cout << "\n#########################################################\n";


         std::cout << "\n*********************************************************\n";
         std::cout << decrypt(line, step);
         std::cout << "\n*********************************************************\n";
         return 0;
      }
      else if (a == 1)
      {
         std::string line;
         int step = key();
         std::cout << "\n#########################################################\n";
         std::cout << "#              Enter any phrase, any lenght             #";
         std::cout << "\n#########################################################\n";

         std::cin.ignore(32767, '\n');
         std::cout << "\n*********************************************************\n";
         std::getline(std::cin, line);
         std::cout << "\n*********************************************************\n";

         std::cout << "\n#########################################################\n";
         std::cout << "#                  Your encrypted phrase                #";
         std::cout << "\n#########################################################\n";

         std::cout << "\n*********************************************************\n";
         std::cout << encrypt(line, step);
         std::cout << "\n*********************************************************\n";

         std::cout << "\n#########################################################\n";
         std::cout << "#                  Your secret code: " << step << "                  #";
         std::cout << "\n#########################################################\n";
         return 0;

      }
      else
      {
         std::cout << "\n#########################################################\n";
         std::cout << "#                        Good Bye!                      #";
         std::cout << "\n#########################################################\n";
         return 0;

      }

   }

}

int main()
{
   std::cout << "\n#########################################################\n";
   std::cout << "#                  Welcome to 'Encryptor'               #";
   std::cout << "\n#########################################################\n";

   std::cout << "\n#########################################################\n";
   std::cout << "#        If you want to generate, enter Generate (1)    #";
   std::cout << "\n#########################################################\n";
   std::cout << "#  If you want to decrypt the phrase, enter Decrypt (2) #";
   std::cout << "\n#########################################################\n";
   std::cout << "#    If you want to exit, click on any other button     #";
   std::cout << "\n#########################################################\n";

   int a;
   std::cout << "\n*********************************************************\n";
   std::cin >> a;
   std::cout << "*********************************************************\n";

   return answer(a);
}
