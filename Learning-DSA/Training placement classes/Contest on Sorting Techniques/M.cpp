#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int c=0;
        long long int i=1;
        while(n>0 && n>=i){
            n = n-i;
            i++;c++;
        }
        cout<<c<<endl;
    }
}