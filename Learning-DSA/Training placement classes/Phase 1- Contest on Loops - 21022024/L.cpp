// #include<iostream>
// using namespace std;
// int main(){

//     int a;
//     cin>>a;
    
//     for(int i=0;i<a;i++)
//     {int count = a;
//         if(i==0 || i==a-1){ 
//         for(int j=0;j<a;j++){
//             cout<<count;
//             count--;
//             if(a==1){
//                 cout<<"*";
//                 j++;
//             }
//         }
//         cout<<endl;
//         }
//         else{
//             for(int j=0;j<a;j++){
//             if(j==0||j==a-1){
//                 cout<<count;
//             count--;
//             if(a==1){
//                 cout<<"*";
//                 j++;
//             }
//             }
//             else{
//                 cout<<count;
//             count--;
//             if(a==1){
//                 cout<<"*";
//                 j++;
//             }
//             }
//         }
//         cout<<endl;
//         }
    

//     }

    
// } // namespace std;


#include<bits/stdc++.h>
using namespace std;
int main(){

    long long  t;
    cin>>t;
        int a=1;
    for(int i=1;i<=t;i++){
        for(int j=t;j>=1;j--){
          if(j==a){
            cout<<"*";
          }
          else{

           cout<<j;
          }
        }
        a++;
      
        cout<<endl;
    }
}