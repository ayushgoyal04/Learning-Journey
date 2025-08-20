#include<bits/stdc++.h>
using namespace std;
int main(){

    
        long long int a;
        cin>>a;
        int count=0;
        int flag=0;
    //     for(int i=1;i<=a;i++){
    //         if(i%3==0){
    //             count++;
    //         }
    //         if(i%5==0){
    //             count++;
    //         }
    //         if(i%3==0 && i%5==0){
    //             flag++;
    //         }
    //     }
    // cout<<count-flag<<endl;
count = a/3;//20 -- 3 6 9 12 15 18
flag = a/5;// 20  - 5, 10, 15, 20
int fif = a/15;// 20 == 1
int ans = count + flag - fif;
cout<<ans<<endl;
}