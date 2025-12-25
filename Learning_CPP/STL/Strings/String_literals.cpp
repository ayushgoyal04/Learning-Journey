#include <iostream>
#include <string>
#include <string_view>
#include <cstdint>

// For std::string_literals
using namespace std::string_literals;
using namespace std::string_view_literals;

int main()
{
    // --- 1. Basic String Literals ---

    "Ayush"; // const char[6] — "Ayush" + null terminator '\0'

    // String literals are of type "const char[]" and stored in read-only memory.
    // Attempting to modify a string literal is undefined behavior.

    char* str = const_cast<char*>("ayush"); // BAD practice: don't do this!
    // str[0] = 'A'; // ❌ Undefined behavior

    // ✅ Instead, use a modifiable char array:
    char mutableStr[] = "ayush"; // Stored in stack, mutable
    mutableStr[0] = 'A';         // ✅ Safe modification
    std::cout << "Mutable string: " << mutableStr << "\n";

    // --- 2. Using std::string (mutable, dynamic, safe) ---
    std::string s = "ayush";
    s[0] = 'A';
    std::cout << "std::string: " << s << "\n";

    // You can also use the 's' suffix for string literals from std::string_literals
    auto stdStr = "hello"s; // Type: std::string
    std::cout << "std::string literal with suffix 's': " << stdStr << "\n";

    // 'sv' suffix for string_view (non-owning, lightweight view of string)
    auto view = "view example"sv;
    std::cout << "std::string_view: " << view << "\n";

    // --- 3. Raw String Literals (no escaping needed) ---
    std::string raw = R"(Line1\nLine2\tTabbed)"; // No escape characters processed
    std::cout << "Raw string literal: " << raw << "\n";

    // Useful for regex, JSON, XML, or multiline literals

    // --- 4. Unicode String Literals ---

    // UTF-8 (char-based string, C++11+)
    const char* utf8 = u8"Hello UTF-8 🌍";
    std::cout << "UTF-8 string: " << utf8 << "\n";

    // UTF-16 (char16_t, 2 bytes)
    const char16_t* utf16 = u"Hello UTF-16 🌍";
    // Needs external library or proper encoding to display

    // UTF-32 (char32_t, 4 bytes)
    const char32_t* utf32 = U"Hello UTF-32 🌍";
    // Same here — not easily printable on all systems

    // Wide characters (platform dependent size, usually 2 or 4 bytes)
    const wchar_t* wide = L"Hello wide 🌍";
    std::wcout << L"Wide string literal: " << wide << L"\n";

    // --- 5. String Literal Types Summary ---
    /*
        "text"       -> const char[]         (narrow string literal)
        u8"text"     -> const char[]         (UTF-8 string literal)
        u"text"      -> const char16_t[]     (UTF-16 string literal)
        U"text"      -> const char32_t[]     (UTF-32 string literal)
        L"text"      -> const wchar_t[]      (wide string literal)
        R"text"      -> Raw string (no escape processing)

        "hello"s     -> std::string          (via std::string_literals)
        "hello"sv    -> std::string_view     (via std::string_view_literals)
    */

    // --- 6. Use Cases ---

    // Narrow string ("") is most common in ASCII or UTF-8 systems
    // UTF-16/32: Interfacing with Windows APIs, mobile platforms, internationalization
    // Wide strings: Legacy code or platform-specific code
    // std::string_view: Great for performance-critical code (non-owning views)
    // Raw strings: Best for complex literals (regex, HTML, JSON)

    // --- 7. Miscellaneous: Lifetime and Memory ---

    // String literals live for the entire duration of the program (static storage)
    // Example:
    const char* name = "John"; // OK: valid as long as program runs

    // std::string copies the literal into dynamic memory:
    std::string dynamicName = "John"; // Safe, flexible

    // --- 8. String literal concatenation ---
    const char* combined = "Hello, "
                           "World!"; // Concatenated at compile time
    std::cout << "Concatenated string literal: " << combined << "\n";

    return 0;
}
