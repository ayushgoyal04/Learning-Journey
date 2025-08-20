#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        sort(arr.begin(),arr.end());
        int ans= 0;
        for(int i =1;i<n;i++){
                ans = ans + arr[i];
        }
        
        cout<<ans<<endl;
    
}
}
