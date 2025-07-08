#include<bits/stdc++.h>
using namespace std;

// complexity O(2^n) and space complexity O(n) [internal memory stack]
int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    if (n >= 2) {
        return fibo(n - 1) + fibo(n - 2);
    }
    return -1;
}


// time complexity O(n) and space complexity O(n)
// directly exponential to linear

int fibo_memoization(int n, vector<int> &memo) {
    for(int i =0; i<memo.size(); i++){ // for repeated call
        if (memo[n] != -1 ) {
            return memo[n];
        }
    }

    if (n <= 1) {
        memo[n] = n; // base case
        return n;
    }
    memo[n] = fibo_memoization(n - 1, memo) + fibo_memoization(n - 2, memo); // first call
    return memo[n]; // return the value stored in the vector
}

int main() {
    int n;
    cout<< "Enter the fibonacci number to be calculated: ";
    cin >> n;

    int ans = fibo(n);

    vector<int> memo(n + 1, -1); // Initialize a vector with -1 to store fibonacci numbers
    int ans2 = fibo_memoization(n, memo);

    cout<< "The fibonacci number is: " << ans2 << endl;

    return 0;

}

// Pseudocode-

/*
intitalize a vector to store the fibonacci numbers calculated


*/
