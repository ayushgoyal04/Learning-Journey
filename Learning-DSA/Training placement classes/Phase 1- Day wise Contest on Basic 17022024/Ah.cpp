#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int temp = a;
    string st= to_string(a);
    int n = st.length();
    temp = (temp*10) + 3; //8003
    int m =(pow(10,n+1) )* 3; //30000
    temp = temp+m;
    cout<<temp<<endl;

    }