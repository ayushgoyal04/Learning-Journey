#include<bits/stdc++.h>
using namespace std;
int  main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    //cout<<sum<<endl;
    long long int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    
    
    }