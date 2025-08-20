#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
    int m,n,p;
    cin>>m>>n>>p;
    if((m+n)%2!=0 || (m+p)%2!=0 || (n+p)%2!=0){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    }
}