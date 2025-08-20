#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Clear the input buffer

    while (t--) {
        string s;
        getline(cin, s);

        int n = s.length();
        bool foundDuplicate = false;
        char result = '.';

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    cout << s[i] << endl;
                    foundDuplicate = true;
                    result = s[i]; // Update result to the repeating character
                    break; // Break the inner loop if a duplicate is found
                }
            }
            if (foundDuplicate) break; // Break the outer loop if a duplicate is found
        }

        if (!foundDuplicate) {
            cout << result << endl;
        }
    }

    return 0; // Return 0 to indicate successful termination
}
