#include "CBoard.h"
#include <vector>
#include "CPlayer.h"
#include <stdio.h>

extern int moves;

CBoard::CBoard(unsigned x, unsigned y)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '*';
        }
    }
}

//Prints the tic tac toe board to the screen


//typedef void (*fp_updateBoard)(CInput*);

//fp_ - function pointer
void CBoard::iBoardUpdate(CPlayer* obj)//, void (*updateBoard)(unsigned))
{
   iCustomUpdateBoard(obj,obj->getInput());
   obj->Graphic.iClearScreen();   
   obj->Graphic.iPrintBoard(this);
   //std::cout << "we done " << std::endl;
   //std::cout << "print me " << std::endl;
}

void CBoard::iCustomUpdateBoard(CPlayer* obj, CInput* UserInput)
{
    unsigned keyInput = UserInput->getSingleNumPadKey();
    //std::cout << "keyInput " << keyInput << std::endl;
    switch(keyInput)
    {
        
        case (1):
            if (board[2][0] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[2][0] = obj->getUserID();
                moves++;
            //std::cout << "first one here eh mate! " << std::endl;
            //std::cout << this->board[2][0] << std::endl;
            break;
        case (2):
            if (board[2][1] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[2][1] = obj->getUserID();
                moves++;
            break;
        case (3):
            if (board[2][2] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[2][2] = obj->getUserID();
                moves++;
            break;
        case (4):
            if (board[1][0] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[1][0] = obj->getUserID();
                moves++;
            break;
        case (5):
            if (board[1][1] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[1][1] = obj->getUserID();
                moves++;
            break;           
        case (6):
            if (board[1][2] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[1][2] = obj->getUserID();
                moves++;
            break;  
        case (7):
            if (board[0][0] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[0][0] = obj->getUserID();
                moves++;
            break;
        case (8):
            if (board[0][1] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[0][1] = obj->getUserID();
                moves++;
            break;
        case (9):
            if (board[0][2] != '*')
            {
                std::cout << "Already take!\n";
                obj->Graphic.iClearScreen();
                obj->Graphic.iPrintBoard(this);
                std::cout << "Already take!\n";
                obj->playerMove(this);
            }
            else
                board[0][2] = obj->getUserID();
                moves++;
            break;
    }
}