#include <bits/stdc++.h>
using namespace std;

bool Issub(string ques, string s, string ans) {
    if (ques.length() == 0) {
        return ans == s;
    }

    // Check by excluding the current character
    bool exclude = Issub(ques.substr(1), s, ans);
    // Check by including the current character
    bool include = Issub(ques.substr(1), s, ans + ques[0]);

    // Return true if either of the above is true
    return exclude || include;
}

int main() {
    string s = "abc";
    string t = "abcdefgh";
    bool b = Issub(t, s, "");
    cout << (b ? "true" : "false") << endl;

    return 0;
}
