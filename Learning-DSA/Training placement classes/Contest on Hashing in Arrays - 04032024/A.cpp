#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    unordered_map<int, int> m;
    for(auto x : arr) {
        m[x]++;
    }

    for(auto it : m) {
        if(it.second == 2) {
            cout << it.first << endl;
        }
    }

    return 0;
}