
//attempt 1
// #include <bits/stdc++.h>

// using namespace std;

// long long int main() {
//     long long int n;
//     cin >> n;
//     vector<long long int> v;
//     for (long long int i = 0; i < n; i++) {
//         long long int temp;
//         cin >> temp;
//         v.push_back(temp); // Add element to the vector

//     }
    
//     for(long long int i=0;i<n;i++){
//         long long int flag = 0;

//         long long int temp = v[i];
//         for(long long int j=i+1;j<n;j++){
//             if(v[j]== temp){
//                 flag = 1;
//             }

//         }
//         if(flag != 1){
//             cout<<temp<<" ";
//         }
//     }    
// }

//attempt 2
// #include<bits/stdc++.h>
// using namespace std;
// int  main(){

//         int n;
//         cin>>n;
//         long long int v[n];
//         set<long long int> s;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             s.insert(v[i]);
//         }
// int k = 0;
//         long long int ans[n];
//         for(long long int i:s){
//             int flag = 0;
//             for(int j=0;j<n;j++){
//                 if(i == v[j]){
//                     flag ++;
//                 }

//             }
//             if(flag >= 2){
//                 flag = 0;
//             }
//             else{
//                 ans[k] = i;
//                 k++;
//             }

//         }
//         for(int i=0;i<k;i++){
//             cout<<ans[k]<<" ";
//         }
// }

//correct-
#include <iostream>

using namespace std;

// Function to check if an element is unique in the array
bool isUnique(int arr[], int size, int index) {
    for (int i = 0; i < size; ++i) {
        if (i != index && arr[i] == arr[index]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Print unique elements
    for (int i = 0; i < N; ++i) {
        if (isUnique(arr, N, i)) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
