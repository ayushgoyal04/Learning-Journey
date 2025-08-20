#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long int flag = 0;
        for (long long int i = 0; i < n; i++) {
            for (long long int j = i + 1; j < n; j++) {
                if ((v[i] + v[j]) == 2000) {
                    cout << "Accepted" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                break; // Break from outer loop if pair found
            }
        }
        
        if (flag == 0) {
            cout << "Rejected" << endl;
        }
    }

    return 0;
}
