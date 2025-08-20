// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int temp;
//         cin>>temp;
//         v.push_back(temp);
//     }
    
//     //int arr[n] = {0};
//     for(int i=0; i<n; i++){
//         int flag = 0;
//         for(int j=0;j<n-1;j++){
//             if(v[i]==v[j+1]){
//                 flag = 1;
//                 break;
//             }
//         }
// if(flag == 0){
// cout<<v[i]<<" ";
// }
//     }

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && v[i] == v[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << v[i] << " ";
        }
    }

    return 0;
}
