#include <bits/stdc++.h>
using namespace std;

// -------------------------------------------------------------
// Function: binaryToDecimal
// Purpose : Convert a binary number (as string) to decimal
// Input   : A string representing a binary number (e.g., "1011")
// Output  : An integer (decimal equivalent)
// Time Complexity  : O(n) where n = length of binary string
// Space Complexity : O(1) (no extra space except a few variables)
// -------------------------------------------------------------
int binaryToDecimal(string binaryStr) {
    int decimal = 0;   // Resulting decimal value
    int power = 0;     // Current power of 2 (starts from 0)

    // Traverse the binary string from right to left
    for (int i = binaryStr.length() - 1; i >= 0; i--) {
        if (binaryStr[i] == '1') {
            // If current bit is 1, add 2^power to result
            decimal += pow(2, power);
        }
        power++; // Move to next higher power of 2
    }

    return decimal;
}

// -------------------------------------------------------------
// Function: decimalToBinary
// Purpose : Convert a decimal number to binary (as string)
// Input   : An integer (e.g., 13)
// Output  : A string representing the binary number (e.g., "1101")
// Time Complexity  : O(log₂n), where n = decimal number
// Space Complexity : O(log₂n), for storing binary digits as string
// -------------------------------------------------------------
string decimalToBinary(int number) {
    if (number == 0) return "0";  // Special case: 0 in binary is "0"

    string binary = ""; // To store binary digits

    // Divide the number by 2 repeatedly and store remainders
    while (number > 0) {
        int bit = number % 2;                   // Get least significant bit
        binary = to_string(bit) + binary;       // Prepend bit to binary string
        number = number / 2;                    // Move to next bit
    }

    return binary;
}

// -------------------------------------------------------------
// Main function for demonstration (no user input)
// -------------------------------------------------------------
int main() {

    // Example 1: Binary to Decimal
    string binaryStr = "1101"; // binary for 13
    int decimalValue = binaryToDecimal(binaryStr);
    cout << "[Binary to Decimal]\n";
    cout << "Binary: " << binaryStr << "\n";
    cout << "Decimal: " << decimalValue << "\n\n";

    // Example 2: Decimal to Binary
    int decimalNum = 25;
    string binaryResult = decimalToBinary(decimalNum);
    cout << "[Decimal to Binary]\n";
    cout << "Decimal: " << decimalNum << "\n";
    cout << "Binary: " << binaryResult << "\n";

    return 0;
}
