#include "Graphics.h"
#include <iostream>
#include "CBoard.h"

Graphics::Graphics()
{
    
}

void Graphics::Introduction()
{
    std::cout << "Select your token. " << '\n';
    
    std::cout << "Select 'O' or 'X'" << '\n';
    
}

//Clear screen using windows specific console 
//functions from Console class
void Graphics::iClearScreen()
{
    wConsole.cls();
}


void Graphics::iPrintBoard(CBoard* board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board->board[i][j] << ' ' << ' ';
            
        }
        std:: cout << '\n';
    }
}
