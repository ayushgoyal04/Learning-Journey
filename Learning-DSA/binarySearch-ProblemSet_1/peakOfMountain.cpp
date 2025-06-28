#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int find_pivot(vector<int> v) {
        int s = 0, e = v.size() - 1;
        int mid = (s + e) / 2;
        while (s < e) {
            if (v[mid] < v[mid + 1])
                s = mid + 1;
            else
                e = mid;
            mid = (s + e) / 2;
        }
        return s;
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};

int main() {
    // Example input array
    vector<int> arr = {0, 2, 3, 5, 3, 1};

    Solution sol;
    int peakIndex = sol.peakIndexInMountainArray(arr);

    cout << "Peak Index in Mountain Array: " << peakIndex << endl;

    return 0;
}
