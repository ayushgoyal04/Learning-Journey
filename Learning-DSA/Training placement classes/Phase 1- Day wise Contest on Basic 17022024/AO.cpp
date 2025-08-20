#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s= to_string(n);
    //int l = s.length();

    int a = s[0]-'0';
    int b = s[1]-'0';
    int c = s[2]-'0';
    int d = s[3]-'0';

    int temp = d*1000+b*100+c*10+a;
    cout<<temp;



}