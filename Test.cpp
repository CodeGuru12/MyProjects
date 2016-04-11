#include <iostream>
#include "CBoard.h"
#include "CPlayer.h"
#include <stdio.h>

int moves = 0;
bool globalWin = false;


bool checkWin(CBoard* myboard,CPlayer* player)
{
    //std::cout << "before win " << std::endl;
    bool won = false;
    if(player->userID == myboard->board[2][0] && 
       player->userID == myboard->board[2][1] && 
       player->userID == myboard->board[2][2])
        {
            player->win();
            std::cout << "Success!" << std::endl;
            won = true;
        }
    else if (player->userID == myboard->board[1][0] &&
             player->userID == myboard->board[1][1] && 
             player->userID == myboard->board[1][2])
        {
            player->win();
            won = true;
        }
    else if (player->userID == myboard->board[0][0] &&
             player->userID == myboard->board[0][1] && 
             player->userID == myboard->board[0][2])
        {
            player->win();
            won = true;       
        }            
    else if (player->userID == myboard->board[0][0] &&
             player->userID == myboard->board[1][1] && 
             player->userID == myboard->board[2][2])
        {
            player->win();
            won = true;
        }
    else if (player->userID == myboard->board[0][2] &&
             player->userID == myboard->board[1][1] && 
             player->userID == myboard->board[2][0])
        {
            player->win();
            won = true;        
        }
    else if (player->userID == myboard->board[0][0] &&
             player->userID == myboard->board[1][0] &&
             player->userID == myboard->board[2][0])
        {
            player->win();
            won = true;  
        }            
    else if (player->userID == myboard->board[0][1] &&
             player->userID == myboard->board[1][1] &&
             player->userID == myboard->board[2][1])
        {
            player->win();
            won = true;   
        }            
    else if (player->userID == myboard->board[0][2] &&
             player->userID == myboard->board[1][2] &&
             player->userID == myboard->board[2][2])
        {
            player->win();
            won = true;
        }
    else if (moves == 9)
    {
        std::cout << "It's a draw!\n";
        player->iPlay();

    }
    return won;
}


void play()
{
    std::cout << "Welcome to console TicTacToe!" << '\n';
    CBoard board(3,3);
    //std::cout << "Done " << std::endl;
    //getchar();
    CPlayer playerA;
    CPlayer playerB;

    playerA.Graphic.iPrintBoard(&board);
    //getchar();
    while (!globalWin || moves != 9)
    {
        std::cout << "waiting for move " << std::endl;
        playerA.playerMove(&board);
        globalWin = checkWin(&board,&playerA);
        //std::cout << "Why are we going past here? " << std::endl;
        if (globalWin)
        {
            //playerA.Graphic.iClearScreen();
            playerA.iPlay();
            break;
        }
            //playerA.Graphic.iClearScreen();
        std::cout << "waiting for move " << std::endl;
        playerB.playerMove(&board);
        globalWin = checkWin(&board,&playerB);
        if (globalWin)
        {
            //playerB.Graphic.iClearScreen();
            playerA.iPlay();
            break;
        }
    } 
}


int main()
{
    play();
    return 0;
}