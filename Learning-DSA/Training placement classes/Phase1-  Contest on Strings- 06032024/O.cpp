#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    int t;
    cin>>t;
    while(t--){
        cin>>word;
        string s = "codeforces";
        int n = s.length();
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]==word[i]){

            }
            else{
                c++;
            }
        }
        cout<<c<<endl;
    }
}