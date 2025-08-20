// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int m;
//     cin >> m;
//     vector<int> brr(m);
//     for(int i = 0; i < m; i++) {
//         cin >> brr[i];
//     }
    
//     vector<int> ans;
//     for(int i = 0; i < m; i++) {
//         bool found = false;
//         for(int j = 0; j < arr.size(); j++) {
//             if(brr[i] == arr[j]) {
//                 found = true;
//                 arr.erase(arr.begin() + j);
//                 break;
//             }
//         }
//         if(!found) {
//             ans.push_back(brr[i]);
//         }
//     }
    
//     sort(ans.begin(), ans.end());

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> missingNumbers(vector<int>& arr, vector<int>& brr) {
    unordered_map<int, int> freq1, freq2;
    vector<int> missing;

    // Calculate frequency of elements in arr
    for (int num : arr) {
        freq1[num]++;
    }

    // Calculate frequency of elements in brr
    for (int num : brr) {
        freq2[num]++;
    }

    // Iterate through brr and compare frequencies with arr
    for (auto it : freq2) {
        int num = it.first;
        int count = it.second;

        if (freq1.find(num) == freq1.end() || freq1[num] < count) {
            missing.push_back(num);
        }
    }

    // Sort the result vector
    sort(missing.begin(), missing.end());

    return missing;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; ++i) {
        cin >> brr[i];
    }

    vector<int> result = missingNumbers(arr, brr);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
