#include <iostream>
#include <string>

bool checkAt(std::string text)
{
    int count = 0;
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == '@')
        {
            count++;
        }
    }
    if(count == 1)
    {
        return true;
    }
    else
    {
        std::cout << "Debug Message. Failed CheckAt foo" << std::endl;
        return false;
    }
}

void split(std::string text, std::string *pFirstPart, std::string *pSecondPart)
{
    int i = 0;
    for(; text[i] != '@';i++)       *pFirstPart += text[i];
    for(;i < text.length() - 1; i++)    *pSecondPart += text[i+1];
}

bool doteCheck(std::string part)
{
    for(int i = 0; i < part.length(); i++)
    {
        if(part[i] == '.' && (part[i+1] == '.' || part[i-1] == '.'))
        {
            std::cout << "Debug Message. Failed doteCheck foo" << std::endl;
            return false;
        }
        else if(part[0] == '.' || part[part.length() - 1] == '.')
        {
            std::cout << "Debug Message. Failed doteCheck foo" << std::endl;
            return false;
        }
    }
    return true;
}


bool checkDict(std::string text, std::string dict)
{
    int count = 0;
    for(int i = 0; i < text.length(); i++)
    {
        int j = 0;
        for(; j < dict.length(); j++)
        {
            if(text[i] == dict[j])
            {
                count++;
                break;
            }
        }
    }
    if(count == text.length())
    {
        return true;
    }
    else
    {
        std::cout << "Debug Message. Failed checkDict foo" << std::endl;
        return false;
    }
}

bool checkLength(std::string FirstPart, std::string SecondPart)
{
    if((FirstPart.length() >= 1 && FirstPart.length() <= 64) && SecondPart.length() >= 1 && SecondPart.length() <= 63)
    {
        return true;
    }
    else
    {
        std::cout << "Debug Message. Failed length check" << std::endl;
        return false;
    }
}

int main()
{
    std::string dictF = "abcdefghijklmnopqrstuvwxyz0123456789-.ABCDEFGHIJKLMNOPQRSTUVWXYZ!#$%&'*+-/=?^_`{|}~_";
    std::string dictS = "abcdefghijklmnopqrstuvwxyz0123456789-.ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    std::string text;
    std::cout << "Enter your email address: " << std::endl;
    std::getline(std::cin, text);

    std::string FirstPart, SecondPart;
    split(text, &FirstPart, &SecondPart);
    if(checkAt(text))
    {
        if(checkLength(FirstPart, SecondPart))
        {
            if (doteCheck(FirstPart) && doteCheck(SecondPart))
            {
                if (checkDict(FirstPart, dictF) && checkDict(SecondPart, dictS))
                {
                    std::cout << "Yes." << std::endl;
                }
                else
                {
                    std::cout << "No." << std::endl;
                }
            }
            else
            {
                std::cout << "No." << std::endl;
            }
        }
        else
        {
            std::cout << "No." << std::endl;
        }
    }
    else
    {
        std::cout << "No." << std::endl;
    }
}
