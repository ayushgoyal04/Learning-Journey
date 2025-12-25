#include<iostream>
#include<string>

// void PrintString(std::string newstring) // this si the copy fo the string which is a bad oractive, we are duplicating data .. this si also slow

void PrintString(const std::string& string) // always pass by refrence if you will nto be copyign the sting or editing it
{
    std::cout<<string<<std::endl;
}

int main()
{
    // an array of characters
    const char* name = "SomeText"; // c style way of defining string
    // this is not heap allocated, so delete will not work

    // end of string - null termination character
    char name2[6] = {'A', 'y', 'u', '\0', 'h', '\0'};
    std::cout<<name<<std::endl;
    std::cout<<name2<<std::endl;


    std::string mystring = "MyStdString";
    std::cout<<mystring<<std::endl;

    // mystring.size();
    mystring += "extending";

    bool contains = mystring.find("Std") != std::string::npos; // .find() return the posiiton of the text int he string
    std::cout<<contains;
}
