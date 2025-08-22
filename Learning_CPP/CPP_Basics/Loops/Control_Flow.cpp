#include "../Conditionals/Log.h"
#include <iostream>

int main()
{

    // --- CONTROL FLOW KEYWORDS IN C++ ---
    // 1. break: exits the nearest loop or switch
    for (int i = 0; i < 10; ++i)
    {
        if (i == 5)
            break; // loop stops when i == 5
        Log("break demo");
    }

    // 2. continue: skips the rest of the current loop iteration
    for (int i = 0; i < 5; ++i)
    {
        if (i == 2)
            continue; // skip when i == 2
        Log("continue demo");
    }

    // 3. return: exits a function immediately
    auto foo = [](int x)
    {
        if (x < 0)
            return -1; // exit early for negative x
        return x * 2;
    };
    std::cout << "return demo: " << foo(3) << std::endl;

    // 4. goto (niche, rarely recommended): jumps to a labeled statement
    int j = 0;
start:
    if (j < 2)
    {
        Log("goto demo");
        ++j;
        goto start; // jumps back to 'start'
    }

    // 5. switch: multi-way branch for integral types
    int x = 2;
    switch (x)
    {
    case 1:
        Log("x is 1");
        break;
    case 2:
        Log("x is 2");
        break;
    default:
        Log("x is something else");
    }

    // --- Niche Info ---
    // - break only exits the innermost loop/switch
    // - continue only affects loops, not switch
    // - return can be used anywhere in a function, including inside loops or conditionals
    // - goto is discouraged in modern C++ except for special cases
    // - switch only works with integral or enum types, not strings or floating-point
    // - Cases in switch fall through unless you use break
    // - Nested control flow for complex logic
    // - Short-circuiting with logical operators can optimize performance
    // - Use control flow wisely for readable and maintainable code
    // --- Using break and continue ---
    for (int i = 0; i < 5; ++i)
    {
        if (i == 2)
            continue; // skip when i == 2
        if (i == 4)
            break; // exit loop when i == 4
        Log("Break/Continue demo");
    }

    /*
    CONTROL FLOW:
    contine= move out of that iteration
    brak - move outtof the loop
    return - move out of that finction
    goto - jump to a labeled statement (rarely used)
    switch - multi-way branch for integral types

    Niche:
    - break only exits innermost loop/switch
    - continue only affects loops
    - return can be used anywhere in a function
    - goto discouraged except for special cases
    - switch only works with integral/enum types
    - Cases fall through unless break
    - Use control flow wisely for maintainable code
    */
}
