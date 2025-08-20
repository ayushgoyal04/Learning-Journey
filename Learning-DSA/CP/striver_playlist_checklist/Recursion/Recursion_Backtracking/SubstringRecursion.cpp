#include <iostream>
#include <string>
#include <vector>

// Helper function to recursively generate substrings starting from index 'start'
void generateSubstrings(const std::string& str, int start, int end, std::vector<std::string>& substrings) {
    if (end == str.length()) {
        return;
    }
    if (start > end) {
        generateSubstrings(str, 0, end + 1, substrings);
    } else {
        substrings.push_back(str.substr(start, end - start + 1));
        generateSubstrings(str, start + 1, end, substrings);
    }
}

// Function to get all substrings of a string using recursion
std::vector<std::string> getAllSubstrings(const std::string& str) {
    std::vector<std::string> substrings;
    generateSubstrings(str, 0, 0, substrings);
    return substrings;
}

int main() {
    std::string str = "abc";
    std::vector<std::string> substrings = getAllSubstrings(str);

    std::cout << "All substrings of \"" << str << "\":" << std::endl;
    for (const std::string& substring : substrings) {
        std::cout << substring << std::endl;
    }

    return 0;
}
