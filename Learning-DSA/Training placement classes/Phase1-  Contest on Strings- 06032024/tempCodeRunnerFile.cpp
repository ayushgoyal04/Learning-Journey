#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        int c=0;
        for(int i=n-1;i>=0;i--){
            int temp = s[i]-'0';
            if(temp<m){
                c++;
            }
            else if(temp>=m){
                for(int i=0;i<=n;i++){
                    c = n-1-c;
                    if(i==c+1) cout<<m;
                    if(i<n) cout<<s[i];
                }
                break;
            }

        }
    }
}
