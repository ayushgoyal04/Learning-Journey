#include<iostream>
#include<algorithm>
#include<vector>
#include<bits./stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    v.push_back(13);

    cout<<"Finding 6 "<<binary_search(v.begin(), v.end(), 6)<<endl;

    cout<<"Finding 7 "<<binary_search(v.begin(), v.end(), 7)<<endl;// returns true or false

    cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=1;
    int b=5;
    cout<<"Max "<<max(a,b)<<endl;
    cout<<"Min "<<min(a,b)<<endl;

    swap(a,b);

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());

    rotate(v.begin(),v.begin()+1, v.end());
    cout<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    sort(v.begin(), v.end(),greater<int>());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}
