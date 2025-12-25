/*
macro-> using the preprocessor to macrofy some process..
-> automate in some form, to reduce code we have to write

Every statement which starts with a # in cpp is called a preprocessor directive

can work on the principle of find and replace...
*/

#include <iostream>

#define DEBUG 0 // toggle this

#if DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x)
#endif


//------- BAICS USAGE -------
// defining a macro
// #define WAIT std::cin.get()
#define LOG(x) std::cout << x << std::endl
int main()
{

    LOG("Ahh...HELLO");

//    WAIT; // this gets replaced by the code mentioned by wait
}

