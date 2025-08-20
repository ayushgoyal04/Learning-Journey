#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> v;
        int count = 1;
        for(int i=0;i<n;i++){
            v.push_back(count);
            count++;
        }
        int abc = n-k;
        sort(v.begin()+0,v.begin()+abc, greater<int>());
            
        for(auto i:v){
            cout<<i<<" ";
        }
    }
}