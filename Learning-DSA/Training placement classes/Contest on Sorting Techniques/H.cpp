#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr1(n);
        vector<int> arr2(n);
        
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
            
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
            
        sort(arr1.begin(), arr1.end()); // Sort team A's players
        sort(arr2.begin(), arr2.end()); // Sort team B's players
        
        int i = 0, j = 0, count = 0;
        
        while (i < n && j < n) {
            if (arr1[i] > arr2[j]) {
                count++;
                i++;
                j++;
            } else {
                i++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}