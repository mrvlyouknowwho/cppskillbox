#include <iostream>
#include <string>

bool valid(const std::string &octet)
{
    for(int i = 0; i < octet.length(); i++)
        if(!isdigit(octet[i])) return false;

    int check = 0;
    try {
        check = std::stoi(octet);
    }
    catch(std::invalid_argument){
        return false;
    }

    std::string x = std::to_string(check);

    if(x.length() != octet.length())
    {
        return false;
    }


    if(check >= 0 && check <= 255)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string get_address_part(const std::string &address, int part)
{
    std::string address_part1, address_part2, address_part3, address_part4;
    int i = 0;
    for(;i < address.length(); i++)
    {
        if(address[i] == '.') break;
        address_part1 += address[i];
    }
    i++;
    for(;i < address.length(); i++)
    {
        if(address[i] == '.') break;
        address_part2 += address[i];
    }
    i++;
    for(;i < address.length(); i++)
    {
        if(address[i] == '.') break;
        address_part3 += address[i];
    }
    i++;
    for(;i < address.length(); i++)
    {
        if(address[i] == '.') break;
        address_part4 += address[i];
    }
    if(part == 1) return address_part1;
    else if(part == 2) return address_part2;
    else if(part == 3) return address_part3;
    else if(part == 4) return address_part4;
}

void answer(const std::string &address)
{
    int dote_count = 0;
    for(int i = 0; i < address.length(); i++)
    {
        if(address[i] == '.') dote_count++;
    }
    if(     valid(get_address_part(address, 1)) &&
            valid(get_address_part(address, 2)) &&
            valid(get_address_part(address, 3)) &&
            valid(get_address_part(address, 4)) &&
            dote_count == 3)
    {
        std::cout << "Valid!" << std::endl;
    }
    else
    {
        std::cout << "Invalid!" << std::endl;
    }
}

int main()
{
    std::string address;
    std::cout << "Enter IP:" << std::endl;
    std::cin >> address;

    if(address.length() > 15)
    {
        std::cout << "Invalid!" << std::endl;
    }
    else
    {
        answer(address);
    }
}
