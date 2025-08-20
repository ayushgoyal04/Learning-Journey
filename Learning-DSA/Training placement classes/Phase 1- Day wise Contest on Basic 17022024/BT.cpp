
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){ 
//     int n,m,o;
//     cin>>n>>m>>o;
//     double avg = (n+m)/2;
//     if(avg>o){
//         cout<<"Yes"<<endl;
//     }
//     else cout<<"No"<<endl;
// }return 0;}

#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        double A, B, C;
        cin >> A >> B >> C; // Input for each test case

        // Calculate the average of A and B
        double avg = (A + B) / 2;

        // Check if the average is strictly greater than C
        if (avg > C) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
