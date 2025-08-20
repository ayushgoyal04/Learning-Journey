// Question- 
// n = 5
// q = 4
// i j x
// 0 4 1
// 0 3 2
// 1 4 5
// 2 3 1


// Approach 1 (organic)(tc- O(q))- using preffix and suffix arrays, does not work for i==j properly
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n,0);
//     vector<int> w(n,0);
//     int q;
//     cin>>q;
//     long long int ans=0;
//     while(q--){
//         int i,j,x;
//         cin>>i>>j>>x;
//         if(i!=j){ 
//         v[i] += x;
//         w[j] += x;
//         }
//         else{
//             v[i] += x;
//         }

//     }
//     for(int i=1;i<v.size();i++){
//             v[i] = v[i-1]+v[i];
//         }
//     for(int i=w.size()-2;i>=0;i--){
//             w[i] = w[i+1]+w[i];
//         }
//     for(int i=0;i<n;i++){
//             if(v[i]<w[i])
//             cout<<v[i]<<" ";
//             else if(v[i]==w[i] || v[i]>w[i]){
//                 cout<<w[i]<<" ";
//             }
//         }  
// }

// Approach 2 Tc- O(q)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    int q;
    cin>>q;
    long long int ans=0;
    while(q--){
        int i,j,x;
        cin>>i>>j>>x;
        v[i]+=x;
        if(j<n-1){
            v[j+1]-=x;
        }
    }
    for(int i=1; i<n; i++){
        v[i] = v[i] + v[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}