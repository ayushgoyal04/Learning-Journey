#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &nums, int x) {
    int start = 0, end = nums.size() - 1;
    int index = nums.size();  // default to size if not found
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] >= x) {
            index = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return index;
}

int upperBound(vector<int> &nums, int x) {
    int start = 0, end = nums.size() - 1;
    int index = nums.size();  // default to size if not found
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] > x) {
            index = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return index;
}

int main() {
    vector<int> nums = {3, 5, 8, 15, 19, 19, 19};
    int x = 19;

    cout << "Lower Bound of " << x << " is at index: " << lowerBound(nums, x) << endl;
    cout << "Upper Bound of " << x << " is at index: " << upperBound(nums, x) << endl;

    return 0;
}
