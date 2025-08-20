#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){ 
        int x,y,z,w;
        cin>>x>>y>>z>>w;
        if(x+y>=w||x+z>=w||z+y>=w){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;


    }}