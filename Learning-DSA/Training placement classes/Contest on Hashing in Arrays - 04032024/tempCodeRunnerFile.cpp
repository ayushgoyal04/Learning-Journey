#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1;
        string s2;
        getline(cin, s1);
        getline(cin, s2);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1==s2){
            cout<<"True"<<endl;
        }        
        else{
            cout<<"False"<<endl;
        }

    }
}
