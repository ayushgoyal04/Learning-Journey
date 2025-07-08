#include <bits/stdc++.h>
using namespace std;

// void fibo_with_limit(int limit) {
//     int a = 0, b = 1, c = 0;
//     cout << "Fibonacci numbers up to " << limit << ": ";
//     while (c <= limit) {
//         cout << c << " ";
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     cout << endl;
// }

vector<int> fiboo_with_limit_recursion(int limit, vector<int> &fibo) {

    if (limit >=0 && fibo.size() < 1) {
        fibo.push_back(0);
    }
    if(fibo.size() < 2 && limit >= 1) {
        fibo.push_back(1);
    }
    if( fibo[fibo.size() - 1] + fibo[fibo.size() -2] <= limit) {
        fibo.push_back(fibo[fibo.size() - 1] + fibo[fibo.size() - 2]);
        fiboo_with_limit_recursion(limit, fibo);
    }
    return fibo;
}

vector<int> fiboo(int limit) {
    vector<int> fibo;
    int a = 1, b = 1, c = 1;
    fibo.push_back(0);
    fibo.push_back(1);
    while (c <= limit) {
        fibo.push_back(c);
        c = a + b;
        a = b;
        b = c;
    }
    return fibo;
}

int main() {
    int limit;
    cout << "Enter the limit for Fibonacci numbers: ";
    cin >> limit;

    // vector<int> fibo = fiboo(limit);


    // for (int i = 0; i < fibo.size(); i++) {
        // cout << fibo[i] << " ";
    // }
    cout << endl;

    vector<int> fibo;
    vector<int> ans = fiboo_with_limit_recursion(limit, fibo);
    for(auto num : ans) {
        cout << num << " ";
    }
    return 0;
}
