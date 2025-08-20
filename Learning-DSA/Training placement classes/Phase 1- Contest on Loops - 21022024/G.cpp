#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x); // Adding elements to the vector
    }

    sort(v.begin(), v.end());
    int ans = v[n - 1]; // Last element after sorting is the maximum element

    cout << ans << endl;

    return 0;
}
