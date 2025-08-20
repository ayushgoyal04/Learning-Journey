#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
    int l,r;
    cin>>l>>r;
    int count=0;
    for(int i = l;i<=r;i++){
        string s = to_string(i);
        int n = s.length();
        if(s[n-1]=='2'||s[n-1]=='3'||s[n-1]=='9')
        {
            count++;
        }
    }
    cout<<count<<endl;
    
    
    
    }
}
