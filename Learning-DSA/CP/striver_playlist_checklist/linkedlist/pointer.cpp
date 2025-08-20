#include <bits/stdc++.h>
using namespace std;

// This program demonstrates the basics of pointers in C++. and also basics of structs
// A pointer is a variable that stores the memory address of another variable.
// The '*' operator is used to declare a pointer and to dereference it (access the value at the address).
// The '&' operator is used to get the address of a variable.


int main() {
    int x = 2;
    int *y = &x;        // y is a pointer to x, stores the address of x
    cout << *y << endl; // Dereferencing y gives the value of x (2)
    cout << y << endl;  // Prints the address stored in y (address of x)
    cout << &y << endl; // Prints the address of the pointer variable y itself
}
