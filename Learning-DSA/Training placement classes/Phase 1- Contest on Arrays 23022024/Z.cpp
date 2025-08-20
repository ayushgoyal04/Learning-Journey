#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int count = 0;
        for(int i=n;i<=m;i++){
            string s = to_string(i);
            int l = s.length();
            if((s[l-1]=='2') ||(s[l-1]=='3') ||(s[l-1]=='9') ){
                count++;
            }
        }
        cout<<count<<endl;
}}