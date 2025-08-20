#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; 
    while(T--){
        int x,y,z;
        cin>>x>>y>>z;
        int p=z*2;
        x = x+p;
        if(x>=y){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
        
    }
}
