#include <iostream>
using namespace std;

int squareRoot(int x) {
    if (x == 0 || x == 1) return x;

    int start = 1, end = x, ans;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // If x is a perfect square
        if (mid * mid == x) return mid;

        // If mid*mid is less than or equal to x, update start and ans
        if (mid <= x / mid) {
            start = mid + 1;
            ans = mid;
        } else { // If mid*mid is greater than x
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << squareRoot(n) << endl;
    }

    return 0;
}
