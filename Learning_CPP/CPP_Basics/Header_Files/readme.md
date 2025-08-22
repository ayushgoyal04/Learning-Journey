Header files have a `.h` extension.

`#pragma once`

This is a header guard, which prevents us from including the same header file multiple times in a single translation unit.

Anything beginning with `#` is a preprocessor command or directive. These are evaluated by the C++ preprocessor before compiling.

Usually, we put function declarations (not definitions) in header files to avoid duplication errors.

Alternative to `#pragma once`:
```cpp
#ifndef VAR
#define VAR
// code
#endif
```

What the above code does is define the variable after the condition is checked. If we include the same header again, the variable will already be defined, so the code will not be included again.

Some include statements use `""`, some use `<>`:
- `<>` are for system or standard library headers (not relative)
- `""` are for user-defined headers (relative, can move up a directory)

`""` are more flexible and can be used with any file path.
`<>` are typically used for compiler-included parts like built-in libraries.

Header files in the C standard library have a `.h` at the end, like `#include <stdio.h>`.
Header files in the C++ standard library usually have no extension, like `#include <iostream>`.

