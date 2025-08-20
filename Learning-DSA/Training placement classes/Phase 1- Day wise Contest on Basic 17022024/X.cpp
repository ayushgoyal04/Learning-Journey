#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int fact = 1;
    while(t>1){
        fact = fact * t;
        t--;
    }
    cout<<fact<<endl;
}
