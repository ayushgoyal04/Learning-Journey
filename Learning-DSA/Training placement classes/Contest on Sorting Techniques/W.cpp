// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     int t;
// // //     cin>>t;
    
// // //     while(t--){ 
// // //         int m;
// // //         cin>>m;
// // //         vector<pair<int,int>> v;
// // //         for(int i=0;i<m;i++){
// // //             int a,b;
// // //             cin>>a>>b;
// // //             v.push_back(make_pair(a,b));
// // //         }
// // //         int q;
// // //         cin>>q;
// // //         while(q--){
// // //             int id;cin>>id;
// // //             int count=0;
// // //             for(int i=0;i<m;i++){
// // //                 if(v[i].first <= id && id <= v[i].second){
// // //                     count++;
// // //                 }
// // //             }
// // //             cout<<count<<"\n";
// // //         }

// // //     }
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;
    
// //     while (t--) { 
// //         int m;
// //         cin >> m;
// //         vector<pair<int, int>> v(m);
// //         for (int i = 0; i < m; i++) {
// //             int a, b;
// //             cin >> a >> b;
// //             v[i] = make_pair(a, b);
// //         }
        
// //         // Sorting intervals based on their starting points
// //         sort(v.begin(), v.end());
        
// //         int q;
// //         cin >> q;
// //         while (q--) {
// //             int id;
// //             cin >> id;
// //             int count = 0;
            
// //             for (int i = 0; i < m; i++) {
// //                 if (v[i].first <= id && id <= v[i].second) {
// //                     count++;
// //                 } else if (v[i].first > id) {
// //                     break; 
// //                 }
// //             }
// //             cout << count << "\n";
// //         }
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int countManufacturers(vector<pair<int, int>>& ranges, int id) {
//     int count = 0;
//     for (auto& range : ranges) {
//         if (id >= range.first && id <= range.second) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int M;
//         cin >> M;

//         vector<pair<int, int>> ranges(M);
//         for (int i = 0; i < M; i++) {
//             int start, end;
//             cin >> start >> end;
//             ranges[i] = make_pair(start, end);
//         }

//         int Q;
//         cin >> Q;
//         while (Q--) {
//             int productID;
//             cin >> productID;
//             int manufacturers = countManufacturers(ranges, productID);
//             cout << manufacturers << "\n";
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        vector<int> v(99999999, 0);
        for(int i=0; i<m; i++){
            int a, b;
            cin>>a>>b;
            for(int j=a; j<=b; j++){
                v[j]++;
            }
        }
        int q;
        cin>>q;
        for(int i=0; i<q; i++){
            int query;
            cin>>query;
            cout<<v[query]<<endl;
        }
    }
    return 0;
}