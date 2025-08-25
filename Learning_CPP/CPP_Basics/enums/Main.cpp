#include<iostream>

enum Example : unsigned char
{
    // 32 bits by default
    // by default the value will be 0 and will be incremented by one unless specified otherwise

    // if we specify the first value an dnot the rest then the rest will be increment of the first in the order
    A = 5, B, C
    // instead of int as a type we can have enum name as a type
};

// int a = 0;
// int b = 1;
// int v = 2;

// we want to define a type which can only be the 3 values declared above- meaning -- we donot want "value" to be anything else other than either A, B, C
int main()
{

    // Example value = 42; // error- can only be A, B, C

    Example value = B;

    if ( value == B )
    {
        // do something
    }
}
