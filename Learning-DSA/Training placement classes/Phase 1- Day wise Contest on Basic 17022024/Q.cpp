#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int temp = n * x;
        int p = temp/4;
        if(temp %4 !=0 ){
            p++;
        }
        cout<<p<<endl;
    }
}