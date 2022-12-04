#include <iostream>
#include <string>

int main()
{
    std::string text;
    std:getline(std::cin, text);

    int counter = 0;
    if(text[0] != ' '){counter++;}

    for(int i = 0; i < text.length()-1; i++)
        if(text[i] == ' ')
            if(text[i+1] != ' '){counter++;}
    std::cout << counter;
}
