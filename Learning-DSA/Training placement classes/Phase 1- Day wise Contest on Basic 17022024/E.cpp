#include<bits/stdc++.h>
using namespace std;
int main(){
    //cout<<"faf";
    vector<int> v(100);
    for(int i=1;i<100;i++){
        cin>>v[i];

    }
    sort(v.begin(), v.end());
    for(int i=1;i<v.size();i++){
        if(v[i]!=i){
            cout<<i<<endl;
            break;
        }
        

    }
    
}