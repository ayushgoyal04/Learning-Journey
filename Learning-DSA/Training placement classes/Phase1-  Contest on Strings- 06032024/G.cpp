#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // char c;
    // cin>>c;
    //int count=0;
    int v = 0, co=0;;

    int n = s.length();
    for(int i=0; i<n; i++){
        if(islower(s[i])) s[i]=toupper(s[i]);
        else s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
//cout<<v<<" "<<co<<endl;
}