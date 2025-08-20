#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag = 0;
        int count=0;
        int arr[10000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                count++;
            }
            if(arr[i]==0){
                flag = 1;
            }

        }
        if(count%2==0 || flag == 1){
            cout<<"0"<<endl;
        }
        else cout<<"1"<<endl;
    }

}