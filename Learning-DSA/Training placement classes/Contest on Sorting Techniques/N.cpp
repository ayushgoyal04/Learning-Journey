#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(256, 0); // Initialize a frequency array for all ASCII characters

    // Count the frequency of each character in the string
    for (char c : s) {
        freq[c]++;
    }

    char max_char = '\0'; // Initialize the character with maximum frequency
    int max_freq = 0; // Initialize the maximum frequency

    // Find the character with maximum frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = static_cast<char>(i);
        }
    }

    cout << max_char << endl;

    return 0;
}