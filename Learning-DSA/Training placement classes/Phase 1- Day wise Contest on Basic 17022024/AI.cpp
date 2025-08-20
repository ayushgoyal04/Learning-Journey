#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        n = n*(-1);
    }
    string s= to_string(n);
    int l = s.length();
    for(int i=0;i<l;i++){
        cout<<s[i]<<endl;
    }
}