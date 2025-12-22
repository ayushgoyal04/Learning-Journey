#include<bits/stdc++.h>

using namespace std;

int f_with_dp(int ind, int prev, int arr[], int n, vector<vector<int>> &dp)
{
    if(ind == n) return 0;

    if(dp[ind][prev+1] != -1) return dp[ind][prev+1];
    // not take case
    int len = 0 + f_with_dp(ind+1, prev, arr, n, dp);

    // take case
    if(prev == -1 || arr[ind] > arr[prev])
    {
        len = max(len, 1+f_with_dp(ind+1, ind, arr, n, dp));
    }

    return dp[ind][prev+1] = len;

}

int f(int ind, int prev, int arr[], int n)
{
    if(ind == n) return 0;

    // not take case
    int len = 0 + f(ind+1, prev, arr, n);

    // take case
    if(prev == -1 || arr[ind] > arr[prev])
    {
        len = max(len, 1+f(ind+1, ind, arr, n));
    }

    return len;

}

int LISBinarySearch(int l, int arr[], vector<int> &temp)
// time-> nlogn space-> n
{
    for(int i = 1; i < l; i++)
    {
        if(arr[i] > temp.back())
        {
            temp.push_back(arr[i]);
        }
        else
        {
            auto it = lower_bound(temp.begin(), temp.end(), arr[i]);
            *it = arr[i];
        }
    }
    return temp.size();
}

int main()
{

    int l = 6;
    vector<vector<int>> dp(l, vector<int> (l+1, -1));
    int arr[] = {5, 4, 11, 1, 16, 8};
    // cout<<f_with_dp(0, -1, arr, l, dp)<<endl;
    // cout<<f(0, -1, arr, l)<<endl;

    vector<int> temp;
    temp.push_back(arr[0]);
    cout<<LISBinarySearch(l, arr, temp)<<endl;

}
  