// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,q;
//     cin>>n>>q;
//     while(q--){
//         vector<int> v;
//         for(int i=0;i<n;i++){
//             int temp;
//             cin>>temp;
//             v.push_back(temp);
//         }
//         vector<int> prr;

//         for(int i = 0; i < n; i++) {
//             if(i == 0) {
//                 prr.push_back(v[i]);
//             } else {
//                 prr.push_back(prr[i-1] + v[i]);
//             }
//         }
//         int l,r;
//         cin>>l>>r;
//         long long int sum = 0;
        
//     }

// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<long long> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }

    for (int i = 0; i < q; i++) {
        int L, R;
        cin >> L >> R;
        cout << prefixSum[R] - prefixSum[L - 1] << endl;
    }

    return 0;
}