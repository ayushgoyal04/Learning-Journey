#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1";
    
    }
    else{ 
    int temp = n, first=0, second=1;
    int fibbo;
    
    for (int i =0; i<n-1; i++){
            fibbo= first+second;
            // cout<<fibbo<<" ";
            first = second;
            second = fibbo;
    }
    
    cout<<fibbo;
    
}
}