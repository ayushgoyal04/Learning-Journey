#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function for generating combinations of numbers
void combine(int n, int k, string ans) {
    if (k == 0) {
        cout << ans << endl;
        return;
    }
    if (n == 0) return;
    combine(n - 1, k, ans);
    combine(n - 1, k - 1, ans + to_string(n));
}

// Function for generating combinations of integers and storing them in a vector of vectors
void combine1(int n, int k, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0) {
        result.push_back(current);
        return;
    }
    if (n == 0) return;
    
    combine1(n - 1, k, current, result);
    
    current.push_back(n);
    combine1(n - 1, k - 1, current, result);
    current.pop_back();
}

int main() {
    vector<int> current;
    vector<vector<int>> result;
    combine1(4, 2, current, result);
    
    // Print the result
    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
