#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n<0){
        n = n*(-1);
    }
    string s= to_string(n);
    long long int l = s.length();
long long int ad=0;
long long int mul = 1;
    //for(long long int i=0;i<l;i++){
       // long long int xx = s[i];
        long long int temp = s[0] - '0';
        long long int temp1 = s[3] - '0';

        cout<<temp+temp1<<endl;
        //ad = ad + temp;
       // mul = mul * temp;
    //}
//cout<<ad<<" "<<mul<<endl;
}