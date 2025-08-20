#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cost1 = a - c;
        int cost2 = b - d;
        if(cost1<cost2){
            cout<<"first"<<endl;
        }
        else if(cost1>cost2){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"Any"<<endl;
            
        }
    }
}