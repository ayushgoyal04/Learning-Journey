#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

bool cmp(int a, int b){
    // if(mp[a]==mp[b]) return a>b;
    // return mp[a]<mp[b];
    return mp[a]!=mp[b]?mp[a]<mp[b]:a>b;

}

int main(){
    int n;cin>>n;
    vector<int>v(n);
    // 1 2 3 3 2 2 2 1 5
    for(int i=0;i<n;i++){
        cin>>v[i];
        int j=v[i];
        mp[j]++;
    }
    
    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}