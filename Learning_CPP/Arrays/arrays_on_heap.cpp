#include<iostream>

int main()
{
    // both creates an array but the furst is on stack which wil be destroyed at the end of the life of the program, wherease the other one is no heap, which will persist unless we explicitly destory it.
    int example[5];
    int* another = new int[5];
    // the biggest difference betqeen a stack and a geap allocation is the lifetime .
    delete[] another;
    // example- when a fn is returnign a new array then we usually create is in the heap

    // int size = sizeof(example) / sizeof(int);
    // thsi is 20 / 4 = 5
    // there is no way to get the size of array on heap, but on stack we can get the size by the above formula.

    static constexpr int newsize = 5;
    int newarray[newsize];
}
