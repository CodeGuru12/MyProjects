#ifndef CINPUT_H
#define CINPUT_H
    #include <iostream>

    class CInput
    {
        public:
            CInput();
            unsigned getSingleNumPadKey();
            char getUserID();
            char playAgain();
        char keyPress;
    };
    
#endif