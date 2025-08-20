#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int arr[10000];
    for(int i=0;i<10000;i++){
        cin>>arr[i];
        count++;
        if(arr[i]== 0){
            break;
        }
    }   
    
    int j=1;
    for(int i=0;i<count;i++){
        cout<<"Case "<<j<<": "<<arr[i]<<endl;
        j++;

    }
}