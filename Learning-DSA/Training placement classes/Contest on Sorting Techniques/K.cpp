#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// Custom comparison function for sorting
bool compare(pair<int, int> &a, pair<int, int> &b) {
    // If frequencies are equal, sort in non-decreasing order
    if (a.second == b.second)
        return a.first < b.first;
    // Otherwise, sort by frequency in increasing order
    return a.second < b.second;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        map<int, int> freqMap;

        // Input array elements and update frequency map
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            freqMap[arr[i]]++;
        }

        // Convert frequency map to vector of pairs
        vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());

        // Sort elements based on frequency using custom comparison function
        sort(freqVec.begin(), freqVec.end(), compare);

        // Output the sorted array with higher frequency elements at the end
        for (auto &ele : freqVec) {
            int freq = ele.second;
            while (freq--)
                cout << ele.first << " ";
        }
        cout << endl;
    }

    return 0;
}
