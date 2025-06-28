#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int> v,int key){
    int n = v.size();
    int s=0;
    int e=n-1;

    while(s<=e){
    int mid =s+(e-s)/2;

    if(key==v[mid]){
        return mid;
    }
    else if(key>v[mid]){
        s = mid+1;
    }
    else{
        e= mid-1;
    }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int key;
    cin>>key;

    cout<<binSearch(v,key);
}

