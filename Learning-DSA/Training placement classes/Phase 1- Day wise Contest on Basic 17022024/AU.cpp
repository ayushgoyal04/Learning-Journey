#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,t,u;
    cin>>s>>t>>u;
    vector<int> v;
    v.push_back(s);
    v.push_back(t);
    v.push_back(u);
    sort(v.begin(), v.end());

    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

}