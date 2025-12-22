#include<bits/stdc++.h>
using namespace std;

int helper(int l, int r, vector<vector<int>> &dp, string &s)
{
    if(r < l) return 0;

    if(l == r) return 1;

    if(dp[l][r]!=-1) return dp[l][r];

    if(s[l] == s[r]) return 2 + helper(l+1, r-1, dp, s);

    int incI = helper(l+1, r, dp, s);
    int incJ = helper(l, r-1, dp, s);

    return max(incI, incJ);



}

int main()
{
    string s = "bbbab";
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout<<helper(0, n-1, dp, s)<<endl;
}
