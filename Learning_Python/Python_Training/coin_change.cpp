#include <bits/stdc++.h>
using namespace std;

int coin_change(vector<int> coins, int value) {
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(value + 1, INT_MAX));

    // Initialize base cases
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;  // 0 value can be made with 0 coins

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= value; j++) {
            if (coins[i - 1] <= j) {
                if (dp[i - 1][j - coins[i - 1]] != INT_MAX)
                    dp[i][j] = min(1 + dp[i - 1][j - coins[i - 1]], dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return (dp[n][value] == INT_MAX) ? -1 : dp[n][value];
}
    /*
    // pseudocode
    // declare a 2d array with i->coins.size()+1, j-> values + 1
    for (i : 0 -> n)
       for (j : 0 -> k){
         if i == 0 or j == 0
             arr[i][j] == 0

        else if (if we can take the coin coin[i] < value )
            arr[i][j] = min(1 + arr[i-1][j - coin[i]] , arr[i-1][j])

        else ( coins [i] > value)
                    arr[i][j] = arr[i-1][j]

    return arr[coin.size()+1][value]
    */

int main() {
    // int coins[4] = {1, 3, 4, 5};
    vector<int> coins(4);
    coins = {1, 3, 4, 5};
    int values = 7;
    int min_coins_req = coin_change(coins, values);
    cout<< min_coins_req<< " ";

}
