// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n,0);
//     // for(int i=0;i<n;i++){
//     //     v[i]=0;
//     // }
//     int q;
//     cin>>q;
//     long long int ans=0;
//     while(q--){
//         int m,x;
//         cin>>m>>x;
        
//         // for(int i=m;i<n;i++)
//         // v[i] += x;

//         int number = n-m;
//         ans = ans + x*number;

//     }
    
//     // for(int i=0;i<n;i++){
//     //     ans += v[i];
//     // }
//     cout<<ans<<endl;
// }


// using prefix sum
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
        int m,x;
        cin>>m>>x;
        v[m] = x;
        
        }
        for(int i=1;i<v.size();i++){
            v[i] = v[i-1]+v[i];
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}