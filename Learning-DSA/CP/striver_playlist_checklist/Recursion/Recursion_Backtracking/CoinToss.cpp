#include <bits/stdc++.h>
using namespace std;

// void CoinToss(int n, string res){
//     // All combination
//     if(n==0){
//         cout<<res<<endl;
//         return ;
//     }
//     CoinToss(n-1, res+"T");
//     CoinToss(n-1, res+"H");
// }

void NoConHead(int n, string ans) {
    if (n == 0) {
        cout << ans << endl;
        return;
    }

    // Check if the last character is not 'H'
    if (ans.empty() || ans.back() != 'H') {
        NoConHead(n - 1, ans + "H");
    }
    NoConHead(n - 1, ans + "T");
}

int main(){
    int n = 3;
//    CoinToss(n, "");
      NoConHead(n, "");
}