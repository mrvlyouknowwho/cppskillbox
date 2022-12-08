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
    int step;
    std::string l;
    std::getline(std::cin, l);
    std::cin >> step;

    //std::cout << encrypt(l, step) << std::endl;
    std::cout << encrypt(l, -step) << std::endl;
}
