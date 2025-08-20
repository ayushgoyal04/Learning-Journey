#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s= to_string(n);
    int l = s.length();

    int a = s[1]-'0';
    int b = s[2]-'0';
    int temp = a*10+b;
    cout<<temp;

}