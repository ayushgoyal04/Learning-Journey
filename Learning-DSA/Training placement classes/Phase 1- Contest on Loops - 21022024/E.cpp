#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        string s ;
        cin>>s;
     //   int len = s.length();
int flag = 0;
        for(int i=0;i<m;i++){
            if(s[i]=='0'||s[i]=='5'){
                flag = 1;
            }
        }
        if(flag == 1){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}