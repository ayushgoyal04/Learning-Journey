#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string temp = s;
        reverse(temp.begin(), temp.end());
        for(int i=0;i<s.length();i++){
            cout<<s[i];
        }
        for(int i=0;i<s.length();i++){
            cout<<temp[i];
        }
        cout<<endl;
    }
}