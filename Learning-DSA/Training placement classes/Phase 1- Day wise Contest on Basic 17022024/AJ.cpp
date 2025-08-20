#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        n = n*(-1);
    }
    string s= to_string(n);
    int l = s.length();
int ad=0;
int mul = 1;
    for(int i=0;i<l;i++){
       // int xx = s[i];
        int temp = s[i] - '0';
        ad = ad + temp;
        mul = mul * temp;
    }
cout<<ad<<" "<<mul<<endl;
}