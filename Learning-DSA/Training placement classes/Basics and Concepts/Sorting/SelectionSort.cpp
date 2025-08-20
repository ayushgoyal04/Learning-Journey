#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[mini]){
                mini=j;
            }
        }
        swap(v[i],v[mini]);
    }

    for(int i=0;i<n;i++) cout<<v[i]<<" ";


    return 0;
}