#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        string s = to_string(n);
        int t = s.length();
        int count=0;
        for(int i=0;i<t;i++){
            if(s[i]=='4'){
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    
}
