#include<bits/stdc++.h>
using namespace std;
#define ll = long long;
int main() {
    int n;
    cin >>n ;
    vector<long long int> v;
    vector<long long int> prr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
        
    }
    for(int i=0;i<n;i++){
        if(i == 0) {
                prr.push_back(v[i]);
            } else {
                prr.push_back(prr[i-1] + v[i]);
            }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(prr[i]%n==0) count++;
    }
    cout<<count<<endl;

}
