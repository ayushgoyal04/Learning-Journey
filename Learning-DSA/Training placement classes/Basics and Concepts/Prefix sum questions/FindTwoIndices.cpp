// // given an array of size n find two indices i and j where i!=j and |arr[i]-arr[j]| is max

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
    
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
    
//     int max = INT_MIN;
//     int min = INT_MAX;

//     for(int i=0;i<n;i++){
//         if(v[i]>=max){
//             max = v[i];

//         }
        
//         if(v[i]<=min){
//             min = v[i];
//         }
//     }

//     int ans = max-min;
//     cout<<ans<<endl;

// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int max_val = v[0];
    int min_val = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > max_val) {
            max_val = v[i];
        }
        if(v[i] < min_val) {
            min_val = v[i];
        }
    }

    int max_diff = max_val - min_val;
    cout << "Max difference: " << max_diff << endl;

    return 0;
}
