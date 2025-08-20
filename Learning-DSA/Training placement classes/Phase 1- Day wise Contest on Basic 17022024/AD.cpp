#include<iostream>
using namespace std;
int main(){ 
int n;
cin>>n;
long long int temp = n, arm = 0, check=0;
    while(temp > 0){
       long long int num = temp % 10;
        // 153- num = 3
        arm = num*num*num;
        check = check + arm;
        temp = temp/10;
    }
    if(n==check){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No";
    }}