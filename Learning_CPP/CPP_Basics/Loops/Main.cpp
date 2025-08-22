

#include <iostream>
#include "../Conditionals/Log.h"

// --- Niche Info & Advanced Tips for Loops in C++ ---
// 1. Loop variable scope: Declaring 'int i' inside the for loop limits its scope to the loop.
// 2. You can omit any part of the for loop: for(;;) is an infinite loop.
// 3. 'break' exits the loop immediately; 'continue' skips to the next iteration.
// 4. Range-based for loops (C++11+) simplify iterating over containers: for (auto x : container)
// 5. Lambdas can be used inside loops for custom logic or callbacks.
// 6. Modifying the loop variable inside the loop body can lead to unexpected behavior.
// 7. Nested loops multiply the number of iterations (O(n^2), O(n^3), etc.).
// 8. 'do-while' always executes at least once, even if the condition is false.
// 9. You can use 'goto' for jumping out of nested loops, but it's discouraged.
// 10. Prefer pre-increment (++i) over post-increment (i++) for iterators in C++ (slightly more efficient for custom types).
// 11. Avoid modifying containers while iterating with range-based for loops.
// 12. Use 'const' in range-based loops if you don't need to modify elements: for (const auto& x : container)
// 13. Infinite loop example: while (true) { ... }
// 14. You can use std::for_each (algorithm) for functional-style iteration.

int main()
{
    // --- Classic for loop ---
    for (int i = 0; i < 5; i++)
    {
        Log("Hello");
    }

    // --- For loop with omitted initialization and increment ---
    int i = 0;
    for (; i < 5;)
    {
        Log("Hello (manual increment)");
        i++;
    }

    // --- While loop ---
    i = 0;
    while (i < 5)
    {
        Log("Hello (while loop)");
        i++;
    }

    // --- Do-while loop ---
    bool condition = false;
    do
    {
        Log("Printing even while the condition is false (do-while always runs once)");
    } while (condition);

    // --- Range-based for loop (C++11+) ---
    int arr[] = {1, 2, 3, 4, 5};
    for (const auto &x : arr)
    {
        Log("Element in array (range-based loop)");
    }


    // --- std::for_each example (algorithm header required) ---
    // #include <algorithm>
    // std::for_each(std::begin(arr), std::end(arr), [](int x) { Log("for_each element"); });
}
