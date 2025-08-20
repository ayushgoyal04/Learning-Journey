#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> prefixesAndSuffixes(2 * n - 2);
        for (int i = 0; i < 2 * n - 2; ++i) {
            cin >> prefixesAndSuffixes[i];
        }

        // Find the longest string (which will be the whole string s)
        string s = "";
        for (const auto& str : prefixesAndSuffixes) {
            if (str.length() == n - 1) {
                s = str;
                break;
            }
        }

        // Find the longest prefix and longest suffix
        string prefix = "", suffix = "";
        for (const auto& str : prefixesAndSuffixes) {
            if (str.length() == n - 1 && str != s) {
                if (s.substr(0, n - 1) == str) {
                    prefix = str;
                } else {
                    suffix = str;
                }
            }
        }

        // Check if the string is a palindrome
        string candidate = prefix + s;
        if (isPalindrome(candidate)) {
            cout << "YES" << endl;
        } else {
            candidate = s + suffix;
            if (isPalindrome(candidate)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
