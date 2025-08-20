/*1. given n numbers sort numbers based on digit sum ascending order.*/
#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    int s1=0,s2=0;
    int c=a,d=b;
    while(a>0){
        s1 = s1 + a%10;
        a = a/10;
    }
    while(b>0){
        s2 = s2 + b%10;
        b = b/10;
    }
    if(s1==s2){
        return c>d;
    }
    else{
        return s1<s2;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";

}