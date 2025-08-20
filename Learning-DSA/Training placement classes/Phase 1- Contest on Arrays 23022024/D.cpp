#include<bits/stdc++.h>
using namespace std;
int  main(){

    long long int n;
    cin>>n;
    vector<long long int> v;
    for(long long int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        v.push_back(temp);

    }
    vector<long long int> ans(v);
    sort(v.begin(), v.end(), greater<int> ());
    int an = v.front();
    for(int i=0;i<n;i++){
        if(an==ans[i]){
            cout<<i<<endl;
        }
    }


}