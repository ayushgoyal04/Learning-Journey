// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         string s;
//         cin>>s;
        
//         int c=0;
//         // for(int i=n-1;i>=0;i--){
//         //     int temp = s[i]-'0';
//         //     if(temp<m){
//         //         c++;
//         //     }
//         //     else if(temp>=m){
//         //         for(int i=0;i<=n;i++){
//         //             c = n-1-c;
//         //             if(i==c+1) cout<<m;
//         //             if(i<n) cout<<s[i];
//         //         }
//         //         break;
//         //     }

//         // }
//         for(int i=0;i<n;i++){
//             int temp = s[i]-'0';
//             if(temp>m){
//                 c++;
//             }
//             else if(temp<=m){
//                 for(int k=0;k<n;k++){
//                     if(k==c) cout<<m;
//                     cout<<s[k];
//                 }
//                 cout<<endl;
//                 break;
//             }
//             else{
//                 for(int j=0;j<n;j++) cout<<s[j];
//                 cout<<m<<endl;
//             }

//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int len,n,index=-1;
        string str;
        cin>>len>>n>>str;
        for(int i=0;i<len;i++){
            if(n>(str[i]-48)){ 
            index =i;
            break;

            }
        }
        if(index==-1){
            cout<<str<<n<<endl;
        }
        else{
            str.insert(index,to_string(n));
            cout<<str<<endl;
        }
    }}