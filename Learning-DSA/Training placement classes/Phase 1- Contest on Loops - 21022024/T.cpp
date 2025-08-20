#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int count = 0;
    if(a == b){
        cout<<"Yes"<<endl;
    }
    int n = a.length();
    int m = b.length();
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            count ++;
        }
           
}
if(count == n || a == "1" || n<=1){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}
}