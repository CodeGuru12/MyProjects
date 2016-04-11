#include "CPlayer.h"
#include "CBoard.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>

extern int moves;

CPlayer::CPlayer()
{
    Graphic.Introduction();
    setUserID();
    Graphic.iClearScreen();
}
//void CPlayer::playerMove(CBoard* obj)
void CPlayer::playerMove(CBoard* obj)
{
    //NumInput.getSingleNumPadKey();
    obj->iBoardUpdate(this);
    //obj->iBoardUpdate(obj->iCustomUpdateBoard(&NumInput));//, updateMap);
} 

void CPlayer::updateMap(unsigned)
{
    std::cout << "Success!\n";
}

CInput* CPlayer::getInput()
{
    return &NumInput;
}

void CPlayer::setUserID()
{
    userID = NumInput.getUserID();
    std::cout << userID << std::endl;
    //getchar();
}
char CPlayer::getUserID()
{
    return userID;
}

void CPlayer::win()
{
    std::cout << "Player wins!\n" << '\n';
}
void CPlayer::iPlay()
{
    char playAgain;
    std::cout << "Play again? "<< '\n' << '\n';
    std::cout << "Y/N? ";
    playAgain = this->NumInput.playAgain();
    if (playAgain == 'y' || playAgain == 'Y')
    {    
        moves = 0;
        this->Graphic.iClearScreen();
        play();
    }
    else
        std::cout << "Good Bye!\n";
    
}
