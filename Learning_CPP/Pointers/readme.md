pointer is nothing but an integer
memory is everything
pointers are used to manage memory.

A pointer is an integer which stores a memory address.

---

# More About Pointers in C++

- Pointers allow direct access and manipulation of memory.
- The type of pointer (int*, char*, etc.) tells the compiler what kind of data is at the address.
- `void*` is a generic pointer type; you cannot dereference it without casting.
- `nullptr` (C++11+) is preferred over `NULL` or `0` for null pointers.
- Pointer arithmetic lets you move between elements in arrays (e.g., `p+1` points to the next element).
- Dangling pointers (pointing to deleted memory) can cause bugs and crashes.
- Double pointers (`int**`) store the address of another pointer, useful for dynamic memory and passing pointers by reference.
- Smart pointers (`std::unique_ptr`, `std::shared_ptr`) help manage memory automatically and prevent leaks (modern C++).
- Function pointers let you store addresses of functions and call them dynamically.
- You can use pointers to create dynamic data structures like linked lists, trees, and graphs.

## Example: Basic Pointer Usage

```cpp
int value = 42;
int* pValue = &value; // pValue holds the address of value
*pValue = 100; // changes value to 100
```

## Example: Double Pointer

```cpp
int* p = &value;
int** pp = &p;
**pp = 200; // changes value to 200
```

## Niche Info

- You can cast any pointer to `void*` and back, but must be careful with types.
- Pointer alignment matters for performance and correctness on some architectures.
- Pointers can be used for low-level system programming, hardware access, and optimization.
- Not all pointers are integers: on some platforms, pointer size may differ from `int` size.
- Pointer-to-member and pointer-to-member-function are advanced pointer types in C++.

