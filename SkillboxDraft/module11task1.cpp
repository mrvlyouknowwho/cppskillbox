#include <iostream>
#include <string>

std::string encrypt(std::string l, int step)
{
    for (int x = 0; x != l.length(); x++)
        if (l[x] >= 65 && l[x] <= 122)                       l[x] = l[x] + step;
    return l;
}

int main()
{
    int step;
    std::string l;
    std::getline(std::cin, l);
    std::cin >> step;

    std::cout << encrypt(l, step);
}
