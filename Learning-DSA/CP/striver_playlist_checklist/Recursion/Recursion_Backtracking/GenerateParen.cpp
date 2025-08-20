#include <bits/stdc++.h>
using namespace std;

void paren(int n, int open, int close, string ans, vector<string>& v) {
    if (ans.length() == 2 * n) {
        v.push_back(ans);
        return;
    }

    if (open < n) {
        paren(n, open + 1, close, ans + "(", v);
    }
    if (close < open) {
        paren(n, open, close + 1, ans + ")", v);
    }
}

int main() {
    vector<string> v;
    int n = 3;
    paren(n, 0, 0, "", v);
    for (const string& s : v) {
        cout << s << endl;
    }
    return 0;
}
