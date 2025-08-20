#include<bits/stdc++.h>
using namespace std;
int main(){
    // long long int n;
    // cin>>n;
    // switch (1)
    // {
    // case 1:
    //     if(n%2==0){
    //         cout<<"Yes"<<endl;
    //     }
    //     else cout<<"No"<<endl;
        
    // case 3:
    //     if(n%4==0){
    //         cout<<"Yes"<<endl;
    //     }else cout<<"No"<<endl;
        
    // case 2:
    //     if(n%8==0){
    //         cout<<"Yes"<<endl;
    //     }else cout<<"No"<<endl;
        
    
    // default:
    //     break;
    // }

    long long int n;
    cin>>n;
    if(n<0){
        n = n*(-1);
    }
    string s= to_string(n);
    int l = s.length();

    // check for 2
    if((s[l-1]-'0') % 2 == 0){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;

    // check for 4
    int che = (s[l-2]-'0')*10+s[l-1]-'0';
    if(che % 4==0){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
    
    // check for 8
    int check = (s[l-3]-'0')*100 + (s[l-2]-'0')* 10 +s[l-1]-'0';
    if(che % 8==0){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
    return 0;
}