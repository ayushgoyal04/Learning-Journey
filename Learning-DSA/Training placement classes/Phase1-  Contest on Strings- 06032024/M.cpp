#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    set<char> se;
    for(int i=0;i<t;i++){
        s[i]=tolower(s[i]);
        se.insert(s[i]);

    }
    if(se.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
