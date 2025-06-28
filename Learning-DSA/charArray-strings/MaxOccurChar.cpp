#include<bits/stdc++.h>
using namespace std;

char getMax(string s){
    // using map
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++)
    s[i] = tolower(s[i]);
    
    for(auto i: s){
        mp[i]++;
    }
int maxi = 0;
char ans;
    for(auto i:mp){
        if(i.second>maxi){
            maxi = i.second;
            // ans = i.first;
        }
    }
     for(int i=0;i<s.length();i++){
        if(mp[s[i]]==maxi){
            ans=s[i];
            break;
        }
     }
    
return ans;
}

int main(){
    string s;
    cin>>s;
    char max = getMax(s);
    cout<<max<<endl;    
}