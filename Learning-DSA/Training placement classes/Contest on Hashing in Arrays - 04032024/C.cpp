#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end()); 

        bool found_duplicate = false;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i + 1]) {
                if (!found_duplicate) {
                   // cout << "Duplicate numbers: ";
                    found_duplicate = true;
                }
                cout << v[i] << " ";
                while (i < n - 1 && v[i] == v[i + 1]) // Skip duplicate numbers
                    i++;
            }
        }

        if (!found_duplicate) {
            cout<<0;
        }
        cout << endl;
    }
    return 0;
}
