#include<iostream>

int main()
{
    int example[5];
    example[0] = 13;
    example[4] = 32;

    // array is just an integer pointer

    int* ptr = example;
    example[2] = 5;
    std::cout << example[2] << std::endl;
    // pointer arithemetic... 2 directly si nto atted to the pointer but first the compiler liiks at the type of the poiner , in this case the pointer is of type int (4 bytes each) hence 2 * 4 = 8 is added to the pointer address whhicis same as directly adressing arr[2];
    *(ptr + 2) = 7;
    std::cout << example[2] << std::endl;
    std::cout << ptr << std::endl;
    std::cout << "size of pointer " << sizeof(ptr) << std::endl;


    std::cout << example[0] << std::endl;
    std::cout << example << std::endl;
    std::cout << sizeof(example) << std::endl;
}
