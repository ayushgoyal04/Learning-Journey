#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                count++;
            }
            if(a[i]==0){
                count = 0;
                goto jump;
            }
        }
        jump: 
if(count%2==0){
    cout<<"0"<<endl;
}
else cout<<"1"<<endl;
    }
}

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n); // Using vector instead of a variable-length array
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] < 0) {
//                 count++;
//             }
//             if (a[i] == 0) {
//                 count = 0;
//                 goto jump;
//             }
//         }
//         jump:
//         if (count % 2 == 0) {
//             cout << "0" << endl;
//         } else {
//             cout << "1" << endl;
//         }
//     }
//     return 0;
// }
