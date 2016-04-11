#ifndef GRAPHICS_H
#define GRAPHICS_H
    #include "Console.h"
    #include "CBoard.h"
    
    class Graphics
    {
        public:
            Graphics();
            void Introduction();
            void iPrintBoard(CBoard* board);
            void iClearScreen();
        Console wConsole; //windows console
    };

#endif