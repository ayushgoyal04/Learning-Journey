#include <bits/stdc++.h>
using namespace std;

// Recursive function to generate subsequences and count them
void sub(string ques, string ans, int &count) {
    if (ques.length() == 0) {
        cout << ans << endl;
        count++;
        return;
    }

    // Call the function recursively with the first character excluded
    sub(ques.substr(1), ans + "", count);

    // Call the function recursively with the first character included
    sub(ques.substr(1), ans + ques[0], count);
}

int main() {
    string str = "geeks";
    int count = 0;
    sub(str, "", count);
    cout << "Total number of subsequences: " << count << endl;
    return 0;
}
