#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> w(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        w[i] = v[i];
    }

    sort(w.begin(), w.end());
    
    for(int i=1;i<n;i++){
        w[i] = w[i]+w[i-1];
        v[i] = v[i]+v[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        if(q==2){
            int i,j;
            cin>>i>>j;
            int ans=0;
            if (i>0) ans = w[j]-w[i-1];
            else ans = w[j];
            cout<<ans;
        }
        else{
            int i,j;
            cin>>i>>j;
            int ans=0;
            if (i>0) ans = v[j]-v[i-1];
            else ans = v[j];
            cout<<ans;
        }
    }
}
