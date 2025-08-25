#include <iostream>
#include <cstring>

#define Log(x) std::cout << x << std::endl;

int main()
{
    // --- POINTERS IN C++ ---
    // A pointer is a variable that stores the memory address of another variable.
    // The type of pointer (int*, double*, etc.) tells the compiler what type of data is at that address.
    // void* is a generic pointer type, but you cannot dereference it directly without casting.

    // Example: Basic pointer usage
    int value = 42;
    int *pValue = &value; // pValue holds the address of value
    Log("Address stored in pValue: ");
    Log(pValue);
    Log("Value pointed to by pValue: ");
    Log(*pValue);

    // You can change the value at the address using the pointer
    *pValue = 100;
    Log("New value of value: ");
    Log(value);

    // --- DOUBLE POINTERS (POINTER TO POINTER) ---
    // A double pointer stores the address of another pointer.
    int **ppValue = &pValue;
    Log("Address stored in ppValue (address of pValue): ");
    Log(ppValue);
    Log("Value pointed to by ppValue (address of value): ");
    Log(*ppValue);
    Log("Value pointed to by *ppValue (actual value): ");
    Log(**ppValue);

    // Double pointers are useful for dynamic memory, arrays, and passing pointers by reference to functions.

    // --- Niche Info ---
    // nullptr is preferred over 0 for null pointers in modern C++.
    // Pointer arithmetic lets you move between elements in arrays.
    // You must be careful with pointer types and casting, especially with void*.
    // Dangling pointers (pointing to deleted memory) can cause bugs.
    // Use smart pointers (std::unique_ptr, std::shared_ptr) for safer memory management in modern C++.

    // void* ptr = 0; // this si an invalid ptr because 0 is not a mmemory adress
    // ptr = nullptr;

    int var = 8;
    void *var_ptr = &var;    // var_ptr is the place where var (8) is stored
    int *another_one = &var; // THis does not change anything, this is just syntatcical sugar which helps up know that the adress which is there int he another_one pointer MIGHT BE / potentially an integer;
    double *another_one_one = (double *)&var;

    Log(var_ptr);
    Log(another_one);
    Log(another_one_one);

    //    *var_ptr = 28.4; /  -- this is not allowed since again is a void pointer - the compiler does nto knwo the type of that pointer.

    *another_one = 75.3;
    Log(var);

    // this is defrencing the pointer - which means that thsi si accuessinf the data which si stored ar the adress that the again pointer is pointing to

    // inorder to acccess the data in uoder to modify / read it.. that is where refrence comes in
    // and this si alos the reason we don ot always use a void pointer

    // allocating memory in heap
    // we are askign for 8 bytes of memory
    char *buffer = new char[8];
    // new char returns the starting pointer to the 8 bytes allocated to buffer.
    // fill the 8 byrtes with 0
    memset(buffer, 0, 8);

    char **ptr = &buffer;

    delete[] buffer;
}
