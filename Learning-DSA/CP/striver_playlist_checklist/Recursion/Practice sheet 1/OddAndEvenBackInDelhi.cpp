#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int& c : v) {
        cin >> c;
    }

    for (int i = 0; i < n; ++i) {
        int evensum = 0, oddsum = 0;
        for (int num = v[i]; num > 0; num /= 10) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                evensum += digit;
            } else {
                oddsum += digit;
            }
        }

        if (oddsum % 3 == 0 || evensum % 4 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}