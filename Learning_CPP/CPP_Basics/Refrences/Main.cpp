#include <iostream>
#include <cstring>

#define Log(x) std::cout << x << std::endl;

// Pointer parameter: takes the memory address and modifies the value via dereferencing.
void Increment(int* value) {
    // A new variable called 'value' is created, but since it's a pointer,
    // the value of 'a' (from main) can still be modified.
    // If we passed 'int value' instead, only a copy would be modified — not the original.
    (*value)++; // Dereference the pointer and increment the value it points to
}

// Reference parameter: allows direct modification of the caller's variable.
// Safer and more readable than pointers.
void Increment_using_reference(int& value) {
    value++; // Directly increments the original variable
    // References must be initialized when declared and cannot be reseated to refer to another variable.
}

int main() {
    int a = 5;
    Log(a);

    Increment(&a);                // Passing the memory address of 'a'
    Increment(&a);                // Pass the address of 'a' (pointer semantics)
    Increment_using_reference(a); // Pass 'a' by reference

    Log(a); // Output: 7

    // --- Reference Basics ---
    // The '&' in a declaration (e.g., int& ref = a) means 'ref' is a reference to 'a'.
    // A reference is an alias for another variable. It cannot be null and must be initialized.

    int& ref = a; // 'ref' is now another name for 'a'
    Log(ref);     // Output: 7

    // Changing 'ref' changes 'a' (since they are the same object)
    ref = 2;
    Log(ref); // Output: 2
    Log(a);   // Output: 2

    // Once a reference is bound to a variable, it cannot be reseated to refer to another variable.
    // Example:
    int x2 = 3;
    int y2 = 9;
    int& my_ref = x2; // my_ref refers to x2

    my_ref = y2;      // This assigns the value of y2 to x2 (x2 = 9), NOT rebinds my_ref to y2
    Log(x2);          // Output: 9
    Log(my_ref);      // Output: 9

    // --- If you want to change what is referenced, use a pointer ---
    int p = 10;
    int q = 13;
    int* myptr = &p; // myptr points to p

    *myptr = 22;     // p = 22
    myptr = &q;      // myptr now points to q
    *myptr = 27;     // q = 27

    Log(p);          // Output: 22
    Log(q);          // Output: 27

    // --- Niche Info ---
    // - References are safer than pointers (cannot be null, must be initialized).
    // - Use references for operator overloading, copy constructors, and function chaining.
    // - C++11 introduced rvalue references (int&&) for move semantics.
    // - References cannot be reseated, but pointers can be reassigned.
    // - Prefer references for function parameters unless you need to support 'null' or reseating.
    // - References are implemented as pointers under the hood, but with stricter rules.
    // - You cannot have a reference to a reference (no int&&&).
    // - Use 'const int&' to avoid unnecessary copies for large objects.
    // - References are not objects; they are just alternative names for existing objects.
    // - Pointers can be used for dynamic memory management; references cannot.
    // - References are required for operator overloading (e.g., assignment operator).
    // - In templates, references allow perfect forwarding.
}
