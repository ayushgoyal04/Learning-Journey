#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // char c;
    // cin>>c;
    //int count=0;
    int flag = 0;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='0' ||s[i]=='1'||s[i]=='2' ||s[i]=='3'||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ||s[i]=='9') flag=1;
    else{
        cout<<"No"<<endl;
        return 0;
        break;
    }
    }
cout<<"Yes"<<endl;
}