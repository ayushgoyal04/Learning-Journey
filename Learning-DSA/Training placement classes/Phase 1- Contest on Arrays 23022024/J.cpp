// #include<bits/stdtr1c++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// int num=1;
//     for(int i=0;i<=n;i++){
//         int count =0;
        
//         for(int j=0;j<n;j++){
//             if(arr[j]==num){
//                 count++;
//             }
//             else{}
//         }
//         cout<<num<<": "<<count<<endl;

//     }
// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> freq(n + 1, 0); // Initialize frequency array with size n+1

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; // Increment frequency of each number
    }

    for (int i = 1; i <= n; i++) {
        cout << i << ": " << freq[i] << endl; // Print frequency of each number
    }

    return 0;
}
