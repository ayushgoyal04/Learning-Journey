#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[8]= {1,2,3,4,5,6,7,8};
    int q;
    cin>>q;
    int prr[8]={0};
    int count=0;
    for(int i=0;i<8;i++){
        if(arr[i]%2==0){
           count+=1;
        }
        prr[i]= count;
    }
    while(q--){
        int i,j;
        cin>>i>>j;

        if(i==0) cout<<prr[j]<<endl;
        else cout<<prr[j] - prr[i-1]<<endl;
    }
    
}