#ifndef CPLAYER_H
#define CPLAYER_H
    #include "CInput.h"
    #include "CBoard.h"
    #include "Graphics.h"
    
    void play();
    
    class CPlayer
    {
        public:
            CPlayer();
            void playerMove(CBoard* obj);
            CInput* getInput();
            void updateMap(unsigned);
            void setUserID();
            char getUserID();
            void win();
            void iPlay();
            //void iMenu();
        CInput NumInput;
        Graphics Graphic;
        
        char userID;
    };
#endif