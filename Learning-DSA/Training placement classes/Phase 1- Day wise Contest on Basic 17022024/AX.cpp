
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int a[3000];
    int b[3000];
    for(int i=0;i<10000;i++){
        cin>>a[i]>>b[i];
        count++;
        if(a[i]== 0&&b[i]==0){
            break;
        }
    }   
    
    int j=1;
    for(int i=0;i<count-1;i++){
        if(a[i]<=b[i]){
            cout<<a[i]<<" "<<b[i]<<endl;
        }
        else{
        cout<<b[i]<<" "<<a[i]<<endl;
            
        }
    }
}