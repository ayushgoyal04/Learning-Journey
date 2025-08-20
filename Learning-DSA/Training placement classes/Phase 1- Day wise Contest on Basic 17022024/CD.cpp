#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        if(p>(q+r+s)||q>(p+r+s)||r>(q+p+s)||s>(q+r+p)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;


        }
     }