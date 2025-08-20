#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>m){
            cout<<n-m<<endl;
        }
        else if(m>n){
            cout<<m-n<<endl;

        }
        else{
            cout<<"0"<<endl;
        }
        
    }

}