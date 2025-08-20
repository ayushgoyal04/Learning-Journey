
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// int solve(){
//     string s;
//     cin>>s;
//     if (s.size() % 2) {
//         s.erase(s.begin() + s.size() / 2);
//     }
//     if (s != std::string(s.size(), s[0])) {
//         cout << "YES\n";
//     } else {
//         cout << "NO\n";
//     }
//     return 0;
// }
// int main()
// {
//     int testCase=1;
//     cin>>testCase;
//     while(testCase--){
//         solve();
//     }
//     return 0;
// }








// int main(){
//     string s; //aabbaa
//     cin>>s;
//     map<char,int> mp;
//     for(auto i:s){
//         mp[i]++;
//     }

//     int c = mp.size();
//     int flag = 0;
//     if(c>2){
//         cout<<"YES"<<endl;
//         return 0;
//     } 
//     else if(c==2){
//         for(auto i:mp){
//             if(i.second>=2) flag = 1;
//             else {
//                 cout<<"NO"<<endl;
//                 return 0;
//             }
//         }
//     }
//     if(flag ==1){
//         cout<<"YES"<<endl;
//         return 0;
//     }


// }




int solve(){
    string s;
    cin>>s;
    
    map<char,int> mp;
 
    for(auto x:s){
     mp[x]++;
    }
    ll c = mp.size();
    ll flag= 0;
if(c<3){
    
    for(auto x :mp){
      if(x.second<2) flag = 1;
    }
}
 
    if(c>=2 && flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
 
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}

































