
// Demonstration of basic variable types and their properties in C++
#include <iostream>

int main()
{
    // Integer variable: stores whole numbers, 4 bytes (32 bits)
    int variable = 8; // Range: -2,147,483,648 to +2,147,483,647
    /*
        int: 4 bytes = 32 bits (1 bit for sign)
        Range: -2^31 to 2^31 - 1
    */

    // Unsigned integer: only positive numbers, 4 bytes (32 bits)
    unsigned int var = 32; // Range: 0 to 4,294,967,295

    /*
        Number storage sizes:
        char      : 1 byte  (used for characters)
        short     : 2 bytes
        int       : 4 bytes
        long long : 8 bytes
    */

    // Character variables
    char a = 'A';   // Stores character 'A' (ASCII 65)
    char temp = 65; // Stores ASCII value 65, which is 'A'
    std::cout << "char a: " << a << ", char temp: " << temp << std::endl;

    // Short variables
    short aa = 'A'; // Stores ASCII value 65
    short aaa = 65; // Also stores 65
    std::cout << "short aa: " << aa << ", short aaa: " << aaa << std::endl;

    /*
        Decimal storage:
        float  : 4 bytes (add 'f' after the number, e.g., 5.5f)
        double : 8 bytes (larger range and precision)
    */

    // Boolean type: stores true/false, 1 byte (8 bits)
    bool flag = true;

    // Float variable
    float ft = 5.5f;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;

    /*
        Pointers: *
        References: &
        (Used for advanced memory management)
    */

    // Example pointer and reference usage (not used here)
    // int* ptr = &variable;
    // int& ref = variable;

    return 0;
}
