#ifndef CONSOLE_H
#define CONSOLE_H
    #include <windows.h>
    
    class Console
    {
        public:
            Console();
            void cls();
        HANDLE hConsole;
    };

#endif 