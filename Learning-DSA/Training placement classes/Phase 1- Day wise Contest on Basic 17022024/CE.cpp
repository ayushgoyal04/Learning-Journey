#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=10){
cout<<"Lower Double"<<endl;
        }
        else if(n>=26){
cout<<"Upper Single"<<endl;

        }
        else if(n<26&&n>=16){
cout<<"Upper Double"<<endl;

        }
        else {
cout<<"Lower Single"<<endl;

        }
        }
     }