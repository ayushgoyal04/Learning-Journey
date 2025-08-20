
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
   long long t, n,q;
   cin>>t;
  
   while(t--){
       long long l,r;
       cin>>n;
        vector<long long> a(n),p(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        p[0]=a[0];
            for(int i=1;i<n;i++){
                p[i]=p[i-1]+a[i];
            }
        cin>>q;
        while(q--){
            cin>>l>>r;
            
            if(l==1){
                cout<<p[r-1]<<"\n";
            }
            else{
                cout<<p[r-1]-p[l-2]<<"\n";
            }
        }
       
     
   }
    return 0;
}
// hmm