#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(x>=n){
            cout<<"0"<<endl;
        }
        else{
            int temp = n-x;
            
            int p = temp /4;
            if(temp%4!=0){
             p= p+1;   
            }
            cout<<p<<endl;
        }
    }
}