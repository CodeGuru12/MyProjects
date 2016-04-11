#include "CInput.h"


CInput::CInput()
{
    keyPress = 'E'; //Initialize keyPress so user knows not to use until 
                    //keyboard input has been obtained
}

unsigned CInput::getSingleNumPadKey()
{
    bool acceptedInput = 0;
    char c;
    if (std::cin >> c)
    {   
        unsigned temp = c - 48;
        //std::cout << temp << std::endl;
        if (temp >= 0 && temp <= 9)
        {
            //std::cout << c << std::endl;
            acceptedInput = 1;
            return temp;
        }
        else
        {
            std::cout << "Bad Input" << std::endl;
            //std::cin >> c;
            return 10;
        }
    }
    else 
        std::cout << "Error getting input\n";
        return 10;
}

char CInput::getUserID()
{
    //bool acceptedInput = 0;
    char c;
    if (std::cin >> c)
    {   
        //unsigned temp = c - 48;
        //std::cout << temp << std::endl;
        if (c == 'X' ||  c == 'x' || c == 'O' || c == 'o')
        {
            //std::cout << c << std::endl;
            //acceptedInput = 1;
            return c;
        }
        else
        {
            std::cout << "Bad Input" << std::endl;
            return 10;
        }
    }
    else 
        std::cout << "Error getting input\n";
        return 10;
}

char CInput::playAgain()
{
    char c;
    if (std::cin >> c)
    {   
        //unsigned temp = c - 48;
        //std::cout << temp << std::endl;
        if (c == 'N' ||  c == 'n' || c == 'y' || c == 'Y')
        {
            //std::cout << c << std::endl;
            //acceptedInput = 1;
            return c;
        }
        else
        {
            std::cout << "Bad Input" << std::endl;
            return 10;
        }
    }
    else 
        std::cout << "Error getting input\n";
        return 10;
}