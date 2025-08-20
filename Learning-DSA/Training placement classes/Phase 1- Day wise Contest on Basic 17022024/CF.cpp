// #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         int cm = n - (n/10);
//         if(cm>m){
//             cout<<"DINING"<<endl;

//         }
//         else if(cm<m){
//             cout<<"ONLINE"<<endl;

//         }
//         else{
//             cout<<"EITHER"<<endl;
//         }
//         }
//      }
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, M;
        cin >> N >> M; // Input for each test case

        // Calculate the discounted cost for online order
        double discounted_cost = N * 0.9;

        // Check which option is cheaper
        if (discounted_cost < M) {
            cout << "ONLINE" << endl;
        } else if (discounted_cost > M) {
            cout << "DINING" << endl;
        } else {
            cout << "EITHER" << endl;
        }
    }

    return 0;
}
