#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int>& arr, int l, int m, int r) {
    long long inversions = 0;
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            // If L[i] > R[j], it means elements from L[i] to L[n1-1] are inversions with R[j]
            inversions += n1 - i;
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }

    return inversions;
}

long long mergeSort(vector<int>& arr, int l, int r) {
    long long inversions = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inversions += mergeSort(arr, l, m);
        inversions += mergeSort(arr, m + 1, r);
        inversions += merge(arr, l, m, r);
    }
    return inversions;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long inversions = mergeSort(arr, 0, n - 1);
        cout << inversions << endl;
    }
    return 0;
}