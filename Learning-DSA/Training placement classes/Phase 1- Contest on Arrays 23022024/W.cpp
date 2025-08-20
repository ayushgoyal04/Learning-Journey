#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){ 
    long long int n;
    cin>>n;
    //long long int arr[n];
    long long int pro=1;
    //vector<long long int> s;
    for(long long int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        pro *= temp;
        //s.push_back(temp);
    }
    cout<<pro<<endl;
    
    }
}