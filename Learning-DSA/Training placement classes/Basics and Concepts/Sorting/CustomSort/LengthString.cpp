/*Given n strings sort based on lengths of strings in descending order*/
#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if (a.length() != b.length()) { // Check if lengths are different
        return a.length() > b.length(); // If lengths are different, sort by length
    } else { // If lengths are equal, sort lexicographically
        return a < b;
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n); // Initialize vector with size n

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
