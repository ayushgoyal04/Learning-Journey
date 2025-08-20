// pre computation

#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;
// int main(){
// cout<<"Enter t "<<endl;
//     long long int t;
//     cin>>t;
    
//     while(t--){
//     long long int n;
//     cout<< "Enter number "<<endl;;
//     cin>>n;
//     cout<<endl;
//     long long int fact=1;
    
//     for(long long int i = 1; i <= n ;i++){
//         fact = fact * i;
//     }
//     cout<<fact<<endl;
//     }
// }


//we compute the value of factorials before the while loop, this brings the complexity down from O(n^2) to O(n).
int main(){
    cout<<"Hello";
  //  long long int arr[100000000];
    array<long long int,1000> arr;
    arr[0]= 1;
    arr[1]= 1;
    for(long long int i=2; i<=500;i++){
        arr[i]= i* arr[i-1];
        //cout<<arr[i]<<" ";
        
    }
    cout<<"Enter t "<<endl;
     long long int t;
     cin>>t;
    
     while(t--){
        long long int n;
        cout<<endl;
        cout<<" Enter n "<<endl;
        cin>>n;
        cout<<arr[n];
     }
}