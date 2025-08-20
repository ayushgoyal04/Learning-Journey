// bubble sort

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){ 
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
 int c=0;  
    for(int i=0;i<n-1;i++){
        int swaps=0;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                c++;
                swaps++;
            }
        }
        if(swaps==0) break;
    }
    cout<<c<<endl;
    }
    
}