
# How Does C++ Work?

## The Compilation Process

1. **Preprocessing**
  - The preprocessor handles directives like `#include` and `#define`.
  - Header files (e.g., `<iostream>`) are not compiled separately; their contents are literally inserted at the top of your code during preprocessing.

2. **Compilation**
  - Each `.cpp` file is compiled into an object file (`.o` or `.obj`).
  - Example: `g++ -c Math.cpp -o Math.o`
  - You can create object files without a header or a `main` function.

3. **Linking**
  - The linker combines all object files into a single executable (e.g., `.exe`).
  - Example: `g++ Math.cpp Log.cpp -o Math`
  - The job of the linker is to resolve symbols (functions, variables). If it can't, you get a linker error (e.g., "undefined reference").

## Example Compilation Steps

```sh
g++ -E test.cpp -o test.i      # Preprocessing
g++ -S test.cpp -o test.s      # Compilation to assembly
g++ -c test.cpp -o test.o      # Compilation to object file
g++ test.o -o test             # Linking to executable
```

## Errors

- Compiler errors (start with `C`) occur during compilation.
- Linker errors (start with `LNK`) occur during linking.
- The error list in some IDEs may be confusing; check the output window for better info.

## Translational Units

- Each `.cpp` file is called a "translation unit".
- Unlike Java, C++ files do not need to match class names; file names have no special meaning.
- The compiler only needs to know the type of file: `.c` (C file), `.cpp` (C++ file), `.h` (header file).

## Declaration vs Definition

- **Declaration**: Tells the compiler that a function or variable exists (e.g., `int add(int, int);`).
- **Definition**: Provides the actual body/implementation (e.g., `int add(int a, int b) { return a + b; }`).

## Linking Multiple Files

- If you split code into multiple files (e.g., `main.cpp` and `Log.cpp`), you must compile and link both together:
  ```sh
  g++ main.cpp Log.cpp -o main
  ./main
  ```

## How the Compiler Works Internally

- The compiler tokenizes your code and builds an Abstract Syntax Tree (AST).
- The AST is converted into machine code or constant data.
- The end goal is to produce an executable file.

## The Role of `#include`

- The `#include` directive simply copies the contents of the header file into your source file during preprocessing.
- Proof: If you create a header file (e.g., `endBrace.h`) and include it in `Math.cpp`, its contents are pasted at the top.

## How the Linker Works

- After compilation, the linker starts.
- It finds and connects all symbols and functions, linking them together.
- This allows you to split code across multiple files and combine them into one executable.

## Example: Using the Linker

- Suppose you have a `multiply` function and a `log` function in separate files. You compile both and link them together:
  ```sh
  g++ Math.cpp Log.cpp -o Math
  ```
- Linking errors (e.g., "unresolved external symbol" or "undefined reference") occur if the linker can't find a definition for a declared symbol.

## Additional Information

- Modern C++ compilers optimize code during compilation and linking.
- Static libraries (`.lib` or `.a`) and dynamic/shared libraries (`.dll` or `.so`) are also created and linked similarly.
- You can use header guards (`#pragma once` or `#ifndef ... #define ... #endif`) to prevent multiple inclusions of the same header file.
