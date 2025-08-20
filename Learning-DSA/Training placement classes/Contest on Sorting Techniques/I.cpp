#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& arr, int l, int m, int r) {
    vector<int> temp(r - l + 1);
    long long count = 0;

    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            count += m - i + 1;  // Count of smaller elements on the right side
            temp[k++] = arr[j++];
        }
    }

    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];

    for (int p = l, q = 0; p <= r; p++, q++) {
        arr[p] = temp[q];
    }

    return count;
}

long long mergeSort(vector<int>& arr, int l, int r) {
    long long count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        count += mergeSort(arr, l, m);
        count += mergeSort(arr, m + 1, r);
        count += merge(arr, l, m, r);
    }
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long ans = mergeSort(arr, 0, n - 1);
        cout << ans << endl;
    }

    return 0;
}