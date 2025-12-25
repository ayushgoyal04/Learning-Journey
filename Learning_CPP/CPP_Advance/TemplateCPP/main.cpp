// template is getting the copiler to write code for us based on certain specified rules

#include <iostream>
#include <string>

// No tempates issue-> mannully defined 3 overloads for the print functions

//SOLUTION-> convert the funcions into a template
// void Print(int value)
// {
//     std::cout<< value << std::endl;
// }
// void Print(std::string value)
// {
//     std::cout<< value << std::endl;
// }
// void Print(float value)
// {
//     std::cout<< value << std::endl;
// }

template<typename T>
void print_template(T value)
{
    std::cout<< value << std::endl;
}

int main()
{
    // Print(5); // ISSUE-> cannot take string, we will have to overoad the function now
    // Print("Hello");
    // Print(5.5f);

    // with tempate->
    print_template(5);
    print_template("HELLO");
    print_template<float>(5.5f);
}

// tempate is not real code, it is not a real function it is evaluated at the compile time when we call it for the first time
// when we call it (with what types) determines the way the tempate will be called


// typename takes any type that is provided to it when calling it-> we casn also specify the type explicitely
