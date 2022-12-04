#include <iostream>
#include <string>

int main()
{
    std::string number;
    std::cin >> number;

    int PointCounter = 0;
    int MinusCounter = 0;

    bool match = true;

    for(int i = 0; i < number.length(); i++)
    {
        !isdigit(number[i]) ? match = false : match = true;
        if(!isdigit(number[i]) && number[i] != '.' && number[i] != '-') {std::cout << "Error!\n"; match = false; break;}
        if(number[i] == '-' && number[i] != number[0]) {std::cout << "Error!\n"; match = false; break;}
        if(number[number.length() - 1] == '.') match = true;

        if(number[i] == '.') {PointCounter++;}
        if(PointCounter == 2) {std::cout << "Error!\n"; match = false; break;}

        if(number[i] == '-') {MinusCounter++;}
        if(MinusCounter == 2) {std::cout << "Error!\n"; match = false; break;}
    }
    match ? std::cout << "Yes.\n" : std::cout << "No.\n";
}
