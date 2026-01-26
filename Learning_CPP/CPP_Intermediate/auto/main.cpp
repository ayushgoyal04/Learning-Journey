#include <iostream>
#include <vector>
#include <map>
#include <string>

/*
========================================
        AUTO KEYWORD IN C++
========================================

- `auto` allows the compiler to automatically deduce the type of a variable
  from its initializer.
- Type deduction happens at COMPILE TIME.
- Introduced in C++11.
- Commonly used with STL, iterators, lambdas, and templates.
- Reduces verbosity and prevents type-related bugs.

RULE:
- `auto` variables MUST be initialized.
*/

int add(int a, int b) {
    return a + b;
}

int main() {

    /*
    ----------------------------------------
    1. BASIC TYPE DEDUCTION
    ----------------------------------------
    */

    int a = 5;
    auto b = a;        // int
    auto c = 32;       // int
    auto d = 32.5;     // double
    auto ch = 'A';     // char
    auto name = "Ayush"; // const char*

    std::cout << "Basic auto examples:\n";
    std::cout << b << " " << c << " " << d << " " << ch << " " << name << "\n\n";

    /*
    ----------------------------------------
    2. AUTO WITH STL ITERATORS
    ----------------------------------------
    Without auto:
    vector<int>::iterator it = v.begin();

    With auto:
    auto it = v.begin();

    Cleaner and safer if container type changes.
    */

    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Iterating vector using auto iterator:\n";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    /*
    ----------------------------------------
    3. RANGE-BASED FOR LOOP WITH AUTO
    ----------------------------------------
    */

    std::cout << "Range-based for loop:\n";

    // Copy of elements
    for (auto x : vec) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    // Reference (allows modification)
    for (auto& x : vec) {
        x += 10;
    }

    // Const reference (read-only, no copy)
    std::cout << "After modification using auto&:\n";
    for (const auto& x : vec) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    /*
    ----------------------------------------
    4. AUTO WITH COMPLEX STL TYPES
    ----------------------------------------
    */

    std::map<int, std::string> mp;
    mp[1] = "One";
    mp[2] = "Two";

    std::cout << "Map iteration using auto:\n";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }
    std::cout << "\n";

    /*
    ----------------------------------------
    5. AUTO WITH FUNCTION RETURN
    ----------------------------------------
    */

    auto sum = add(3, 4); // auto deduces int
    std::cout << "Sum using auto: " << sum << "\n\n";

    /*
    ----------------------------------------
    6. AUTO WITH LAMBDAS
    ----------------------------------------
    - Lambda types are unnamed.
    - `auto` is REQUIRED to store lambdas.
    */

    auto square = [](int x) {
        return x * x;
    };

    std::cout << "Lambda square(5): " << square(5) << "\n\n";

    /*
    ----------------------------------------
    7. AUTO WITH CONST AND REFERENCES
    ----------------------------------------
    RULE:
    - `auto` drops const and reference by default.
    - Use `auto&` or `const auto&` to preserve them.
    */

    int x = 10;
    int& ref = x;

    auto p = ref;        // int (copy)
    auto& q = ref;       // int& (reference)
    const auto r = x;    // const int

    q = 20;

    std::cout << "x after auto& reference: " << x << "\n";
    std::cout << "p (copy): " << p << "\n";
    std::cout << "r (const): " << r << "\n\n";

    /*
    ----------------------------------------
    8. AUTO WITH POINTERS
    ----------------------------------------
    */

    int value = 50;
    int* ptr = &value;

    auto ptr2 = ptr; // int*

    std::cout << "Pointer value using auto: " << *ptr2 << "\n\n";

    /*
    ----------------------------------------
    9. WHEN NOT TO USE AUTO
    ----------------------------------------
    Avoid auto when it reduces readability.
    */

    // BAD: unclear return type
    // auto result = someComplexFunction();

    // GOOD: explicit type improves clarity
    int explicitResult = add(10, 20);
    std::cout << "Explicit type result: " << explicitResult << "\n\n";

    /*
    ----------------------------------------
    INTERVIEW SUMMARY
    ----------------------------------------
    - auto performs compile-time type inference.
    - Reduces boilerplate code.
    - Essential for STL, lambdas, and templates.
    - No runtime performance cost.
    */

    return 0;
}
