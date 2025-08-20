/*given a pair of integer sort them based on first value*/
/*given a pair of integer sort them based on second value*/

#include<bits/stdc++.h>
using namespace std;
// first value-
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}

// Second value-
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int main(){
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    return 0;
}