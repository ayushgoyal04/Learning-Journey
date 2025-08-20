// use v.push_back() only

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long int> arr;
    for (int i = 0; i < n; i++) {
        long long int temp;
        cin >> temp;
        arr.push_back(temp); // Add element to the vector
    }
    sort(arr.begin(), arr.end());

    cout << arr.back() << endl;

    return 0;
}
