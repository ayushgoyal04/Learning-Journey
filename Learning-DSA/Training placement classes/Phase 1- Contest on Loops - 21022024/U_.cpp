#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=0,h=0;
   // pair<string, string> p;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        if(a == b){
            t++;
            h++;
        }
        else if(a>b){
            t = t+3;
        }
        else{
            h = h+ 3;
        }
            
    }
    cout<<t<<" "<<h<<endl;

}