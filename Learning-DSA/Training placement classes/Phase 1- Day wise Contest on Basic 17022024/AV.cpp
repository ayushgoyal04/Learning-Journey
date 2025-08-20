#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,h,x,y,r;
    cin>>w>>h>>x>>y>>r;
    if((y+r>h) || (x+r > w) || (y-r<0) || (x-r<0)){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
    
}