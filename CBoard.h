#ifndef CBOARD_H
#define CBOARD_H
    #include <iostream>
    #include <vector>
    #include "CInput.h"
    
    class CPlayer;
    
    class CBoard
    {
        public:
            CBoard(unsigned, unsigned); //Constructor determines board size
            //void iPrintBoard();
            void iBoardUpdate(CPlayer*);//, void (*updateBoard)(unsigned));
            void iCustomUpdateBoard(CPlayer*, CInput*);
        char board[3][3];
        unsigned currentMove;
    };
    
#endif 