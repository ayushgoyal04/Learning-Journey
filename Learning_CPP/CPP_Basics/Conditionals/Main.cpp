
// --- Advanced C++ Conditionals & Hidden Info ---
// 1. Any non-zero/non-null value in a conditional is treated as 'true'.
// 2. Comparing pointers (like const char* ptr == "Hello") compares addresses, not string contents.
//    Use strcmp for string comparison: if (strcmp(ptr, "Hello") == 0)
// 3. You can use assignment inside conditionals: if (int x = getValue()) { ... }
// 4. C++17 introduced 'if with initializer': if (auto x = foo(); x > 0) { ... }
// 5. Ternary operator: int result = (a > b) ? a : b;
// 6. Lambdas can be used for inline conditional logic or callbacks.
// 7. Short-circuiting: '&&' and '||' stop evaluating as soon as result is known.
// 8. 'constexpr if' (C++17) allows compile-time branching in templates.
// 9. Switch statements only work with integral or enum types (not strings).
// 10. You can use lambdas for custom conditional logic:
//     auto isEven = [](int x) { return x % 2 == 0; };
//     if (isEven(10)) { /* ... */ }

#include <iostream>
#include "Log.h"

int main()
{
    // Example: pointer conditional
    const char *ptr = nullptr;
    if (ptr) // nullptr is 'false', any non-null pointer is 'true'
    {
        Log("Hello World!");
    }
    // WARNING: Comparing pointers to string literals compares addresses, not contents!
    // Use strcmp for string comparison:
    // else if (ptr && strcmp(ptr, "Hello") == 0)
    else if (ptr == "Hello")
    {
        Log("Ptr is Hello");
    }
    else
    {
        Log("Ptr is NULL");
    }

    // --- Lambda Example ---
    auto isEven = [](int x)
    { return x % 2 == 0; };
    int num = 42;
    if (isEven(num))
    {
        Log("Num is even (checked by lambda)");
    }

    // --- Ternary Operator Example ---
    int a = 5, b = 10;
    int max = (a > b) ? a : b;
    Log(max == a ? "a is greater" : "b is greater");

    // --- if with initializer (C++17) ---
    if (int val = num; val > 40)
    {
        Log("Num is greater than 40 (if with initializer)");
    }

    // --- Short-circuiting ---
    int x = 0;
    if (x != 0 && (10 / x > 1)) // Second condition not evaluated if x == 0
    {
        Log("This won't run due to short-circuiting");
    }

    // --- Switch statement ---
    switch (a)
    {
    case 5:
        Log("a is 5");
        break;
    case 10:
        Log("a is 10");
        break;
    default:
        Log("a is something else");
    }

    // --- constexpr if (C++17, for templates) ---
    // template<typename T>
    // void foo(T t) {
    //     if constexpr (std::is_integral_v<T>) {
    //         // Compile-time branch for integral types
    //     }
    // }
}
