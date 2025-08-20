// question is wrong
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    if(x % 5==0){ 
    if(x>y){
        cout<<y<<endl;
    }
    else if(x<=y){
        cout<<y-x<<endl;
    }
    }
}
