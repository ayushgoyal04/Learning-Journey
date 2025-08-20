#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin>>n;
vector<long long int> v;
for(int i=0;i<n;i++){
    long long int temp;
    cin>>temp;
    v.push_back(temp);
}

sort(v.begin(),v.end());
for(auto i : v){
    cout<<i<<" ";
}
return 0;
}