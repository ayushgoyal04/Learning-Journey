// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);

//     int v = 0, co=0;;
//     int n = s.length(); 
//     int a,b;
//     for(a=0; a<n; a++){
//         //chat temp = s[a];
//         for(int b=n/2;b<n;b++){
//             if(s[a]==s[b]&&a!=b){
//                 goto jump;
//             }

//         }
//     }
    
// jump:    
//     for(int i=a,j=b; j<n; i++){
//         if(s[i]==s[j]){
//             v++;
//             j++;
//         }
//         else j++;
//     }

//         for(int i=a,j=b; j<n; j++){
//         if(s[i]==s[j]){
//             co++;
//             i++;
//         }
//         else i++;
//     }
//     if(v>co) cout<<v;
//     else cout<<co;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n = s.length();
//     if(n%2!=0){ 
//     int first=0,second=n/2,count=0;

//     for(int i=0;i<n;i++){
//         if(s[i]!=s[second]&& i<n/2 &&second<n){
//             second++;
//         }
//         else{
//             count++;
//         }
//     }
//     cout<<count;
//     }
//     else{
//         int first=0,second=n/2,count=0;

//     for(int i=0;i<n;i++){
//         if(s[i]!=s[second]&& i<=n/2 &&second<n){
//             second++;
//         }
//         else{
//             count++;
//         }
//     }
//     cout<<count;
//     }
//}

#include<bits/stdc++.h>
#define ll long long
using namespace std;


// Driver Code
int main(){
    string s;
    cin>>s;

    int ans = 0;
    int n = s.size();

    // Iterating over the length of prefix
    for (int l = 1; l<=n-1; l++){
        string prefix = "";
        string suffix = "";

        // Storing prefix of the given length
        for(int i=0; i<l; i++){
            prefix += s[i];
        }

        // Storing suffix of the given length
        for(int i=n-l; i<n; i++){
            suffix += s[i];
        }

        // If prefix and suffix are same, update answer
        if (prefix == suffix){
            ans = l;
        }
    }

    // Printing the longest proper prefix that is also a suffix.
    cout<<ans<<endl;
}