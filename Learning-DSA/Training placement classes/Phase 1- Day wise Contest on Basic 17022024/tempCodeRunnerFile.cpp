#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){ 
                int temp;
        int x;
        cin>>x;
        int even=0;int odd=0;
        for(int i=0;i<x;i++){

                cin>>temp;
                if(temp%2==0){
                    even++;
                }else{
                    odd++;
                }

        }
        if(even>odd){
            cout<<"READY FOR BATTLE"<<endl;
        }
        else cout<<"NOT READY"<<endl;
    }}