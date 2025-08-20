#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
     for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (isPalindrome(a)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
