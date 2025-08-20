#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
        long long int n;
    vector<long long int> v;
    cin>>n;
    //long long int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    vector<int > ans;
    for(int i=0;i<n;i++){
        int a= v[i];
        for(int j=i;j<n;j++){
            if(a == v[j+1]){
                int jj=a;
                ans.push_back(jj);

            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.front()<<" "<<ans.back()<<endl;

    
    
    }
}