// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<long long int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     int q;
//     cin>>q;
//     int flag = 0;
//     while(q--){
//         int x;cin>>x;
//         for(int i=n-1;i>=0;i--){
//             if(v[i]<=x){
//                 cout<<v[i]<<endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag==0){cout<<"-2147483648"<<endl; }
//         flag = 0;        
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        // Using binary search to find the largest element <= x
        int low = 0, high = n - 1, ans = -2147483648;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] <= x) {
                ans = v[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
