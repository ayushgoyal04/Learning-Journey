#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a;
cin>>a;
if(a>=0){ 
    string str =  to_string(a);
    reverse(str.begin(), str.end());
//    cout<<str<<endl;
long long ans = stoi(str);
cout<<ans<<endl;
}
else{
    a = a*(-1);
    string str =  to_string(a);
    reverse(str.begin(), str.end());
//    cout<<str<<endl;
long long ans = stoi(str);
ans = ans * (-1);
cout<<ans<<endl;
}
}