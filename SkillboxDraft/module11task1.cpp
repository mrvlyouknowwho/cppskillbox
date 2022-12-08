#include <iostream>
#include <string>

std::string encrypt(std::string l, int step)
{
    for (int x = 0; x != l.length(); x++)
    {
        if (l[x] >= 'A' && l[x] <= 'Z')
            step >= 0 ? l[x] = 'A' + ((l[x] - 'A' + step) % 26) : l[x] = 'Z' + ((l[x] - 'Z' + step) % 26);
        if (l[x] >= 'a' && l[x] <= 'z')
            step >= 0 ? (l[x] = 'a' + (l[x] - 'a' + step) % 26) : l[x] = 'z' + ((l[x] - 'z' + step) % 26);
    }
    return l;
}

int main()
{
    std::cout << "What do you want from me?\n";
    std::cout << "0 - encrypt.\nanything - decoding\n";
    char choice;
    std::cin >> choice;
    choice != '0' ? choice = false : choice = true;
    std::cin.ignore(32767, '\n');

    std::cout << "Please enter a line :\n";
    std::string l;
    std::getline(std::cin, l);

    std::cout << "Please enter a step :\n";
    int step;
    std::cin >> step;

    choice == true ? std::cout << encrypt(l, step) : std ::cout << encrypt(l, -step);
}
