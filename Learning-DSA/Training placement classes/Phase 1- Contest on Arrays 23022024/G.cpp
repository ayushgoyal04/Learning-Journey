// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[n];
//     }
//     int count = 0;
//     for(int i=1;i<n-1;i++){
//         if((arr[i-1]<arr[i]) && (arr[i]>arr[i+1])){
//             count++;
//         }
//     }
//     cout<<count<<endl;
// }

#include <iostream>
#include <vector>

using namespace std;

int countLocalMaxima(vector<int>& arr) {
    int n = arr.size();
    int count = 0;

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
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
