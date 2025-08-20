#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int l,r,m;
        cin>>l>>r>>m;
        int w= m/l;
        if(m%l!=0){
            w++;
        }
        
        int c= m/r;
        
        int ans = c+w;
        cout<<ans<<endl;
        
    
    
    }}