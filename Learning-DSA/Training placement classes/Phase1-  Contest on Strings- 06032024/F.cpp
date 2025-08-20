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
        if(s[i]=='U' ||s[i]=='O'||s[i]=='I' ||s[i]=='E'||s[i]=='A' ||s[i]=='u' ||s[i]=='o' ||s[i]=='i' ||s[i]=='e' ||s[i]=='a') v++;
    else{
        co++;
    }
    }
cout<<v<<" "<<co<<endl;
}