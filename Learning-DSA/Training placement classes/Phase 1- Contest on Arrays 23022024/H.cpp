#include <iostream>
#include <vector>

using namespace std;

int countLocalMaxima(vector<int>& arr) {
    int n = arr.size();
    int count = 0;

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
   cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int localMaxCount = countLocalMaxima(a);
    cout << localMaxCount << endl;

    return 0;
}
