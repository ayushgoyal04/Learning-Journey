🔧 Bitwise Operators in C++
Bitwise operators work directly on the binary representation of integers.

✅ 1. Bitwise AND (&)
Rule: 1 & 1 = 1, else 0

Usage: Often used for masking (to check/set specific bits)

cpp
Copy code
int a = 5;    // 0101
int b = 3;    // 0011
int c = a & b; // 0001 = 1
✅ 2. Bitwise OR (|)
Rule: 1 | 1 = 1, 1 | 0 = 1, 0 | 0 = 0

Usage: Used to set specific bits

cpp
Copy code
int a = 5;    // 0101
int b = 3;    // 0011
int c = a | b; // 0111 = 7
✅ 3. Bitwise XOR (^)
Rule: 1 ^ 1 = 0, 1 ^ 0 = 1, 0 ^ 0 = 0

Usage:

Toggle bits

Check if two numbers are different at bit level

Swap two numbers without temp variable

cpp
Copy code
int a = 5;    // 0101
int b = 3;    // 0011
int c = a ^ b; // 0110 = 6
✅ 4. Bitwise NOT (~)
Rule: Inverts all bits

Usage: Flips every bit in the number

cpp
Copy code
int a = 5;    // 00000000 00000000 00000000 00000101
int b = ~a;   // 11111111 11111111 11111111 11111010 (2’s complement: -6)
⚠️ ~a is not simply 1s of a. It flips all 32 bits (or 64 depending on system).

🔁 Bitwise Shift Operators
✅ 5. Left Shift (<<)
Moves bits left, inserts 0 from the right

Effectively multiplies by 2 each shift

cpp
Copy code
int a = 3;      // 00000011
int b = a << 1; // 00000110 = 6
int c = a << 2; // 00001100 = 12
✅ 6. Right Shift (>>)
Moves bits right, fills with:

0 for unsigned

Sign bit (0 or 1) for signed (implementation-dependent)

cpp
Copy code
int a = 8;      // 00001000
int b = a >> 1; // 00000100 = 4
📘 Table Summary of Operators
Operator	Name	Description	Example (a=5, b=3)
&	Bitwise AND	1 if both bits are 1	5 & 3 = 1
`	`	Bitwise OR	1 if at least one bit is 1
^	Bitwise XOR	1 if bits are different	5 ^ 3 = 6
~	Bitwise NOT	Flip all bits (inverts bits)	~5 = -6
<<	Left Shift	Multiply by 2^n	5 << 1 = 10
>>	Right Shift	Divide by 2^n (signed/unsigned)	5 >> 1 = 2

🧠 Common Uses in Programming
Use Case	Operator(s) Used
Check if number is even	x & 1
Set a specific bit	`x
Clear a specific bit	x & ~(1 << i)
Toggle a specific bit	x ^ (1 << i)
Count set bits (Brian Kernighan's)	x & (x-1)
Swap two numbers without temp	^ (XOR swap)

🔬 XOR Swap Example
cpp
Copy code
int a = 5, b = 3;
a = a ^ b; // a = 6
b = a ^ b; // b = 5
a = a ^ b; // a = 3
// a and b are swapped
