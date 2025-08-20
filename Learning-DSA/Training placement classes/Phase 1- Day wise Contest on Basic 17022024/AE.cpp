#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st = to_string(n);
    int len = st.length();
    int no = stoi(st);
    int ans = 0;
    while(no>0){
        int rem = no%10;
        ans = ans + pow(rem, len);
        no = no/10;
    }
//cout<<ans<<endl;

if(ans == n){
    cout<<"Yes"<<endl;

}
else cout<<"No"<<endl;

}