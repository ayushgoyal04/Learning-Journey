#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int c = n*x;
        if(10000<=c && c<=99999){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
     }