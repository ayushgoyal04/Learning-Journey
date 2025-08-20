#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int inc = n*50;
        int p = inc - 2*(inc/5) - inc*(30/100);
        cout<<p/2<<endl;

    }
}