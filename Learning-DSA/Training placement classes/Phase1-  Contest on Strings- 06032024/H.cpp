#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    int v = 1, co=0;;
    int n = s.length();
    // for(int j=0;j<n;j++){ 
    for(int i=1; i<n; i++){
        if(s[i-1]==s[i]) v++;
        else{
            cout<<s[i-1]<<v;
            v=1;
        }        

    }
 //   if (s[n-2]!=s[n-1])
    cout<<s[n-1]<<v;
    //}

}