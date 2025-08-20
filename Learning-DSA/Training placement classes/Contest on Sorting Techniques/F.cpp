#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int li, int mid, int ri) {
    int n = mid - li + 1;
    int m = ri - mid;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        a[i] = arr[li + i];
    }
    for(int i = 0; i < m; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = li;
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            arr[k] = a[i];
            i++;
        } else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n) {
        arr[k++] = a[i++];
    }
    while(j < m) {
        arr[k++] = b[j++];
    }
}

void mergeSort(vector<int>& arr, int li, int ri) {
    if(li >= ri) return;
    int mid = li + (ri - li) / 2;
    mergeSort(arr, li, mid);
    mergeSort(arr, mid + 1, ri);
    merge(arr, li, mid, ri);
}

int main() {
    vector<int> arr;
    int x;
    while(cin >> x) {
        arr.push_back(x);
    }
    int n = arr.size();
    
    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
