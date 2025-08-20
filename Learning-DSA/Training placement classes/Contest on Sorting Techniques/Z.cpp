  
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
class Solution {
public:
    bool f(int dist, vector<int>& stalls, int k, int n) {
        int cnt = 1;
        int cons = stalls[0];
        for (int i = 1; i < n; i++) {
            if (stalls[i] - cons >= dist) {
                cnt++;
                cons = stalls[i];
            } 
        }
        return (cnt >= k);
    }

    int solve(int n, int k, vector<int>& stalls) {
        sort(stalls.begin(), stalls.end());
        int high = stalls[n - 1];
        int low = 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (f(mid, stalls, k, n)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};

int main() {
    ll t;
    cin >> t;
    Solution obj;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        cout << obj.solve(n, k, v) << endl; 
    }

    return 0;
}
  
  
  
  // suegf 