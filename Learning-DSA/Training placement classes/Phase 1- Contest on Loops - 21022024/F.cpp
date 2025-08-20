#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x,y,z;
        cin>>x>>y>>z;
        int co = a+b+c;
        int ans = x+y+z;
        if(co==ans){
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }

    }}