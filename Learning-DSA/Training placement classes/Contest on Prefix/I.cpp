#include<bits/stdc++.h>
using namespace std;
#define ll = long long;
int main() {
    int n;
    cin>>n;
    string s = "";
    int ch=0,cp=0,cs=0;
    int lh=0,lp=0,ls=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=='P') {cp++; lp=i;}
        else if(s[i]=='H') {ch++; lh=i;}
        else if(s[i]=='S') {cs++; ls=i;}
    }
    
    int ans = 0;
    int ind = 0;
    if(cp>=ch && cp>=cs){
        ans = cp;
        ind = lp;
    }
    else if(ch>=cp && ch>=cs){
        ans = ch;
        ind = lh;
    }
    else if(cs>=cp && cs>=ch){
        ans = cs;
        ind = ls;
    }

    cp = 0;
    ch = 0;
    cs = 0;
    for(int i=ind;i<n;i++){
        if(s[i]=='P') {cp++;}
        else if(s[i]=='H') {ch++;}
        else if(s[i]=='S') {cs++;}
    }

    if(cp>=ch && cp>=cs){
        ans += cp;
        //ind = lp;
    }
    else if(ch>=cp && ch>=cs){
        ans += ch;
        //ind = lh;
    }
    else if(cs>=cp && cs>=ch){
        ans += cs;
       //ind = ls;
    }   
cout<<ans<<endl;
}