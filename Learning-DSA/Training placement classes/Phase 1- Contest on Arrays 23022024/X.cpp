// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int t;
//     cin>>t;
//     while(t--){ 
//     long long int n;
//     cin>>n;
//     //vector<long long int> v;
//     long long int sum=0;
//     for(long long int i=0;i<n;i++){
//         long long int temp;
//         cin>>temp;
//         sum+=temp;
//       //  v.push_back(temp);
//     }
//     long long int q;
//     cin>>q;
//     int s1=0;
//     for(int i=0;i<q;i++){
        
//         int s[q],e[q],w[q];
//         cin>>s[i]>>e[i]>>w[i];
//         int pro = e[i] - s[i]+1;
//         s1 = s1 + w[i]* pro;
//     }
//     sum = sum + s1;
//     cout<<sum<<endl;


//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int sum = 0;
        for (long long int i = 0; i < n; i++) {
            long long int temp;
            cin >> temp;
            sum += temp;
        }
        long long int q;
        cin >> q;
        long long int s1 = 0;
        for (int i = 0; i < q; i++) {
            int s, e, w;
            cin >> s >> e >> w;
            int pro = e - s + 1;
            s1 = s1 + w * pro;
        }
        sum = sum + s1;
        cout << sum << endl;
    }
    return 0;
}
