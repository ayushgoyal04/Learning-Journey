#include <iostream>
#include <string>
#include <algorithm>
// #include<iostream>


// namepspace exists to avoid navimg conflicts

// we can also next namespaces
namespace apple
{
    void print(const char *text)
    {
        std::cout << text << std::endl;
    }
}

namespace orange
{
    void print(const char *text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}

int main()
{
    apple::print("THsi si an apple");
    orange::print("THsi si an apple");
}
