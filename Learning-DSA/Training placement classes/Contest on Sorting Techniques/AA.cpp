#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int q;
    cin>>q;
   
    while(q--){
        int x;
        cin>>x;
        if(mp.find(x) != mp.end()){
            cout<<mp[x]<<endl;
        }     
        else{
            cout<<0<<endl;
        }
    }
}